#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double inches, feet, distInches, angleDegrees;

    cout << "Enter the height of your eye in inches: ";
    cin >> inches;

    cout << "Enter the distance from the tree: ";
    cin >> feet;
cout<<"Enter the distance from the tree in inches: ";
cin>>distInches;
cout<<"Enter the angle between the horizontal and the line to the top of the tree: ";
    cin >> angleDegrees;


    double d_total_inches = 12*feet  + distInches;


    double angle_radians = angleDegrees * M_PI / 180;


    double tree_height_feet = (distInches / 12) + (d_total_inches * tan(angle_radians)) / 12;


    cout << "The height of the tree is approximately " << tree_height_feet << " feet." << endl;

    return 0;
}