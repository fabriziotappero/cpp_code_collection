A collection of C++ stuff.

## CPP ENUM TYPE

Sometimes you want to pass to a function an object of a **no predetermined type**. A templated function is a good way to do that. However **templated functions** cannot be virtual in C++. In this example en ENUM and a pointer are used for this purpose.

## CPP INTERFACE

In this example, the **Shape** class serves as an **interface** with two pure virtual functions (**area** and **perimeter**) that must be implemented by any class deriving from it. The **Circle** and **Rectangle** classes inherit from the **Shape** class and provide their own implementations of the **area** and **perimeter** functions.

The **printDetails** function is also declared in the interface, but it has a default implementation in the base class. Derived classes can override this function to provide custom behavior, as shown in the **Circle** and **Rectangle** classes.

CHATGPT prompt: Write me an example where inheritance is used to implement a C++ interface.


