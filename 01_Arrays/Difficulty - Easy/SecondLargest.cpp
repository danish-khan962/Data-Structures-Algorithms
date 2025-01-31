#include<bits/stdc++.h>
using namespace std;
void SecondLargest(int arr[], int size){
    //first parsing and storing largest element
    int firstLargest = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] > firstLargest){
            firstLargest = arr[i];
        }
    }

    //second parsing , and getting second largest element in array 
    int secondLargest = -1;
    for(int i=0; i<size; i++){
        if(arr[i] > secondLargest && arr[i]!=firstLargest){
            secondLargest = arr[i];
        }
    }

    cout<<"Second Largest element in array is: "<<secondLargest<<endl;
}
int main(){
    int arr[5] = {40,20,30,60,43};
    int size = 5;

    SecondLargest(arr,size);
    
    return 0;
}