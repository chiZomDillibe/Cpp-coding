#include <iostream>

using namespace std;

int main()
{
   int matrix1 [3][2];
   int matrix2 [3][2];

    //matrix A
    cout << "Welcome to my matrix calculator" << endl << endl;
    for(int x = 0; x < 3; x++)
    {
      for(int y = 0; y < 2; y++)
      {
        cout << "Enter the value for A" << x << y << endl;
        cin >> matrix1[x][y];
      }

    }
    //matrix B
    cout << "Enter the value for the second matrix" << endl << endl;
    for(int x = 0; x < 3; x++)
    {
      for(int y = 0; y < 2; y++)
      {
        cout << "Enter the value for B" << x << y << endl;
        cin >> matrix2[x][y];
      }

    }
    //summation
    cout << "Summation of the two matrix are" << endl << endl;
    for(int x = 0; x < 3; x++)
    {
      for(int y = 0; y < 2; y++)
      {
        cout << "   " << matrix1 [x][y] + matrix2 [x][y];
      }
      cout << endl;
    }
    return 0;
}
