#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int count = n * n;
    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            cout << count;
            count--;
            column++;
        }
        cout << endl;
        row++;
    }

    return 0;
}