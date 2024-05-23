#include "../include/spdlog/spdlog.h"
#include "../include/spdlog/sinks/basic_file_sink.h"  // Support for logging to files
#include "../include/spdlog/sinks/stdout_color_sinks.h"
#include "../include/Logger.h"


int main() {
    
    // Create a file logger
    auto file_logger = spdlog::basic_logger_mt("file_logger", "logs/basic_log.txt");
    file_logger->info("This is logged to a file.");

    // Changing log level to debug
    // Set the global log level to info
    spdlog::set_level(spdlog::level::info);
    spdlog::debug("This debug message will not be logged because the global level is set to info");
    spdlog::info("This info message will be logged");

    auto console = spdlog::stdout_color_mt("console");
    // Set a custom format
    console->set_pattern("[%^%l%$] %v");  // Example: [info] Message

    console->info("Welcome to spdlog!");
    console->error("An error message with arg: {}", 42);

    // Changing log level to debug
    console->set_level(spdlog::level::debug); // Set specific logger to debug level
    console->debug("This is a debug message");

    // Set the global log level to info
    spdlog::set_level(spdlog::level::info);
    spdlog::debug("This debug message will not be logged because the global level is set to info");
    spdlog::info("This info message will be logged");

    // Using the global logger
    auto global_logger = Logger::getInstance();
    Logger::setLogLevel(spdlog::level::debug);
    Logger::setPattern("[%H:%M:%S %z] [thread %t] [%l] %v");

    global_logger->info("Application started with a new pattern.");
    global_logger->debug("This is a debug message.");
    return 0;
}