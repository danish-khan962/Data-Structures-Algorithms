//To check whether the given array is rotated and sorted or not

#include<bits/stdc++.h>
using namespace std;
bool RotatedAndSorted(vector<int> &arr){
    int count = 0;
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[arr.size()-1] > arr[0]){
        count++;
    }
    return count<=1;
}

int main(){
    vector<int> arr = {3,4,5,1,2};
    int result = RotatedAndSorted(arr);
    if(result){
        cout<<"Array is rotated and sorted.."<<endl;
    }else{
        cout<<"Array is not rotated and not sorted..."<<endl;
    }cout<<endl;
    return 0;
}