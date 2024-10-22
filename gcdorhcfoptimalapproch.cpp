#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}
int main() {
    int n1 ; 
    int n2 ;
    cin>>n1;
    cin>>n2;
    int gcd = findGcd(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}
   
                                
                            

