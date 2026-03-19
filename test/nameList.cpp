#include <cstdlib>
#include <iostream>

using namespace std;

int main(void) {
      system("clear");

      int arraySize;
      cout << "Enter the size of array: " << "\n";
      cin >> arraySize;

      string* nameList = new string[arraySize];
      string* temp = nameList;

      for (int i = 0; i < arraySize; i++) {
            cout << "Please enter your name: " << "\n";
            cin >> *temp;
            temp++;
            system("clear");
      }

      for (int j = 0; j < arraySize; j++) {
            cout << "Your name is " << nameList[j] << "\n";
      }

      delete []nameList;

      return 0;
}
