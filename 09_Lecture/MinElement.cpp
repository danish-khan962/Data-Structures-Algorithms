//PROBLEM: To find the minimum element present in the array

#include<bits/stdc++.h>
using namespace std;
int MIN(int arr[], int size){
    int minimum = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}
int main(){
    int arr[5] = {2,4,5,21,3};
    int size = 5;

    cout<<"Minimum element in array: "<<MIN(arr,size)<<endl;
    return 0;
}