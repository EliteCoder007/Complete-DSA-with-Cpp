#include<bits/stdc++.h>
using namespace std;

int main(){
    int far;
    cout << "Fahrenheit: ";
    cin >> far;

    int cel = ((far - 32) * 5) / 9;
    cout << "Celcius: " << cel;
    return 0;
}