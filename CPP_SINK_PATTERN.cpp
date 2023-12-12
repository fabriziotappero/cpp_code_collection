/*
IMPLEMENTATION OF C++ SINK PATTERN.
*/
#include <iostream>
#include <fstream>
#include <memory>

// Sink interface
class LogSink {
public:
    virtual void log(const std::string& message) = 0;
    virtual ~LogSink() = default;
};

// Console sink implementation
class ConsoleSink : public LogSink {
public:
    void log(const std::string& message) override {
        std::cout << "[ConsoleSink] " << message << std::endl;
    }
};

// File sink implementation
class FileSink : public LogSink {
private:
    std::ofstream file;

public:
    FileSink(const std::string& filename) : file(filename) {
        if (!file.is_open()) {
            std::cerr << "Error opening file: " << filename << std::endl;
        }
    }

    void log(const std::string& message) override {
        if (file.is_open()) {
            file << "[FileSink] " << message << std::endl;
        }
    }
};

// Logger class
class Logger {
private:
    std::unique_ptr<LogSink> sink;

public:
    // Register a sink
    template <typename SinkT, typename... Args>
    void registerSink(Args&&... args) {
        sink = std::make_unique<SinkT>(std::forward<Args>(args)...);
    }

    // Log a message using the registered sink
    void log(const std::string& message) {
        if (sink) {
            sink->log(message);
        }
    }
};

int main() {
    // Create a logger
    Logger logger;

    // Register a ConsoleSink
    logger.registerSink<ConsoleSink>();

    // Log a message (will be directed to the console)
    logger.log("This message goes to the console.");

    // Register a FileSink
    logger.registerSink<FileSink>("logfile.txt");

    // Log a message (will be written to the file)
    logger.log("This message goes to the file.");

    return 0;
}
