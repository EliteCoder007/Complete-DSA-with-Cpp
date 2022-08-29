#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    cout << "a&b = " << (a & b) << endl;
    cout << "a|b = " << (a | b) << endl;
    cout << "~a = " << (~ a) << endl;
    cout << "a^b = " << (a ^ b) << endl;


//Right Shift:
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
// Left Shift:
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

//Increment Operator:
    int i = 7;
    cout << (++i) << endl;//-->8
    cout << (i++) << endl;//-->8
    cout << (i--) << endl;//-->9
    cout << (--i) << endl;//-->7
    return 0;
}