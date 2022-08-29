/*
5
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row  = 1;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A';
        while (col <= n)
        {
            ch = 'A' + row - 1;
            cout << (ch);
            col++;
        }
        cout << endl;
        row++;
        
    }
    
    return 0;
}