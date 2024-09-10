In C++, when handling exceptions in a catch block, we typically pass the exception object by reference for several reasons:
1. Avoids Copying:

Passing the exception object by reference avoids the overhead of copying the object. If you catch the exception by value, a new copy of the exception object is created, which can be inefficient, especially if the exception object is large or complex.

Example:

cpp

catch (std::exception e) {   // Catches by value (inefficient)
}

This would create a copy of the exception object, which is unnecessary.
2. Preserves Polymorphism:

Passing by reference is essential for polymorphism when working with exception class hierarchies. If you catch by value, slicing occurs, which means that derived class-specific information is lost.

Example:

cpp

catch (std::exception e) {  // Catching by value causes slicing
    std::cout << e.what();  // Only accesses base class `std::exception`, derived class info lost
}

If an exception of a derived class (like std::runtime_error) is thrown but caught by value as std::exception, only the base class part will be used, and you will lose the specific behavior of the derived class.

Catching by reference preserves the dynamic type, allowing the catch block to use the actual derived class and access its members properly:

cpp

catch (const std::exception& e) {   // Catches by reference (efficient, preserves polymorphism)
    std::cout << e.what();          // Preserves derived class information
}

3. Exception Safety:

Passing by reference also makes the code more exception-safe. If you throw an object and catch it by value, the copy constructor is invoked, which might itself throw another exception. This could lead to undefined behavior.
Conclusion:

    Efficiency: Passing by reference avoids unnecessary copying.
    Polymorphism: It ensures that the dynamic type (such as derived class details) is preserved.
    Safety: It reduces the risk of unexpected behavior or exceptions during the handling process.

Therefore, it is a best practice to catch exceptions by reference, usually as const std::exception& to ensure optimal performance and behavior.
