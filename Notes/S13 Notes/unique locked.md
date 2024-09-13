std::unique_lock is a synchronization primitive in C++ that provides a more flexible and robust way to manage mutexes compared to std::lock_guard. It is part of the C++ Standard Library and is defined in the <mutex> header. Here are the key features and benefits of using std::unique_lock:
Key Features of std::unique_lock:

    Ownership Management:
        std::unique_lock manages the ownership of a mutex, automatically locking it when the unique_lock object is created and unlocking it when the unique_lock object is destroyed.

    Flexibility:
        Unlike std::lock_guard, which locks a mutex upon construction and unlocks it upon destruction, std::unique_lock provides additional flexibility with explicit locking and unlocking, timed locking, and deferred locking.

    Deferred Locking:
        You can create a std::unique_lock object without immediately locking the mutex. This is useful if you need to perform some operations before acquiring the lock.

    Timed Locking:
        std::unique_lock allows you to try to acquire the mutex within a specified time limit using its try_lock_for or try_lock_until member functions.

    Condition Variables:
        std::unique_lock is compatible with condition variables and can be used with functions like wait, wait_for, and wait_until provided by std::condition_variable.

Basic Usage Example:

Here's a simple example demonstrating how to use std::unique_lock:

cpp

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

std::mutex mtx;  // Mutex object

void print_even(int n) {
    std::unique_lock<std::mutex> lock(mtx);  // Lock the mutex
    for (int i = 0; i <= n; i += 2) {
        std::cout << "Even: " << i << std::endl;
    }
    // Mutex is automatically released when lock goes out of scope
}

void print_odd(int n) {
    std::unique_lock<std::mutex> lock(mtx);  // Lock the mutex
    for (int i = 1; i <= n; i += 2) {
        std::cout << "Odd: " << i << std::endl;
    }
    // Mutex is automatically released when lock goes out of scope
}

int main() {
    std::thread t1(print_even, 10);
    std::thread t2(print_odd, 10);

    t1.join();  // Wait for t1 to finish
    t2.join();  // Wait for t2 to finish

    return 0;
}

Advanced Usage:

    Deferred Locking:

    cpp

std::unique_lock<std::mutex> lock(mtx, std::defer_lock);
// Perform other operations here
lock.lock();  // Lock the mutex when needed
// Critical section
lock.unlock();  // Unlock the mutex when done
