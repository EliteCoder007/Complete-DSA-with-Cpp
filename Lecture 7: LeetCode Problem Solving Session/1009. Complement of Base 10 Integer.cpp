//Thik ace but online e runtime error khabe...


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int m = n;

//     int ans = 0;
//     int i = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10, i)) + ans;
//         n = n >> 1;
//         i++;
//     }
//     // cout << ans;

//     int count = 0;
//     while (ans != 0)
//     {
//         int digit = ans % 10;
//         count++;
//         ans = ans /10;
//     }

//     int complement = pow(2, count) - m - 1;
//     if (m>0)
//     {
        
//     }
    
//     cout << complement;
    
    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

//Edge case:
    if (n == 0)
    {
        return 1;
    }
    
    int m = n;
    int mask = 0;
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout << ans;
    
    return 0;
}