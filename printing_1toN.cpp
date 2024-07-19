#include<bits/stdc++.h>
using namespace std;

void from_1toN(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    from_1toN(i+1,n);
}

//N to 1
void from_Nto1(int i, int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    from_Nto1(i-1,n);
}

int main(){
    int n;
    cin>>n;
    from_1toN(1,n);
    from_Nto1(n,n);
    return 0;
}