#include <iostream>
using namespace std;

// Define a class Rectangle
class Rectangle {

// Declare private data members accesible only within the class
private:
  double width;
  double length;
  double area;

// Declare public attributes. These are used to create Rectangle instances (constructors) and do some other operations on the data (get_area())
public:
  Rectangle();
  Rectangle(double usrWidth, double usrLength);
  Rectangle(Rectangle &rect);
  double get_area();
};

// Default constructor creating an object of the Rectangle class, assigning its private data members width and length with pre-defined values 
Rectangle::Rectangle() {
  width = 1;
  length = 2;
}

// Constructor taking in usrWidth and usrLength as parameters to construct an object of the class Rectangle
Rectangle::Rectangle(double usrWidth, double usrLength) {
  width = usrWidth;
  length = usrLength;
}

// Copy constructor taking in a reference to the first argument of the r3 object which is 1.1 and allows me to increase its value to width + 1. It creates a new objec
Rectangle::Rectangle(Rectangle &rect){
  width = rect.width + 1;
  length = rect.length;
}

// Function get_area calculating the area using the width and length passed to it as parameters from the 4 different objects
double Rectangle::get_area() {
  area = width * length;
  return area;
}


/* You should not change any codes in the main function */
int main() {
  Rectangle r1; // For object r1, the default width and length should be
                // automatically set to 1 and 2.
  Rectangle r2(2, 3);
  Rectangle r3(1.1, 1.2);
  Rectangle r4(r3); // For object r4, r4.width = r3.width + 1 while the
                    // r4.length = r3.length.

  cout << r1.get_area() << endl; // Get the area of each object
  cout << r2.get_area() << endl;
  cout << r3.get_area() << endl;
  cout << r4.get_area() << endl;

  return 0;
}