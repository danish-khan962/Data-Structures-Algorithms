/*
    BINARY SEARCH:

    Conditon: Elements should be a monotic functions, whihc means either in increasing or decreasing order

    STEPS:  (i)  Find mid element using formula 
            (ii) Compare mid element with key/target.
            (iii) if Equal == , return index.
            (iv) If not != , decide part to got , left or right
*/

#include<bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int> &arr, int key){
    //step 1: finding mid element
    int start = 0;
    int end = arr.size()-1;
    int mid = (start+(end-start)/2);

    //step 2: processing conditions
    while(start<=end){
        if(arr[mid] == key)
            return mid;
        else if(arr[mid]>start)
            start = mid+1;
        else    
            end = mid-1;
        mid = (start+(end-start)/2);
    }
    return -1;
}
int main(){
    vector<int> arr = {2,4,7,15,67,100}; //sorted already

    int key;
    cout<<"Enter your target element: ";
    cin>>key;

    cout<<"Element found at index: "<<BinarySearch(arr,key);
    return 0;
}