#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
   int i, k, first[2][2], second[2][2], sum[2][2];//Variables stated
   int m = 2;
   int n = 2;
   cout << "Enter the first matrix with a space separating numbers and line separating rows\n";// Calculating first matrix
   for (i = 0; i < m; i++)
      for (k = 0; k < n; k++)
         cin >> first[i][k];


   cout << "Enter the second matrix with a space separating numbers and line separating rows\n";
   for (i = 0; i < m; i++)
      for (k = 0 ; k < n; k++)
            cin >> second[i][k];

   cout << "The sum of matrices is\n";
   for (i = 0; i < m; i++) {
      for (k = 0 ; k < n; k++) {
         sum[i][k] = first[i][k] + second[i][k];
         cout << sum[i][k] << " ";
      }
      cout << "\n";
   }

   return 0;
}
