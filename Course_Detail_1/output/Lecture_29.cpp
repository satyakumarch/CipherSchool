#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Constructor
    Rectangle(double w, double h) : width(w), height(h) {}

    // Calculate area
    double CalculateArea() {
        return width * height;
    }

    // Calculate perimeter
    double CalculatePerimeter() {
        return 2 * (width + height);
    }

    // Display rectangle details
    void DisplayDetails() {
    cout << "Rectangle details:" <<endl;
    cout << "Width: " << width << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << CalculateArea() << endl;
    cout << "Perimeter: " << CalculatePerimeter() << endl;
    }
};

int main() {
    // Create a rectangle object
    Rectangle rect(5.0, 3.0);

    // Display details using 'this'
    rect.DisplayDetails();

    return 0;
}
