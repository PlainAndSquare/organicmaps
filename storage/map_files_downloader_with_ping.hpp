#pragma once

#include "storage/map_files_downloader.hpp"

namespace storage
{
class MapFilesDownloaderWithPing : public MapFilesDownloader
{
public:
  // MapFilesDownloader overrides:
  void GetServersList(ServersListCallback const & callback) override;
};
}  // namespace storage
