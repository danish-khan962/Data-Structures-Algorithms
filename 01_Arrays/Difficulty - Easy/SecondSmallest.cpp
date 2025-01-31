#include<bits/stdc++.h>
using namespace std;
void secondSmallest(int arr[], int size){
    //first parsing, checking for first smallest element
    int firstSmallest = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] < firstSmallest){
            firstSmallest = arr[i];
        }
    }

    //in second parsing, we check for second smallest number
    int secondSmallest = INT16_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < secondSmallest && arr[i]!=firstSmallest){
            secondSmallest = arr[i];
        }
    }

    cout<<"Second Smallest element in array is: "<<secondSmallest<<endl;
}
int main(){
    int arr[5] = {12,30,9,32,71};
    int size = 5;

    secondSmallest(arr,size);

    return 0;
}