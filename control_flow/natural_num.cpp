#include <iostream>

using namespace std;

int findSum (int n) {
      int i, sum = 0;

      for (i = 0; i < n; i++) sum += i;
      return sum;
}

int main() {
      int n = 6;
      int sum_of_natural = findSum(n);

      cout << sum_of_natural << "\n";

      return 0;
}
