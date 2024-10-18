#include<bits/stdc++.h>
using namespace std;

int removeDuplicatesInArray(vector<int> &arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<int> arr={31,32,33,34,35,36,37,38};
    int n=8;
    int k = removeDuplicatesInArray(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++) {

        cout << arr[i] << " ";
    }
    return 0;

}