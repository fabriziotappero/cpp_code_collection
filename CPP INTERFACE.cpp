#include <iostream>

// Abstract base class (interface) for a Shape
class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

// Concrete class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14159265358979323846 * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * 3.14159265358979323846 * radius;
    }
};

// Concrete class: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Using the interface to calculate area and perimeter
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    std::cout << "Circle - Area: " << shape1->calculateArea() << ", Perimeter: " << shape1->calculatePerimeter() << std::endl;
    std::cout << "Rectangle - Area: " << shape2->calculateArea() << ", Perimeter: " << shape2->calculatePerimeter() << std::endl;

    return 0;
}
