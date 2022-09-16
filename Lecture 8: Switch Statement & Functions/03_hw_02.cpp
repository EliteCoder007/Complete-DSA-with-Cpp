
// 2) WHY WE CAN'T USE CONTINUE STATEMENT IN CASE OF SWITCH CASE?

// ANS: CONTINUE CAN'T BE USED IN CASE OF SWITCH CASE BECAUSE AS THE CASE CONSTANT MATCHES WITH THE USERS INPUT THE FLOW WILL COME DOWN AND TRY TO EXECUTE BUT BECAUSE OF CONTINUE IT WILL SKIP THAT PART AND ITERATION WILL GO ON AND ON. THAT'S WHY WE USE BREAK , TO STOP  AT THE POINT ONCE WE EXUCUTE OUR PART.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 2;
    while (true)
    {
        switch (n)
        {
        case 2:
            cout << "This is switch which is under infinite while";
            continue;
        
        default:
            cout << "This is default";
            break;
        }
    }
    return 0;
}
