#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[],int n){
    if(n<2){
        return -1;
    }
    int small=INT_MAX;
    int second_small=INT_MAX;
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            second_small=small;
            small=arr[i];
        }
        else if(arr[i<second_small && arr[i]!=second_small]){
        second_small=arr[i];
        }
    }
    return second_small;
}

int secondLargest(int arr[],int n){
    if(n<2){
        return -1;
    }
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            second_large=large;
            large=arr[i];
        }
        else if(arr[i]>second_large&&arr[i]!=second_large){
        second_large=arr[i];
        }
    }
    return second_large;
}

int main(){
    int arr[]={23,43,53,21,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sS=secondSmallest(arr,n);
    int sL=secondLargest(arr,n);
    cout<<"Second Smallest Element "<<sS<<endl;
    cout<<"Second Largest element "<<sL<<endl;
    return 0;
    
}