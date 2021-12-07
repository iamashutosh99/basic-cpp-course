// CPP program to find the row
// with maximum number of 1s
#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

// Function that counts how many 1s there are in a row
int count_ones(bool row[], int len) {
    int count = 0;

    for (int j = 0 ; j < len ; j++ ){
        if(row[j] == 1){
            count++;
        }
    }

    return count;
}

// Function that returns index of row
// with maximum number of 1s.
int rowWithMax1s(int m, int n, bool mat[R][C]) {

    int rowIndex = -1 ;
    int maxCount = 0 ;
     
    for(int i = 0 ; i < n ; i++){
        int count = 0 ;

        count = count_ones(mat[i], m);
        
        if(count > maxCount){
            maxCount = count ;
            rowIndex = i ;
        }
    }
     
    return rowIndex ;
}
 
 
// Driver Code
int main()
{
    int m = 4;
    int n = 4;

    bool mat[R][C] = { {0, 0, 0, 1},
                    {0, 1, 1, 1},
                    {1, 1, 1, 1},
                    {0, 0, 0, 0}};
 
    cout << "Index of row with maximum 1s is " << rowWithMax1s(C, R, mat) << "\n";
 
    return 0;
}

// This code is very basic, yet, it was authored by someone else, who posted it on geeksforgeeks,
// and was edited slightly by myself to fit the educational purpose of this request.
// Unknown author, https://www.geeksforgeeks.org/find-the-row-with-maximum-number-1s/