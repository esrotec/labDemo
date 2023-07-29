#include <iostream>
using namespace std;
float volume(float length, float breadth, float height) {
  return length * breadth * height;
}
float volume(float radius, float height) {
  const float PI = 3.1416;
  return PI * radius * radius * height;
}
float volume(float side) {
  return side * side * side;
}
int main() {
  float length, breadth, height, radius, side;
  cout << "Enter the length of the rectangle: ";
  cin >> length;
  cout << "Enter the breadth of the rectangle: ";
  cin >> breadth;
  cout << "Enter the height of the rectangle: ";
  cin >> height;
  float volumeRectangle = volume(length, breadth, height);
  cout << "The volume of the rectangle is: " << volumeRectangle << endl;
  cout << "Enter the radius of the cylinder: ";
  cin >> radius;
  cout << "Enter the height of the cylinder: ";
  cin >> height;
  float volumeCylinder = volume(radius, height);
  cout << "The volume of the cylinder is: " << volumeCylinder << endl;
  cout << "Enter the side of the cube: ";
  cin >> side;
  float volumeCube = volume(side);
  cout << "The volume of the cube is: " << volumeCube << endl;

return 0;
}
