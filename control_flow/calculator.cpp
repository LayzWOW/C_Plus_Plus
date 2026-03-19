#include <iostream>
#include <limits>

using namespace std;

int main() {
      char operation;
      double x, y, result;

      cout << "Enter the operator (+, -, /, *): " << "\n";
      cin >> operation;

      cout << "Please enter two numbers: " << "\n";
      cout << "Number 1: " << "\n";
      cin >> x;
      cout << "Number 2: " << "\n";
      cin >> y;

      switch (operation) {
            case '+':
                  result = x + y;
                  break;
            case '-':
                  result = x - y;
                  break;
            case '/':
                  result = x / y;
                  break;
            case '*':
                  result = x * y;
                  break;
            default:
                  cout << "Error! Operator is not correct";
                  result = -numeric_limits<double>::max();
      }

      if (result != -numeric_limits<double>::max()) {
            cout << "Result: " << result << "\n";
      }

      return 0;
}
