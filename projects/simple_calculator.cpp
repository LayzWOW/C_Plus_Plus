#include <ios>
#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

void calculateNums(double num1, double num2, char op);

int main(void) {
      double num1, num2;
      char op;

      system("clear");
      // Windows: system("cls");

      while (true) {
            cout << "Please enter an operation: " << "\n";
            cin >> op;

            if (op == 'q') break;

            if (op != '+' && op != '-' && op != '*' && op != '/') {
                  cout << "Invalid operation! Try again." << endl;
                  cin.ignore(1000, '\n'); // Clear the buffer
                  continue;
            }

            cout << "Please enter two numbers: " << "\n";
            if (!(cin >> num1 >> num2)) {
                  cout << "Invalid numeric input!" << endl;
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  continue;
            }

            calculateNums(num1, num2, op);
      }

      return 0;
}

void calculateNums(double num1, double num2, char op) {
      switch (op) {
            case '+': cout << "Result: " << num1 + num2 << endl; break;
            case '-': cout << "Result: " << num1 - num2 << endl; break;
            case '*': cout << "Result: " << num1 * num2 << endl; break;
            case '/':
                  if (num2 == 0) cout << "Division by zero is not allowed" << endl;
                  else cout << "Result: " << num1 / num2 << endl;
                  break;
            default:
                  cout << "You have entered the wrong operation, please try again." << endl;
      }
}

