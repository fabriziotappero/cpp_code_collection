A very usefull collection of short C++ exampled for datatypes, patterns and more.

## CPP ENUM TYPE

Sometimes you want to pass to a function an object of a **no predetermined type**. A templated function is a good way to do that. However **templated functions** cannot be virtual in C++. In this example en ENUM and a pointer are used for this purpose.

## INTERFACE PATTERN

In this example, the **Shape** class serves as an **interface** with two pure virtual functions (**area** and **perimeter**) that must be implemented by any class deriving from it. The **Circle** and **Rectangle** classes inherit from the **Shape** class and provide their own implementations of the **area** and **perimeter** functions.

The **printDetails** function is also declared in the interface, but it has a default implementation in the base class. Derived classes can override this function to provide custom behavior, as shown in the **Circle** and **Rectangle** classes.

CHATGPT prompt: Write me an example where inheritance is used to implement a C++ interface.

## SINK PATTERN
Let's create a simple example to illustrate the concept of a logging system with sinks in C++. We'll define a basic logger, a couple of sink types (**ConsoleSink** and **FileSink**), and demonstrate how to register and use these sinks.

In this example:
    **LogSink** is an abstract base class representing the interface for a sink.
    **ConsoleSink** and **FileSin**k are concrete implementations of LogSink that handle log messages differently (output to the console or write to a file).
    The **Logger** class has a **registerSink** method to register a sink, and a **log** method to log messages using the registered sink.

This is a basic example, and in a real-world scenario, you might have more sophisticated logging systems with various features and options. The key idea is to separate the logging logic from the specifics of where the log messages go by using the sink pattern.
