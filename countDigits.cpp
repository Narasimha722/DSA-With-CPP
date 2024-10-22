#include<bits/stdc++.h>
using namespace std;

//First Method
int countDigits(int n){
    int count=0;
    while(n>0){
        count=count+1;
        n=n/10;
    }
    return count;
}
//Second Method
int digitCount(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
}

int main(){
    int N;
    cin>>N;
    cout<<N<<endl;
    int digits=countDigits(N);
    int num=digitCount(N);
    cout<<"No.of Digits"<<" "<<digits<<endl;
    cout<<"No.of Digits"<<" "<<num<<endl;
}



