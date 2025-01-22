#include <iostream>

using namespace std;

class Area
{
private:
    float radius, area;       // Private member variables to store the radius and area of the circle
    const float PI = 3.14159; // Private constant for the value of PI

public:

    int Input() // Public member function to read the radius from the user
    {
        cout << "Enter the radius of the circle: "; // Ask the user to enter the radius
        cin >> radius;                              // Read the radius from the user

        return 0;
    }

    int findarea()
    {                                                      // Public constructor                                   
        area = PI * radius * radius;                       // Calculate the area of the circle using the formula PI * r^2

        return 0;
    }

    int Output()
    { // Public member function to display the area of the circle
        cout << "The area of the circle is: " << area; // Display the area of the circle

        return 0;
    }


};

int main()
{
    Area s; // Create an object of the Area class, which invokes the constructor
    s.Input(); // Call the Input member function to read the radius from the user
    s.findarea(); // Call the Area member function to calculate the area of the circle
    s.Output(); // Call the Output member function to display the area of the circle
    return 0;
}