#include <iostream>

using namespace std;

// using unsinged int because value cannot be negative
unsigned int factorial (unsigned int n) {
      if (n == 0) return 1;

      return n * factorial(n - 1);
}

int main() {
      int n = 6;

      cout << "Factorial of " << n << " is " << factorial(n) << "\n";

      return 0;
}
