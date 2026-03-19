#include <iostream>

using namespace std;

float areaRectangle(float a, float b) {
      float area;

      area = a * b;
      return area;
}

float perimeterRectangle(float a, float b) {
      float perimeter;

      perimeter = 2 * (a + b);
      return perimeter;
}

int main() {
      float a = 10.5, b = 9.2;

      cout << "The area of a rectangle is: " << areaRectangle(a, b) << "\n";
      cout << "The perimeter of a rectangle is: " << perimeterRectangle(a, b) << "\n";
      return 0;
}
