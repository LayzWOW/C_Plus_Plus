#include <iostream>

using namespace std;

bool checkYear (int year) {
      return (year % 400 == 0) ? true : (year % 100 == 0) ? false : (year % 4 == 0);
}

int main() {
      int year = 2000;

      cout << (checkYear(year) ? "This is a leap year" : "This is not a leap year") << "\n";

      return 0;
}
