/*

5
1
23
345
4567
56789
*/



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1;
//         int value = row;
//         while (col <= row)
//         {
//             cout << value;
//             value++;
//             col++;
//         }
//         cout << endl;
//         row++;
        
//     }
    
//     return 0;
// }


    #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 0;
        while (col < row)
        {
            cout << row + col;
            col++;
        }
        cout << endl;
        row++;
        
    }
    
    return 0;
}