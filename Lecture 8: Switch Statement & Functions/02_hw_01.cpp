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
            break;
        
        default:
            cout << "This is default";
            break;
        }
//         using switch case in infinite loop , here we are using exit(0);
// there are primarily two types of exit();
// 1. exit(0) which is the exit successfully which means program has run successfully and then it is terminated. i.e. program has been executed without any error or interrupt.
// 2. exit(1) Exit Failure: Exit Failure is indicated by exit(1) which means the abnormal termination of the program, i.e. some error or interrupt has occurred. We can use different integer other than 1 to indicate different types of errors.

        exit(0);
        
    }
    
    return 0;
}