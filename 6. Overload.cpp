#include <iostream>

using namespace std;

class Float {
private:
  float number;

public:
  Float() {
    number = 0.0;
  }

  Float(float number) {
    this->number = number;
  }

  float getNumber() {
    return number;
  }

  void setNumber(float number) {
    this->number = number;
  }

  Float operator+(Float f) {
    Float temp;
    temp.number = number + f.number;
    return temp;
  }

  Float operator-(Float f) {
    Float temp;
    temp.number = number - f.number;
    return temp;
  }

  Float operator*(Float f) {
    Float temp;
    temp.number = number * f.number;
    return temp;
  }

  Float operator/(Float f) {
    Float temp;
    temp.number = number / f.number;
    return temp;
  }

  void input1() {
    cout << "Enter 1st the number: ";
    cin >> number;
  }
    void input2() {
      cout << "Enter 2nd the number: ";
      cin >> number;
    }
};

int main() {
  Float f1;
  Float f2;

  f1.input1();
  f2.input2();

  Float f3 = f1 + f2;
  Float f4 = f1 - f2;
  Float f5 = f1 * f2;
  Float f6 = f1 / f2;

  cout << "f1 + f2 = " << f3.getNumber() << endl;
  cout << "f1 - f2 = " << f4.getNumber() << endl;
  cout << "f1 * f2 = " << f5.getNumber() << endl;
  cout << "f1 / f2 = " << f6.getNumber() << endl;

  return 0;
}
