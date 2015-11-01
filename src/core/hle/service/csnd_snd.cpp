// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/hle.h"
#include "core/hle/kernel/mutex.h"
#include "core/hle/kernel/shared_memory.h"
#include "core/hle/service/csnd_snd.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// Namespace CSND_SND

namespace CSND_SND {

const Interface::FunctionInfo FunctionTable[] = {
    {0x00010140, Initialize,            "Initialize"},
    {0x00020000, Shutdown,              "Shutdown"},
    {0x00030040, ExecuteType0Commands,  "ExecuteType0Commands"},
    {0x00040080, nullptr,               "ExecuteType1Commands"},
    {0x00050000, AcquireSoundChannels,  "AcquireSoundChannels"},
    {0x00060000, nullptr,               "ReleaseSoundChannels"},
    {0x00070000, nullptr,               "AcquireCaptureDevice"},
    {0x00080040, nullptr,               "ReleaseCaptureDevice"},
    {0x00090082, nullptr,               "FlushDCache"},
    {0x000A0082, nullptr,               "StoreDCache"},
    {0x000B0082, nullptr,               "InvalidateDCache"},
};

////////////////////////////////////////////////////////////////////////////////////////////////////
// Interface class

Interface::Interface() {
    Register(FunctionTable);
}

static Kernel::SharedPtr<Kernel::SharedMemory> shared_memory = nullptr;
static Kernel::SharedPtr<Kernel::Mutex> mutex = nullptr;

void Initialize(Service::Interface* self) {
    u32* cmd_buff = Kernel::GetCommandBuffer();

    shared_memory = Kernel::SharedMemory::Create(cmd_buff[1],
            Kernel::MemoryPermission::ReadWrite,
            Kernel::MemoryPermission::ReadWrite, "CSNDSharedMem");

    mutex = Kernel::Mutex::Create(false);

    cmd_buff[1] = 0;
    cmd_buff[2] = 0x4000000;
    cmd_buff[3] = Kernel::g_handle_table.Create(mutex).MoveFrom();
    cmd_buff[4] = Kernel::g_handle_table.Create(shared_memory).MoveFrom();
}

void ExecuteType0Commands(Service::Interface* self) {
    u32* cmd_buff = Kernel::GetCommandBuffer();

    if (shared_memory != nullptr) {
        struct Type0Command* command = reinterpret_cast<struct Type0Command*>(
                shared_memory->GetPointer(cmd_buff[1]));
        if (command == nullptr) {
            cmd_buff[1] = 1;
        }else{
            LOG_WARNING(Service, "(STUBBED) CSND_SND::ExecuteType0Commands");
            command->finished |= 1;
            cmd_buff[1] = 0;
        }
    }else{
        cmd_buff[1] = 1;
    }
}

void AcquireSoundChannels(Service::Interface* self) {
    u32* cmd_buff = Kernel::GetCommandBuffer();
    cmd_buff[1] = 0;
    cmd_buff[2] = 0xFFFFFF00;
}

void Shutdown(Service::Interface* self) {
    shared_memory = nullptr;
    mutex = nullptr;
}

} // namespace
