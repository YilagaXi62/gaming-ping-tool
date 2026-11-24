// tweaks.cpp — part of gaming-ping-tool.

#include "gamingpingtool/tweaks.h"

#include <cstdio>

namespace gamingpingtool {

Tweaks::Tweaks(const std::string& config_path)
    : config_path_(config_path) {}

void Tweaks::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tweaks::run() {
    if (verbose_) std::fprintf(stderr, "[gaming-ping-tool] tweaks: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamingpingtool
