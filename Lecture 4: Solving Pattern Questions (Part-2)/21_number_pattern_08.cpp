/*
5
11111
 2222
  333
   44
    5
    */


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int num = n - row + 1;
        while (num)
        {
            cout << row;
            num--;
        }
        cout << endl;
        row++;
    }
    
    return 0;
}