when we say that an interface class contains only pure virtual functions with no implementation, it means:

    Function Declarations Only: The interface class declares functions, but does not provide their implementation. These are pure virtual functions, which are specified by using the = 0 syntax in C++.

    Implementation in Derived Classes: The classes that inherit from the interface (i.e., the derived classes) are required to provide the actual implementation of those pure virtual functions.

Example of an Interface Class:

cpp

class Interface {
public:
    virtual void display() = 0;  // Pure virtual function (no implementation)
    virtual void show() = 0;     // Another pure virtual function
};

In a Derived Class:

The derived class must provide the implementations for the pure virtual functions declared in the interface class:

cpp

class Derived : public Interface {
public:
    void display() override {
        std::cout << "Display function in Derived class" << std::endl;
    }

    void show() override {
        std::cout << "Show function in Derived class" << std::endl;
    }
};

Key Points:

    Interface Class: A class that contains only pure virtual functions and no implementation. It is meant to define a contract or a set of functions that derived classes must implement.
    Pure Virtual Functions: Functions that are declared in the base class (interface) but have no body (implementation) in that class.
    Derived Classes: Must provide the implementation of all pure virtual functions declared in the interface class; otherwise, they will remain abstract and cannot be instantiated.

Summary:

    An interface class is used to define a common structure for derived classes.
    The function declarations (pure virtual functions) in the interface class act as placeholders.
    The derived classes must implement these functions, providing the actual behavior for the declared methods.
