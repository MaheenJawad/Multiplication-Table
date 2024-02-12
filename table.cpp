#include <iostream>
#include <iomanip>
using namespace std;



int main(){
  int rows;
  int columns;

  cout << "Let's build a multiplication table!" << endl;

  
  do {
    cout << "Enter the number of rows (1 to 12 inclusive): ";
    cin >> rows;
    cout << "\n" << endl;

    if (rows < 1 || rows > 12) {
      cout << "Invalid input, try again!\n";
  }
  
} while (rows < 1 || rows > 12);


  

do{
  cout << "Enter the number of columns (1 to 12 inclusive): ";
  cin >> columns;
  cout << "\n" << endl;

  if (columns < 1 || columns > 12) {
    cout << "Invalid input, try again!\n";
  }
} while (columns < 1 || columns > 12);


  
  cout << setw(4) << "*";
  for (int col = 1; col <= columns; col++) {
      cout << setw(4) << col;
  }
  cout << "\n";


  
  for (int row = 1; row <= rows; row++){
    cout << setw(4) << row;

    for (int col = 1; col <= columns; col++){
      cout << setw(4) << row * col;
    }
    cout << "\n";
  }
  return 0;
}  


/*
Let's build a multiplication table!
Enter the number of rows (1 to 12 inclusive): -10


Invalid input, try again!
Enter the number of rows (1 to 12 inclusive): 4


Enter the number of columns (1 to 12 inclusive): 16


Invalid input, try again!
Enter the number of columns (1 to 12 inclusive): 5


   *   1   2   3   4   5
   1   1   2   3   4   5
   2   2   4   6   8  10
   3   3   6   9  12  15
   4   4   8  12  16  20
*/




/*
EXAMPLE - 02
Let's build a multiplication table!
Enter the number of rows (1 to 12 inclusive): 6


Enter the number of columns (1 to 12 inclusive): 6


   *   1   2   3   4   5   6
   1   1   2   3   4   5   6
   2   2   4   6   8  10  12
   3   3   6   9  12  15  18
   4   4   8  12  16  20  24
   5   5  10  15  20  25  30
   6   6  12  18  24  30  36
  
*/