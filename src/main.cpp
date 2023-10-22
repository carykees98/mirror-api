#include "mirror-logging/logger.h"

int main() {
    std::shared_ptr<mirror::Logger> logger = mirror::Logger::getInstance();
    logger->error("this should fail");
    return 0;
}
