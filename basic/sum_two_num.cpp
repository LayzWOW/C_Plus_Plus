#include <iostream>

using namespace std;

int main() {
      int i;
      int x = 9, y = 4;

      cout << "The sum of two numbers are: " << x + y << "\n";

      for (i = 0; i < x; i++) {
            y--;
      }

      for (i = 0; i > y; i--) {
            x--;
      }

      cout << x << "\n";
      cout << y << "\n";

      return 0;
}
