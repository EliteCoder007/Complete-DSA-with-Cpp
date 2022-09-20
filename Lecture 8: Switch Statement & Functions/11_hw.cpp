#include<bits/stdc++.h>
using namespace std;

int AP(int n)
{
    int AP = (3 * n + 7);
    return AP;
}

int main(){
    cout << setw(50) << "A.P = (3 * n + 7)" << endl;

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int ans = AP(n);
    cout << "3 * " << n << " + 7 = " << ans;

    return 0;
}