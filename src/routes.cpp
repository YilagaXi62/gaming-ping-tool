// routes.cpp — part of gaming-ping-tool.

#include "gamingpingtool/routes.h"

#include <cstdio>

namespace gamingpingtool {

Routes::Routes(const std::string& config_path)
    : config_path_(config_path) {}

void Routes::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Routes::run() {
    if (verbose_) std::fprintf(stderr, "[gaming-ping-tool] routes: run\n");
    // core logic lives here
    return true;
}

}  // namespace gamingpingtool
