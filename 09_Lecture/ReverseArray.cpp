//Problem: Reversing an array 

#include<bits/stdc++.h>
using namespace std;
int reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5] = {2,3,4,5,7};
    int size = 5;

    reverseArray(arr,size);
    cout<<"Reversed array: ";
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}