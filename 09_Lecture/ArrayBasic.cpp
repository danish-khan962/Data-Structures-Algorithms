#include<bits/stdc++.h>
using namespace std;
int main(){

    //intializing and declaring an array
    int arr[5] = {1,2,3,4,5};
    cout<<arr[0]<<endl;

    for(int i=0; i<5; i++){
        cout<<"Element at "<<i<<" index: "<<arr[i]<<endl;
    }

    int size = sizeof(arr)/sizeof(int);
    cout<<"Size of array: "<<size<<endl;
    return 0;
}