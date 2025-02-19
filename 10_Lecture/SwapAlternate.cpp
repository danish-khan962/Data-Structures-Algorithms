//PROBLEM: Swapping alternate in array

#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
    cout<<"Alternate swapped array: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;

    swapAlternate(arr,size);
    return 0;
}