/*
5
    1
   121
  12321
 1234321
123454321

*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
            //1st triangle:
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        //2nd triangle:
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        //3rd triangle:
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        row++;
    }
    return 0;
}