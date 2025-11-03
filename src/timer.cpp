#include "timer.hpp"

Timer::Timer() {
    running = false; // Tracks to see if the timer is running; by default it is false
}

void Timer::start() {
    running = true;
    start_time = std::chrono::system_clock::now();
}

void Timer::stop() {
    if (running) {
        end_time = std::chrono::system_clock::now();
        running = false;
    }
}

long long Timer::elapsed_time() const {
    long long elapsed_time = duration_cast<std::chrono::seconds>(end_time - start_time).count();
    return elapsed_time;
}