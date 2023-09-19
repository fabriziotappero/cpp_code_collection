#include <iostream>

// Abstract base class (interface) for shapes
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function (must be implemented by derived classes)
    virtual double perimeter() const = 0; // Pure virtual function

    virtual void printDetails() const {
        std::cout << "Shape of unknown type" << std::endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14159265358979323846 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159265358979323846 * radius;
    }

    void printDetails() const override {
        std::cout << "Circle: Radius = " << radius << ", Area = " << area() << ", Perimeter = " << perimeter() << std::endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }

    void printDetails() const override {
        std::cout << "Rectangle: Length = " << length << ", Width = " << width << ", Area = " << area() << ", Perimeter = " << perimeter() << std::endl;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Using the interface to calculate and print details
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    shape1->printDetails();
    shape2->printDetails();

    return 0;
}
