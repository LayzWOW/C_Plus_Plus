#include <iostream>

using namespace std;

int main() {
      int x = 56, y = 21, z = 34;

      cout << (x >= y ? (x >= z ? x : z) : (y >= z ? y : z)) << "\n";

      return 0;
}
