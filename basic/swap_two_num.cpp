#include <iostream>

using namespace std;

int main() {
      int temp;
      int a = 8, b = 10;

      cout <<  "Before swapping a = " << a << ", b = " << b << "\n";

      temp = a;
      a = b;
      b = temp;

      // alternatively use
      // swap(a, b)
      // or
      // b = a + b;
      // a = b - a;
      // b = b - a;

      cout <<  "After swapping a = " << a << ", b = " << b << "\n";

      return 0;
}
