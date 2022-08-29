/*
5
    1
   22
  333
 4444
55555
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int num = row;
        while (num)
        {
            cout << row;
            num --;
        }
        cout << endl;
        row++;
        
        
    }
    
    return 0;
}