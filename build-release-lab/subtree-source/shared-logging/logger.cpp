#include "logger.h"
#include <iostream>
namespace shared_logging {
void info(const char* message) { std::cout << "[INFO] " << message << '\n'; }
void warning(const char* message) { std::cout << "[WARNING] " << message << '\n'; }
}
