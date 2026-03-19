#include <iostream>

using namespace std;

namespace person1 {
void name() {
      cout << "Hello world" << "\n";
}
}

int main() {
      person1::name();

      return 0;
}
