#include <iostream>

using namespace std;

void swapNum (int* a, int * b);

int main(void) {
      int a = 6, b = 9;

      swapNum(&a, &b);

      cout << "a: " << a << "\n" << "b: " << b << endl;

      return 0;
}

void swapNum(int* a, int* b) {
      *b = *a + *b;
      *a = *b - *a;
      *b = *b - *a;
}


