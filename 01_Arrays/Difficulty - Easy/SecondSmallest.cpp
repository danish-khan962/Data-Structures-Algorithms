#include<bits/stdc++.h>
using namespace std;
void secondSmallest(int arr[], int size){
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }else if(arr[i]!=smallest && arr[i] < second_smallest){
            second_smallest = arr[i];
        }
    }
    cout<<"Second smallest element is: "<<second_smallest<<endl;
}
int main(){
    int arr[5] = {12,30,9,32,71};
    int size = 5;

    secondSmallest(arr,size);

    return 0;
}

/* Better appraoch, but not optimal
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
*/