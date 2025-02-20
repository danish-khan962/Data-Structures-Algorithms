//Reversing an array using vector in C++ STL

#include<bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<<"REVERSED ARRAY: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {1,3,2,4};

    cout<<"ORIGINAL ARRAY: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    reverseArray(arr);
    return 0;
}