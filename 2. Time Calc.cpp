#include <iostream>

using namespace std;

class Time {
private:
  int hours;
  int minutes;

public:
  Time() {
    hours = 0;
    minutes = 0;
  }

  Time(int hours, int minutes) {
    this->hours = hours;
    this->minutes = minutes;
  }

  void input() {
    cout << "Enter the hours: ";
    cin >> hours;
    cout << "Enter the minutes: ";
    cin >> minutes;
  }

  Time add(Time time) {
    Time temp;
    temp.hours = hours + time.hours;
    temp.minutes = minutes + time.minutes;
    if (temp.minutes >= 60) {
      temp.hours += 1;
      temp.minutes -= 60;
    }
    return temp;
  }

  void display() {
    cout << hours << ":" << minutes << endl;
  }
};

int main() {
  Time time1, time2, time3;

  time1.input();
  time2.input();

  time3 = time1.add(time2);

  time3.display();

  return 0;
}
