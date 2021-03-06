// Copyright 2014 Citra Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <memory>
#include <string>

#include "core/file_sys/archive_backend.h"
#include "core/hle/result.h"

////////////////////////////////////////////////////////////////////////////////////////////////////
// FileSys namespace

namespace FileSys {

/// File system interface to the SaveData archive
class ArchiveFactory_SaveData final : public ArchiveFactory {
public:
    ArchiveFactory_SaveData(const std::string& mount_point);

    std::string GetName() const override { return "SaveData"; }

    ResultVal<std::unique_ptr<ArchiveBackend>> Open(const Path& path) override;
    ResultCode Format(const Path& path) override;

private:
    std::string mount_point;
};

} // namespace FileSys
