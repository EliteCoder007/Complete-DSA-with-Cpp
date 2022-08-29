/*

5
1234554321
1234**4321
123****321
12******21
1********1

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        //For 1st:
        int t1 = 1;
        while (t1 <= n - row + 1)
        {
            cout << t1;
            t1++;
        }
        //For 2nd:
        int star = 1 ;
        while (star <= row + row - 2)
        {
            cout << "*";
            star ++;
        }

        //For 3rd:
        int t2 = n - row + 1;
        while (t2)
        {
            cout << t2;
            t2--;
        }
        cout << endl;
        row++;
        
        
    }
    
    return 0;
}