// C++ Program to print a matrix spirally
 
#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 6

void print(int n) {
    cout << n << " ";
}

void top_row(int n, int i, int l, int k, int a[R][C]) {
    for (i = l; i < n; ++i) {
        print(a[k][i]);
    }
}

void right_column(int n, int m, int i, int k, int a[R][C]) {
    for (i = k; i < m; ++i) {
        print(a[i][n - 1]);
    }
}

void bottom_row(int n, int m, int i, int l, int a[R][C]){
    for (i = n - 1; i >= l; --i) {
        print(a[m - 1][i]);
    }
}

void left_column(int m, int i, int k, int l, int a[R][C]){
    for (i = m - 1; i >= k; --i) {
        print(a[i][l]);
    }
}

void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
 
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        top_row(n, i, l, k, a);
        k++;
 
        /* Print the last column
         from the remaining columns */
        right_column(n, m, i, k, a);
        n--;
 
        /* Print the last row from
                the remaining rows */
        if (k < m) {
            bottom_row(n, m, i, l, a);
            m--;
        }
 
        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            left_column(m, i, k, l, a);
            l++;
        }
    }
}
 
/* Driver Code */
int main()
{
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };
 
    // Function Call
    spiralPrint(R, C, a);

    cout << "\n";

    return 0;
}
 
// This is code is a slightly edited version by rathbhupendra, edited to fit the educational purpose of this project.
// The original codelet can be found in https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/