#include <bits/stdc++.h>
using namespace std;

void sumOfArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << endl << sum <<endl;
}

int main()
{
    int size;
    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    sumOfArray(num, size);


    return 0;
}