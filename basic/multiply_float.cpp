#include <iostream>

using namespace std;

float multiplyFloat (float a, float b) { return a * b; }

int main() {

      float a = 10.9, b = 12.7, product;

      product = multiplyFloat(a, b);

      cout << product << "\n";

      return 0;

}
