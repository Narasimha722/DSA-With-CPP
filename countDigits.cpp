//Q1)count no.of digits in a numbers
                               
#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count=0;
    while(n>0){
        count=count+1;
        n=n/10;

    }
    return count;

}

int main(){
    int N;
    cin>>N;
    cout<<N<<endl;
    int digits=countDigits(N);
    cout<<"No.of Digits"<<" "<<digits<<endl;
  
}

