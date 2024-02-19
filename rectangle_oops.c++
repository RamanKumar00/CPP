#include<iostream>
using namespace std;


class Rectangle {
private:
    // Private data members
    float length;
    float width;

public:
   

    
    void setLength(float l) {
        if (l > 0)
            length = l;
        else
            cout << "Invalid length. Length set to 0.\n";
    }

    
    void setWidth(float w) {
        if (w > 0)
            width = w;
        else
            cout << "Invalid width. Width set to 0.\n";
    }

    
    float getLength() {
        return length;
    }

    
    float getWidth() {
        return width;
    }

    
    float calculateArea() {
        return length * width;
    }

    
    float calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    
    Rectangle rect;

   
    rect.setLength(5.0);
    rect.setWidth(3.0);

    // Display the dimensions and calculated properties of the rectangle
    cout << "Rectangle Dimensions:\n";
    cout << "Length: " << rect.getLength() << " units\n";
    cout << "Width: " << rect.getWidth() << " units\n";
    cout << "Area: " << rect.calculateArea() << " square units\n";
    cout << "Perimeter: " << rect.calculatePerimeter() << " units\n";

    return 0;
}
