/*
3
  1
 23
456

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    int num = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space --;
        }
        int col = 1;
        while (col <= row)
        {
            cout << (num);
            num++;
            col++;
        }
        cout << endl;
        row++;

        
    }
    
    return 0;
}