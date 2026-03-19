#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void fill (int **p, int rowSize, int columnSize);
void print (int **p, int rowSize, int columnSize);

int main(void) {
      int **board;

      int rows;
      int columns;

      system("clear");

      cout << "Enter the number of rows and columns: " << "\n";
      cin >> rows >> columns;

      board = new int*[rows];

      for (int row = 0; row < rows; row++) { board[row] = new int[columns]; }

      fill(board, rows, columns);

      cout << "Board:" << endl;

      print(board, rows, columns);

      return 0;
}

void fill(int **p, int rowSize, int columnSize) {
      for (int row = 0; row  < rowSize; row++) {
            cout << "Enter " << columnSize << " number(s) for row " << "number " << row << ": \n" ;

            for (int col = 0; col < columnSize; col++) { cin >> p[row][col]; }

            cout << endl;
      }
}

void print(int **p, int rowSize, int columnSize) {
      for (int row = 0; row < rowSize; row++) {
            for (int col = 0; col < columnSize; col++) { cout << setw(5) << p[row][col]; }

            cout << endl;
      }
}

