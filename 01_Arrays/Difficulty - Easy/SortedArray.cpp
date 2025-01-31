#include<bits/stdc++.h>
using namespace std;
int CheckIfSorted(vector<int> &arr){
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            cout<<"Array is NOT SORTED...."<<endl;
            return false;
        }
    }
    cout<<"Array is SORTED......"<<endl;
    return true;
}
int main(){
    vector<int> arr = {1,2,3,40,5};
    
    CheckIfSorted(arr);
    return 0;
}