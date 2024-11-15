<<<<<<< HEAD
#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int revNum = 0;
    int dup = n;
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }
    if (dup == revNum) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int number;
    cin>>number;

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}
                            
                        

=======
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int revNum=0;
    int duplicate=n;
    while(n>0){
        int lastDigit=n%10;
        n=n/10;
        revNum=(revNum*10)+lastDigit;

    }
    if(duplicate==revNum){
        cout<<revNum<<endl;
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
>>>>>>> 7e95ae20c3cdb8634c2cb39216f00a5f5dc28050
