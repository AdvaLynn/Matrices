//Adva Masliah
//Adding and subtracting matrixes
//C++
//Dr.Noukhovitch
//Due Nov 19th 2015
#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
   cout << "Addition and Subtraction of 2x2 matrices" << endl;// Calculating second matrix
   cout << endl;
   int rows = 2;//One can easily change the number of rows and columns, not hardcoded
   int *n = &rows;//pointer is assigned to integer of rows
   int i, k, first[*n][*n], second[*n][*n], sum[*n][*n];//Variables stated
   for (i = 0; i < *n; i++){//Calculates first 2d array
        cout << "Enter the first matrix row " << i+1 << ". Use a space to separate the numbers" << endl;// Calculating first matrix
        for (k = 0; k < *n; k++)
            cin >> first[i][k];
   }
   for (i = 0; i < *n; i++){
        cout << "Enter the second matrix row " << i+1 << ". Use a space to separate the numbers" << endl;// Calculating second matrix
        for (k = 0 ; k < *n; k++)
            cin >> second[i][k];
   }
   cout << endl;

   cout << "Sum:" << endl;//Outputting sum
   for (i = 0; i < *n; i++) {
      for (k = 0 ; k < *n; k++) cout << first[i][k] + second[i][k]<< " ";;
      cout << endl;
   }
   cout << endl;

   cout << "Difference:"<< endl;//Outputting difference
   for (i = 0; i < *n; i++) {
      for (k = 0 ; k < *n; k++) cout << first[i][k] - second[i][k]<< " ";
      cout << endl;
   }

   return 0;
}
