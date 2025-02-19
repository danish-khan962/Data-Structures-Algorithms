//PROBLEM: Sorting zero and one

#include<bits/stdc++.h>
using namespace std;
void SortZeroandOne(int arr[], int size){
    int i=0;
    int j = size-1;
    while(i<j){
        if(arr[i]==0)
            i++;
        else if(arr[j]==1)
            j--;
        else if(arr[i]==1&&arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
void PrintSortedArray(int arr[], int size){
    cout<<"Sorted array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {0,1,1,0,0,1};
    int size = 6;
    SortZeroandOne(arr,size);
    PrintSortedArray(arr,size);
    return 0;
}