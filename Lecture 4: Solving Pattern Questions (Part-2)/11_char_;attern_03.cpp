/*
5
ABCDE
FGHIJ
KLMNO
PQRST
UVWXY

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    char value = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << value;
            value++;
            col++;
        }
        cout << endl;
        row++;
        
    }
    
    return 0;
}