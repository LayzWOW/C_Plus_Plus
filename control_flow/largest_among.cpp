#include <iostream>

using namespace std;

int main() {
      int x = 56, y = 21, z = 34;

      if (x >= y) {
            if (x >= z) {
                  cout << x;
            } else {
                  cout << z;
            }
      } else {
            if (y >= z) {
                  cout << y;
            } else {
                  cout << z;
            }
      }

      return 0;
}
