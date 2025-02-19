//BUBBLE SORT

#include<bits/stdc++.h>
using namespace std;
void BubbleSort(vector<int> &arr){
    for(int i=0; i<arr.size()-1; i++){
        bool swapped = false;
        for(int j=0; j<arr.size()-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}
void printSortedArray(vector<int> &arr){
    cout<<"SORTED ARRAY by bubble sort: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> arr = {10,1,7,6,14,9};
    
    cout<<"ORIGINAL ARRAY: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    BubbleSort(arr);
    printSortedArray(arr);
    return 0;
}