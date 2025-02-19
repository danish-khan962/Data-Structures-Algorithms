//PROBLEM: to find the peak index in the mountain array

#include<bits/stdc++.h>
using namespace std;
int PeakMountainValue(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start  = mid+1;
        }else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int main(){
    vector<int> arr = {0,10,5,2};
    cout<<"Index of peak = "<<PeakMountainValue(arr);
    return 0;
}