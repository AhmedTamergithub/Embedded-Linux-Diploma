Rethrowing an exception in C++ is useful when you want to handle an exception at a lower level but also want to propagate the exception up to higher levels for additional handling. You can use the throw; statement inside a catch block to rethrow the current exception.
Example: Rethrowing an Exception in C++

Here’s a scenario where rethrowing an exception is useful: Suppose we have two functions, functionA and functionB. functionB tries to handle an exception, logs some information, and then rethrows the exception so that functionA can handle it further.

cpp

#include <iostream>
#include <stdexcept>

void functionB() {
    try {
        // Simulating an error
        throw std::runtime_error("Error occurred in functionB");
    }
    catch (const std::runtime_error& e) {
        // Handle the exception (log it) but rethrow to higher-level functions
        std::cout << "functionB caught the exception: " << e.what() << std::endl;
        throw;  // Rethrow the same exception
    }
}

void functionA() {
    try {
        functionB();  // Call functionB which may throw an exception
    }
    catch (const std::exception& e) {
        // Handle the exception at a higher level
        std::cout << "functionA caught the exception: " << e.what() << std::endl;
    }
}

int main() {
    try {
        functionA();  // Start the chain of function calls
    }
    catch (...) {
        std::cout << "Main caught an unhandled exception!" << std::endl;
    }

    return 0;
}

Explanation:

    functionB:
        functionB throws a std::runtime_error.
        It catches the exception locally, logs a message (functionB caught the exception), and then rethrows the exception using throw;.

    functionA:
        functionA calls functionB. When functionB rethrows the exception, functionA catches it and logs the message (functionA caught the exception).

    Main:
        If the exception were not caught by functionA, it would propagate to the main function. The main function has a generic catch(...) block to catch any unhandled exceptions.

Output:

bash

functionB caught the exception: Error occurred in functionB
functionA caught the exception: Error occurred in functionB

Why Rethrow:

    Log & Propagate: functionB logs the exception but cannot fully resolve it, so it passes it to functionA to handle it more broadly.
    Partial Handling: Sometimes you need to do partial handling, like logging or cleanup, but still need the calling function to take action based on the exception.

In summary, rethrowing allows intermediate handlers to react to exceptions (e.g., logging) while still ensuring that higher-level handlers get a chance to deal with the error.
