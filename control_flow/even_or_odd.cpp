#include <iostream>

using namespace std;

int main() {
      int x = 13;
      int res = x & 1;

      if (res % 2 == 0)
            cout << "This number is even" << "\n";
      else
            cout << "This number is odd" << "\n";
      return 0;
}
