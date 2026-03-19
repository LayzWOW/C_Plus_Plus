#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits.h>
#include <limits>

using namespace std;

int main(void) {
      srand(time(0));
      int target = rand() % 100 + 1;
      int guess = 0;

      while (guess != target) {
            cout << "Enter your guess: " << "\n";
            cin >> guess;

            if (!guess) {
                  cout << "Invalid input, please try again!" << endl;
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                  continue;
            }

            if (guess > target) { cout << "Too high!" << endl; }
            else if (guess < target) { cout << "Too low!" << endl; }
            else { cout << "You got it!" << endl; }
      }

      return 0;
}
