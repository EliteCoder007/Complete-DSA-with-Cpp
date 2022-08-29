/*
4
ABCD
BCDE
CDEF
DEFG
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        char start = 'A' + row - 1;
        while (col <= n)
        {
            cout << start;
            start++;
            col++;
        }
        cout << endl;
        row++;
        
        
    }
    
    return 0;
}