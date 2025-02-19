//PROBLEM: Finding pivot in an array

#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int main(){
    vector<int> arr = {7,9,1,2,3};

    cout<<"Pivot index: "<<getPivot(arr)<<endl;
    return 0;
}