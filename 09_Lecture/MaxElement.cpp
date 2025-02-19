//PROBLEM: To find the maximum element present in the array

#include<bits/stdc++.h>
using namespace std;
int MAX(int arr[], int size){
    int maximum = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    return maximum;
}
int main(){
    int arr[5] = {2,4,5,21,3};
    int size = 5;

    cout<<"Maximum element in array: "<<MAX(arr,size)<<endl;
    return 0;
}