// main.cpp — entry point. Wires config and subsystems together.

#include "gamingpingtool/settings.h"
#include "gamingpingtool/routes.h"
#include "gamingpingtool/tweaks.h"
#include "gamingpingtool/monitor.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gamingpingtool::Settings settings = gamingpingtool::Settings::load_default();
    gamingpingtool::Routes routes(settings.store_path);
    gamingpingtool::Tweaks tweaks(settings.store_path);
    gamingpingtool::Monitor monitor(settings.store_path);
    std::fprintf(stderr, "[gaming-ping-tool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
