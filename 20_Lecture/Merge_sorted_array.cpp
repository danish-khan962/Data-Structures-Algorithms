//PROBLEM: Merging two sorted array using C++ STL

#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3){
    int i=0; 
    int j=0;
    int k=0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] < arr2[j]){
            arr3.push_back(arr1[i++]);
        }else{
            arr3.push_back(arr2[j++]);
        }
    }
    while(i < arr1.size()){
        arr3.push_back(arr1[i++]);
    }
    while(j < arr2.size()){
        arr3.push_back(arr2[j++]);
    }
}
void print(vector<int> &arr3){
    cout<<"MERGED SORTED ARRAY: ";
    for(int i=0; i<arr3.size(); i++){
        cout<<arr3[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> arr1 = {1,3,5,7,9};
    vector<int> arr2 = {2,4,6};
    vector<int> arr3;

    merge(arr1,arr2,arr3);
    print(arr3);
    return 0;
}