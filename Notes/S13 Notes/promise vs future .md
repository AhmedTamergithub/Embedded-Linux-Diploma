In C++, both std::promise and std::future are mechanisms used for managing asynchronous operations and for passing results between threads. However, they serve different purposes and work together to enable communication between a "producer" (e.g., the thread that performs some work) and a "consumer" (e.g., the thread that needs the result of that work).
1. std::future:

    Purpose: A future represents a value (or an exception) that will become available at some point in the future. It provides a mechanism to retrieve the result of an asynchronous operation once it is completed.
    How it works:
        A future object does not set a value itself. Instead, it is used by a thread to "wait" for the result of a task that is being computed elsewhere (by another thread).
        The consumer thread can call .get() on the future to retrieve the result. If the result is not yet ready, .get() will block until the result is available.
    Usage: The most common way to obtain a future is from std::async (which starts an asynchronous operation) or via a std::promise.

2. std::promise:

    Purpose: A promise is used to "promise" or provide a value that will eventually be delivered to a future. It is the mechanism through which a result (or an exception) is set for the future.
    How it works:
        A promise object is typically owned by the thread that is doing the work (the producer). The thread sets the value or exception via the promise, which makes it available to the future.
        A future is obtained from the promise using the promise::get_future() method.
        The producer thread can call set_value() on the promise to provide the result or set_exception() to signal an error.
    Usage: A promise is often used when you need more control over the timing and execution of the asynchronous task than what std::async provides.

Interaction between promise and future:

    Producer-Consumer Model:
        A producer thread creates a promise object and uses it to set a value.
        A consumer thread gets a future from the promise and waits for the result.
        The producer uses promise::set_value() (or set_exception()) to set the value, while the consumer waits for it using future::get().

Example of std::promise and std::future:

cpp

#include <iostream>
#include <thread>
#include <future>

void calculate_sum(std::promise<int>&& promise, int a, int b) {
    int result = a + b;
    // Set the result into the promise
    promise.set_value(result);
}

int main() {
    // Create a promise object
    std::promise<int> promise;
    
    // Get the associated future from the promise
    std::future<int> future = promise.get_future();
    
    // Start a thread that will calculate the sum and set the promise value
    std::thread t(calculate_sum, std::move(promise), 5, 10);
    
    // Get the result from the future (this will block until the promise sets the value)
    std::cout << "The sum is: " << future.get() << std::endl;
    
    // Join the thread
    t.join();

    return 0;
}

Key Differences:
Aspect	std::promise	std::future
Role	Produces and provides a value (or exception)	Retrieves and waits for the result of the operation
Main Function	set_value() or set_exception() to fulfill a promise	get() to retrieve the result (blocks if not ready)
Ownership	Owned by the producer thread	Owned by the consumer thread
How it's Used	Used to pass a value or signal completion	Used to wait for a value or signal of completion
Use Cases:

    std::future is typically used when you want to get the result of a task in a thread-safe way after an asynchronous operation.
    std::promise is useful when you want to explicitly manage the result or the completion signal of an operation between threads.

In summary:

    std::future is the receiving end, allowing a thread to wait for a result.
    std::promise is the producing end, providing a way for one thread to pass a result to another thread through a future.
