#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

// int findGcd(int a,int b){
//     while(a>0&&b>0){
//         if(a>b){
//             a=a%b;
//         }
//         else{
//             b=b%a;
//         }
//     }
//     if(a==0){
//         return b;
//     }
//     return a;
// }
// int findGcd(int n1,int n2){
//     int gcd=1;
//     for(int i=1;i<=min(n1,n2);i++){
//         if(n1%i==0 && n2%i==0){
//             gcd=i;
//         }
//     }
//     return gcd;
// }
// int main(){
//     int a;
//     int b;
//     cin>>b;
//     cin>>a;
//     int div=a/b;
//     int mod=a%b;
//     cout<<"Division"<<" "<<div<<endl;
//     cout<<"Modulation"<<" "<<mod<<endl;
    
// }
int findGcd(int n1,int n2){
    for(int i=min(n1,n2);i>0;i--){
        if(n1%i==0 && n2%i==0){
            return i;
        }
    }
    return 1;
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
