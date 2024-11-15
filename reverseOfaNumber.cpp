#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int revnum=0;
<<<<<<< HEAD
    while(n!=0){
        int lastDigit=n%10;
        // Check for overflow/underflow before multiplying revnum by 10
            if (revnum > INT_MAX / 10 || (revnum == INT_MAX / 10 && lastDigit > 7)) {
                return 0;  // Overflow
            }
            if (revnum < INT_MIN / 10 || (revnum == INT_MIN / 10 && lastDigit < -8)) {
                return 0;  // Underflow
            }
=======
    while(n>0){
        int lastDigit=n%10;
>>>>>>> 7e95ae20c3cdb8634c2cb39216f00a5f5dc28050
        n=n/10;
        revnum=(revnum*10)+lastDigit;

    }
    cout<<revnum;
}