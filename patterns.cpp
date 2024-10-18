#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=0;i<=n;i++){
        for (int j =n; j>i; j--){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=0;i<=n;i++){
        for (int j =n; j>i; j--){
            cout <<n-j+1<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*i+1;j++){
            cout<<"*";
        }
         for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}
int main(){
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int n;
        cin>>n;
        pattern1(n);

    }
}
