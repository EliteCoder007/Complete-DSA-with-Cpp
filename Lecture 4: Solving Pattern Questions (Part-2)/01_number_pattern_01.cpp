/*
5
12345
12345
12345
12345
12345
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;

    int i = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
        
    }
    
    return 0;
}