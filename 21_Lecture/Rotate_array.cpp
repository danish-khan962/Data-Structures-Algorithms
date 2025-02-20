//Rotate array by k places

#include<bits/stdc++.h>
using namespace std;
vector<int> RotateArray(vector<int> &arr, int k){
    vector<int> temp(arr.size());
    for(int i=0; i<arr.size(); i++){
        temp[(i+k)%arr.size()] = arr[i];
    }
    //copying temp to array
    arr = temp;
    return arr;
}
void print(vector<int> &arr){
    cout<<"Rotated array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> arr = {1,7,9,11};

    int k;
    cout<<"Enter k to rotate array by places: ";
    cin>>k;

    RotateArray(arr,k);
    print(arr);
    return 0;
}