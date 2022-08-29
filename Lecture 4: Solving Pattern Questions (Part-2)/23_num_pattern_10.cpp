/*
4
1234
 234
  34
   4
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
            space --;
        }
        int num = 1;
        while (num <= (n - row +1))
        {
            cout << (num + row - 1);
            num++;
        }
        cout << endl;
        row++;

        
    }
    
    return 0;
}