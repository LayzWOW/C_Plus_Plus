#include <cstdio>
#include <iostream>

using namespace std;

int reverseNum (int num) {
      int rev_num = 0;

      while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num /= 10;
      }

      return rev_num;
}

int main() {
      int num = 4963;
      cout << "Reverse of this number is " << reverseNum(num);

      getchar();

      return 0;
}
