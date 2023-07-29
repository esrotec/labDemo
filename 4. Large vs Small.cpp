#include <iostream>

using namespace std;

class A {
public:
  int a;

  void input() {
    cout << "Enter the value of a: ";
    cin >> a;
  }
};

class B {
public:
  int b;

  void input() {
    cout << "Enter the value of b: ";
    cin >> b;
  }
};

int main() {
  A a;
  B b;

  a.input();
  b.input();

  // Find the largest number
  int largest;
  if (a.a > b.b) {
    largest = a.a;
  } else {
    largest = b.b;
  }

  // Find the smallest number
  int smallest;
  if (a.a < b.b) {
    smallest = a.a;
  } else {
    smallest = b.b;
  }

  // Print the largest and smallest numbers
  cout << "The largest number is: " << largest << endl;
  cout << "The smallest number is: " << smallest << endl;

  return 0;
}
