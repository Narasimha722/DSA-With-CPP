
#include <bits/stdc++.h>
 using namespace std;

//this is normal / brute force
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

//this is optimal approach
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;

  vector<int> arr3 = {2,5,1,3,0};
  cout<<"The Largest element in the array is: "<<sortArr(arr3)<<endl;

  return 0;
}


