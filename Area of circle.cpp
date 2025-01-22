#include <iostream>

using namespace std;

class Area
{
    float radius, area;       // Private member variables to store the radius and area of the circle
    const float PI = 3.14159; // Private constant for the value of PI

public:
    Area()
    {                                                      // Public constructor
        cout << "Enter the radius of the circle: ";        // Prompt the user to enter the radius
        cin >> radius;                                     // Read the radius from the user input
        area = PI * radius * radius;                       // Calculate the area of the circle using the formula PI * r^2
        cout << "Area of the circle is: " << area << endl; // Display the calculated area
    }
};

int main()
{
    Area s; // Create an object of the Area class, which invokes the constructor
    return 0;
}