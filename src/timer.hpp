#pragma once

#include <chrono>

class Timer {
public:
    Timer();                        // Constructor
    void start();                   // Start timing method
    void stop();                    // Stop timing method
    long long elapsed_time() const; // Elapsed time in seconds

private:
    std::chrono::time_point<std::chrono::system_clock> start_time;
    std::chrono::time_point<std::chrono::system_clock> end_time;
    bool running;
};