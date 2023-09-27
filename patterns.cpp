#include <iostream>
using namespace std;
// #include<stdio.h>
int main()
{
  // common code
  int n;
  cout << "Enter n value:";
  cin >> n; // enter number of times you want to print pattern

  /* pattern-1
   * * * *
   * * * *
   * * * *
   * * * *
   */

  // for (int row = 0; row < 4; row++)
  // {
  //     for (int col = 0; col < 4; col++)
  //     {
  //         cout << "* " ;
  //     }

  //     cout << endl ;

  // }

  /* pattern-2
   * * * * *
   * * * * *
   * * * * *
   */

  // for (int row = 0; row < 3; row++)
  // {
  //     for (int col = 0; col < 5; col++)
  //     {
  //         cout << "* " ;
  //     }

  //     cout << endl ;

  // }

  /* pattern-3 Hollow Rectangle
   * * * * *
   *       *
   *       *
   *       *
   * * * * *
   */

  // for (int row = 0; row < 5; row++)
  // {
  //     for (int col = 0; col < 5; col++)
  //     {
  //         if (row == 0 || row == 4)
  //         {
  //             cout << "* ";
  //         }
  //         else
  //         {
  //             if (col == 0 || col == 4)
  //             {
  //                 cout << "* ";
  //             }
  //             else{
  //                 cout << "  ";
  //             }

  //         }
  //     }
  //         cout << endl;
  // }

  /* pattern-4 Half Pyramid
   *
   * *
   * * *
   * * * *
   * * * * *
   */

  // for (int row = 0; row < 5; row++)
  // {
  //     for (int col = 0; col < row+1; col++)
  //     {
  //         cout << "* ";
  //     }

  // cout << endl;
  // }

  /* pattern-5 Inverted Half Pyramid
   * * * * *
   * * * *
   * * *
   * *
   *
   */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < n - row; col++)
  //     {
  //         cout << "* ";
  //     }
  //     cout << endl;
  // }

  /* pattern-6 Numeric Half Pyramid
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
  */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < row+1; col++)
  //     {
  //         cout << col+1 << " " ;
  //     }

  //     cout << endl;
  // }

  /* pattern-7 Inverted Numeric Pyramid
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2
  1
  /*

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < n-row; col++)
  //     {
  //         cout << col+1 << " ";
  //     }
  //     cout << endl;
  // }

  /* pattern-8 Hollow  Half Pyramid
  *
  *       *
  *               *
  *                       *
  *                               *
  */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < row + 1; col++)
  //     {
  //         if (col == 0 || col == (row))
  //         {
  //             cout << "*\t"; /* "\t" is use for tab */
  //         }
  //         else
  //         {
  //             // cout << "_\t";  //insted you can try this
  //             cout << " \t";
  //         }
  //     }
  //     cout << endl;
  // }

  /* pattern-9 Hollow Inverted Half Pyramid
  *                               *
  *                       *
  *               *
  *       *
  *
  /*

  // for (int row = 0; row < 5; row++)
  // {
  //     for (int col = 0; col < (n - row); col++)
  //     {
  //         if (col == 0 || col == n - row - 1)
  //         {
  //             cout << "*\t"; /* "\t" is use for tab */
  //         }
  //         else
  //         {
  //             // cout << "_\t";  //insted you can try this
  //             cout << " \t";
  //         }

  //     }
  //        cout << endl;
  // }

  /* pattern-10 Hollow half diamond
   *
   *       *
   *               *
   *                       *
   *                               *
   *
   *                                       *
   *                               *
   *                       *
   *               *
   *       *
   *
   */

  // int count = n / 2;                    // for set main loop limit
  // for (int row = 0; row < count; row++) // 1st part for row 1 to count
  // {
  //     for (int col = 0; col < row + 1; col++)
  //     {
  //         if (col == 0 || col == row)
  //         {
  //             cout << "*\t";
  //         }
  //         else
  //         {
  //             // cout << "_\t "; //insted you can try this
  //             cout << " \t";
  //         }
  //     }
  //     cout << endl;
  // }

  // int count2 = n - (n / 2);                  // for set limit of main loop
  // for (int row = 0; row < count2 + 1; row++) // 1st part for row 1 to count2
  // {
  //     for (int col = 0; col < count2; col++)
  //     {
  //         if (col == 0 || col == count2 - row)
  //         {
  //             cout << "*\t";
  //         }
  //         else
  //         {
  //             // cout << "_\t ";  //insted you can try this
  //             cout << " \t";
  //         }
  //     }

  //     cout << endl;
  // }

  /* pattern-11 full pyramid
   *
   * * *
   * * * * *
   * * * * * * *
   * * * * * * * * *
   */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < n-row; col++)
  //     {
  //         cout<< "  ";
  //     }
  //     for (int col2 = 0; col2 < (row*2)+1; col2++)
  //     {
  //         cout << "* ";
  //     }
  //     cout << endl;

  // }

  /* pattern-12 Inverted Full Pyramid
   * * * *
   * * *
   * *
   *
   */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < row; col++)
  //     {
  //         cout << " ";
  //     }

  //     for (int col1 = 0; col1 < n - row; col1++)
  //     {
  //         cout << "* ";
  //     }

  //     cout << endl;
  // }

  // pattern-13 Hollow Full Pyramid

  // for (int row = 0; row < n; row++)
  // {
  //     // spaces
  //     for (int col2 = 0; col2 < n - row - 1; col2++)
  //     {
  //         cout << " ";
  //     }

  //     // stars
  //     for (int col = 0; col < row + 1; col++)
  //     {
  //         if (col == 0 || col == row)
  //         {
  //             cout << "* ";
  //         }
  //         else
  //         {
  //             cout << "  ";
  //         }
  //     }
  //     cout << endl;
  // }

  /* pattern - 14
   * * * *   * * * *
   * * *       * * *
   * *           * *
   *               *
   *               *
   * *           * *
   * * *       * * *
   * * * *   * * * *
   */

  // int tempN;
  // tempN = n / 2;
  // // 1st part
  // for (int row = 0; row < tempN; row++)
  // {
  //     for (int col1 = 0; col1 < n - row; col1++)
  //     {
  //         cout << "* ";
  //     }

  //     for (int sec2 = 0; sec2 < row + (row + 1); sec2++)
  //     {
  //         cout << "  ";
  //     }

  //     for (int sec3 = 0; sec3 < n - row; sec3++)
  //     {
  //         cout << "* ";
  //     }
  //     cout << endl;
  // }

  // // 2nd part
  // for (int row = 0; row < tempN; row++)
  // {
  //     for (int col1 = 0; col1 < row + 1; col1++)
  //     {
  //         cout << "* ";
  //     }

  //     for (int sec2 = 0; sec2 < (2 * n - 2 * row - 1); sec2++)
  //     {
  //         cout << "  ";
  //     }

  //     for (int sec3 = 0; sec3 < row + 1; sec3++)
  //     {
  //         cout << "* ";
  //     }
  //     cout << endl;
  // }

  /* Pattern-15
  1
  2 * 2
  3 * 3 * 3
  4 * 4 * 4 * 4
  3 * 3 * 3
  2 * 2
  1
   */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < row + (row + 1); col++)
  //     {
  //         if (col % 2 == 0) // check if col is EVEN
  //         {
  //             cout << row + 1 << " ";
  //         }
  //         else // col is ODD
  //         {
  //             cout << "* ";
  //         }
  //     }

  //     cout << endl; // jump to next line
  // }

  // for (int row = n - 2; row >= 0; row--)
  // {
  //     for (int col = 0; col < ((n * row) / 2) + 1; col++)
  //     {
  //         if (col % 2 == 0) // check if col is EVEN
  //         {
  //             cout << row + 1 << " ";
  //         }
  //         else // col is ODD
  //         {
  //             cout << "* ";
  //         }
  //     }

  //     cout << endl; // jump to next line
  // }

  /* Pattern-16
   * * * * * *
   *       *
   *     *
   *   *
   * *
   *
   */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int col = 0; col < n - row; col++)
  //     {
  //         if (row == 0)
  //         {
  //             cout << "* ";
  //         }
  //         else
  //         {
  //             if (row != 0)
  //             {
  //                 if (col == 0 || col == (n - row - 1))
  //                 {
  //                     cout << "* ";
  //                 }
  //                 else
  //                 {
  //                     cout << "  ";
  //                 }
  //             }
  //         }
  //     }
  //     cout << endl;
  // }

  /* Pattern-16
  1
  1   2
  1     3
  1       4
  1 2 3 4 5
  */

  // for (int row = 0; row < n; row++)
  // {
  //     if (row == 0 || row == n - 1)
  //     {
  //         for (int col = 0; col < row+1 ; col++)
  //         {
  //             cout << col + 1 << " ";
  //         }
  //     }
  //     else
  //     {
  //         for (int col = 0; col < row+2; col++)
  //         {
  //             if (col == 0)
  //             {
  //                 cout << col+1 << " ";
  //             }
  //             else if(col == row+1)
  //             {
  //                 cout << col << " ";
  //             }
  //             else
  //             {
  //                 cout << "  ";
  //             }

  //         }

  //     }
  //     cout << endl;
  // }

  /* Pattern-17
  A
  A B A
  A B C B A
  A B C D C B A
  A B C D E D C B A
  */

  // for (int row = 0; row < n; row++)
  // {
  //     int count = 1;
  //     char Alphabet= 65;
  //     for (int col = 0; col < (row*2)+1; col++) //here for example:9/2 is 4 that's why we need to add 1 to find mid point
  //     {
  //         if(count < (((row * 2)+ 1)/2+1)) //it runs when col index point is less then mid point
  //         {
  //             cout << Alphabet<< " ";
  //             count++;
  //             Alphabet++;
  //         }
  //         else if (count == (((row * 2)+ 1)/2 + 1)) //it runs when col index is at the center index
  //         {
  //             count++;
  //             cout << Alphabet<< " ";
  //         }

  //         else //it runs when col index point is greater then mid point
  //         {
  //             Alphabet--;
  //             cout << Alphabet<< " ";
  //         }
  //     }
  //     cout << endl;  //for jump to new line
  // }

  /*pattern-18 numeric palidrome equilateral pyramid
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
  */

  // for (int row = 0; row < n; row++)
  // {
  //     for (int blank = 0; blank < (n - row - 1); blank++) // for space
  //     {
  //         cout << "  ";
  //     }

  //     for (int col1 = 0; col1 < row + 1; col1++) // half pyramid from 1 to 5(for last row)
  //     {
  //         cout << col1 + 1 << " ";
  //     }

  //     for (int col2 = 0; col2 < row; col2++) // second half pyramid from 4 to 1(for last row)
  //     {
  //         cout << row - col2 << " ";
  //     }

  //     cout << endl;
  // }

  /*pattern-19 fancy pattern
   *
   * 1 *
   * 1 2 1 *
   * 1 2 3 2 1 *
   * 1 2 1 *
   * 1 *
   *
   */

  //   cout << "* " << endl; // try after remove(not necessary)

  //   for (int row = 0; row < n; row++)
  //   {
  //     int cond = (row < (n / 2 + 1)) ? row + (row + 1) : (2 * (n - row - 1) + 1);

  //     cout << "* ";
  //     for (int col = 0; col < cond; col++)
  //     {
  //       if (col < (cond / 2) + 1)
  //       {
  //         cout << col + 1 << " ";
  //       }
  //       else
  //       {
  //         cout << cond - col << " ";
  //       }
  //     }

  //     cout << "* "; // try after remove(not necessary)

  //     cout << endl;
  //   }

  //   cout << "* "; // try after remove(not necessary)
  // }

  /*pattern-20 pascal's triangle pattern
  1
  1 1
  1 2 1
  1 3 3 1
  1 4 6 4 1
  1 5 10 10 5 1
  1 6 15 20 15 6 1
  */

  // for (int row = 1; row <= n; row++)
  // {
  //   int c = 1;
  //   for (int col = 1; col <= row; col++)
  //   {
  //     cout << c << " ";
  //     c = c * (row - col) / col;
  //   }
  //   cout << endl;
  // }

  /*pattern-20 butterfly pattern
  *                 *
  * *             * *
  * * *         * * *
  * * * *     * * * * 
  * * * * * * * * * *
  * * * * * * * * * * 
  * * * *     * * * *
  * * *         * * *
  * *             * * 
  *                 *
  */

  // for (int row = 0; row < 2*n; row++)
  // {
  //   int printCond = row < n ? row : n + (n -row -1);
  //   int spaceCond = row < n ? ((n - row)*2) -2 :(row - n)*2 ;
  //   for (int col = 0; col < 2*n; col++)
  //   {
  //     if (col <= printCond)
  //     {
  //       cout << "* " ;
  //     }
  //     else if (spaceCond > 0)
  //     {
  //       cout << "  ";
  //       spaceCond--;
  //     }
  //     else{
  //       cout << "* ";
  //     }
      
  //   }
  //   cout << endl;
    
  // }

  cout << sizeof(double );
  
}
