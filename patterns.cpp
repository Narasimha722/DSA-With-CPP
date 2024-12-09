#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print10(int N)
{
      for(int i=1;i<=2*N-1;i++){
          int stars = i;
          if(i>N) stars = 2*N-i;
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          cout<<endl;
      }
}

void print11(int n){
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

void print12(int N)
{
      int spaces = 2*(N-1);
      for(int i=1;i<=N;i++){
          for(int j=1;j<=i;j++){
              cout<<j;
          }
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          cout<<endl;
          spaces-=2;
      }
}

void print13(int n){
    int num=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<= 'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){
    for(int i=0;i<=n;i++){
        for(char ch='A';ch<= 'A' +(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        
        print16(n);
    }
    
}

