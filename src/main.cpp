// STD Includes
#include <fstream>
#include <iostream>

// Library Includes
#include <nlohmann/json.hpp>
#include <mirror/logger.h>

using json = nlohmann::json;

int main() {
    // Load Config
    json config{};
    {
        std::ifstream configFile("../config.json");
        config = json::parse(configFile);
    }

    // Configure Logger
    mirror::Logger *logger = mirror::Logger::getInstance();
    logger->configure(config["port"].get<uint16_t>(), "mirror-api");

    std::exit(EXIT_SUCCESS);
}
