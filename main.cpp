#include <iostream>
#include <thread>
#include "src/timer.hpp"

int main() {
  Timer timer; // Timer object

  std::cout << "How long do you want to run the timer for?" << std::endl;
  int duration;         // Store how long the user wants to run the timer
  std::cin >> duration; // Grab desired duration

  std::cout << "Starting timer for " << duration << " seconds..." << std::endl;
  timer.start();

  std::this_thread::sleep_for(std::chrono::seconds(duration));
  timer.stop();

  std::cout << "Timer stopped!" << std::endl;

  std::cout << "Elapsed time: " << timer.elapsed_time() << " seconds." << std::endl;

  return 0;
}