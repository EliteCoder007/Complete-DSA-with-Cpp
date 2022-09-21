#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {1, 4, 0, 5, -2, 15};
    int brr[5] = {2, 6, 3, 9, 4};

    cout << "Before reversing: ";
    printArray(arr, 6);
    cout << "After reversing: ";
    reverseArray(arr, 6);
    printArray(arr, 6);

    cout << "Before reversing: ";
    printArray(brr, 5);
    cout << "After reversing: ";
    reverseArray(brr, 5);
    printArray(brr, 5);

    return 0;
}