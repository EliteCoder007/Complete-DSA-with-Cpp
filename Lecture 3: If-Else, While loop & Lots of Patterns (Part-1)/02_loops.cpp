#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        cout << i << " ";
        sum+=i;
        i++;
    }
    cout << endl << sum;
    
    return 0;
}