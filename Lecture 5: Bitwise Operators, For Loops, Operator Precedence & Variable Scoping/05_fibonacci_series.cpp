#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }
    
    return 0;
}