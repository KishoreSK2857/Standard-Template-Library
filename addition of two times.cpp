/*Define a class Time.Get two times from user and find the addition of times in 24 hour format*/
  
  
#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;

public:
    Time(int h , int m) : hour(h), minute(m) {}

    Time operator+(const Time& t2) const
    {
        int tminutes = hour * 60 + minute + t2.hour * 60 + t2.minute;
        int newhour = (tminutes / 60)%24;
        int newminute = tminutes % 60;

        return Time(newhour, newminute);
    }

    void display() const {
        cout << (hour < 10 ? "0" : "") <<hour<< ":" << (minute < 10 ? "0" : "") << minute << endl;
    }
};

int main() {
    int hour1, minute1, hour2, minute2;

    cout << "Enter the first time (hh:mm) in 24-hour format: ";
    cin >> hour1 >> minute1;

    cout << "Enter the second time : ";
    cin >> hour2 >> minute2;

    Time time1(hour1, minute1);
    Time time2(hour2, minute2);

    Time result = time1 + time2;
    cout << "The addition of two times is: ";
    result.display();

    return 0;
}
