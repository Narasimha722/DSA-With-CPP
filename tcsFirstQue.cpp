#include<bits/stdc++.h>
using namespace std;

int main(){
    int lt;
    cin>>lt;
    int lb;
    cin>>lb;
    int total_covered_distance=lt+lb;
    int sot;
    cin>>sot;
    if(sot>0 && sot < 200){
        int time_required=(total_covered_distance/sot)*18/5;
        cout<< time_required; 
    }
}