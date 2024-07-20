#include<bits/stdc++.h>
using namespace std;

int findSmallestElement(int arr[],int n){
    int min=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
// int sortArr(vector<int>& arr) {
//     sort(arr.begin(),arr.end());
//     return arr[0];
// }

// int main(){
//     vector<int> arr={47,4,23,65,34};
//     int n=5;
//     int min=sortArr(arr);
//     cout<<"smallest element in the array is : "<<min<<endl;
//     return 0;
// }

int main(){
    int arr[]={12,32,33,54,2};
    int n=5;
    int min=findSmallestElement(arr,n);
    cout<<"smallest element in the array is :"<<min<<endl;
    return 0;
}