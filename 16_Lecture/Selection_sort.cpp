//SELECTION SORT

#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int> &arr){
    for(int i=0; i<arr.size()-1; i++){
        int minIndex = i;
        for(int j = i+1; j<arr.size(); j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
void printingSortedArray(vector<int> &arr){
    cout<<"SORTED ARRAY by selection sort: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> arr = {77,33,44,11,88,22,66,55};
    cout<<"ORIGINAL ARRAY: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    SelectionSort(arr);
    printingSortedArray(arr);
    return 0;
}