#include <iostream>

using namespace std;

class COMPLEX {
private:
  float real;
  float imaginary;

public:
  void input() {
    cout << "Enter the real part: ";
    cin >> real;
    cout << "Enter the imaginary part: ";
    cin >> imaginary;
  }

  void show() {
    cout << real << " + " << imaginary << "i" << endl;
  }

  COMPLEX add(COMPLEX c) {
    COMPLEX temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
  }
};

int main() {
  COMPLEX c1, c2, c3;

  c1.input();
  c2.input();

  c3 = c1.add(c2);

  c3.show();

  return 0;
}
