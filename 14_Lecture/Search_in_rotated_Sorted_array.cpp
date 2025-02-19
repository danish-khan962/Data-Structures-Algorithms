//PROBLEM: Searching element in rotated sorted array

#include<bits/stdc++.h>
using namespace std;
int getPivot(vector<int> &arr, int key){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid] > arr[0]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}
int BinarySearch(vector<int> &arr, int s, int e, int key){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }else if(key > arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}
int search(vector<int> &arr, int key){
    int pivot = getPivot(arr,key);
    if(key>=arr[pivot] && key<=arr[arr.size()-1])
        return BinarySearch(arr,pivot,arr.size()-1, key);
    else
        return BinarySearch(arr,0,pivot-1,key);
}
int main(){
    vector<int> arr = {7,9,1,2,3};

    int key;
    cout<<"Enter element to search: ";
    cin>>key;

    cout<<"Element present at indexx: "<<search(arr,key)<<endl;
    return 0;
}