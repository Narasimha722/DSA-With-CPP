<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

//First Method
=======
//Q1)count no.of digits in a numbers
                               
#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

>>>>>>> 7e95ae20c3cdb8634c2cb39216f00a5f5dc28050
int countDigits(int n){
    int count=0;
    while(n>0){
        count=count+1;
        n=n/10;
<<<<<<< HEAD
    }
    return count;
}
//Second Method
int digitCount(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
=======

    }
    return count;

>>>>>>> 7e95ae20c3cdb8634c2cb39216f00a5f5dc28050
}

int main(){
    int N;
    cin>>N;
    cout<<N<<endl;
    int digits=countDigits(N);
<<<<<<< HEAD
    int num=digitCount(N);
    cout<<"No.of Digits"<<" "<<digits<<endl;
    cout<<"No.of Digits"<<" "<<num<<endl;
}



=======
    cout<<"No.of Digits"<<" "<<digits<<endl;
  
}

>>>>>>> 7e95ae20c3cdb8634c2cb39216f00a5f5dc28050
