//INSERTION SORT

#include<bits/stdc++.h>
using namespace std;
void InsertionSort(vector<int> &arr){
    for(int i=1; i<arr.size(); i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
void printSortedArray(vector<int> &arr){
    cout<<"SORTED ARRAY by insertion sort: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> arr = {5,3,7,1,2};

    cout<<"ORIGINAL ARRAY: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    InsertionSort(arr);
    printSortedArray(arr);
}