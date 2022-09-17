#include<bits/stdc++.h>
using namespace std;

int main(){
    int negNum;
    cin >> negNum;

    while (negNum    0)
    {
        int bit = ~negNum;
        cout << bit;
    }
    
    return 0;
}