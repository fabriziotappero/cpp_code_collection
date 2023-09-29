/*
Example of how to write a function where you pass a pointer to a object (in this case a number)
of type defined in an ENUM. This is an alternative way to a Templated Function.
*/

#include <iostream>

// Define an enum for data types
enum DataType {
    INT,
    DOUBLE,
    STRING
};

// Function that takes a DataType enum and a void pointer as parameters
void processData(DataType dataType, void* dataPtr) {
    switch (dataType) {
        case INT:
            {
                int* intPtr = static_cast<int*>(dataPtr);
                std::cout << "Processing an integer: " << *intPtr << std::endl;
                // Perform operations for integers
            }
            break;
        case DOUBLE:
            {
                double* doublePtr = static_cast<double*>(dataPtr);
                std::cout << "Processing a double: " << *doublePtr << std::endl;
                // Perform operations for doubles
            }
            break;
        case STRING:
            {
                std::string* strPtr = static_cast<std::string*>(dataPtr);
                std::cout << "Processing a string: " << *strPtr << std::endl;
                // Perform operations for strings
            }
            break;
        default:
            std::cout << "Unknown data type." << std::endl;
    }
}

int main() {
    int intValue = 42;
    double doubleValue = 3.14159;
    std::string stringValue = "Hello, World!";

    // Call the function with different data types and their respective pointers
    processData(INT, &intValue);
    processData(DOUBLE, &doubleValue);
    processData(STRING, &stringValue);

    return 0;
}

