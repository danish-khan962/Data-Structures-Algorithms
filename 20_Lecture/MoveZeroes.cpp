//Moving zeroes to all right

#include<bits/stdc++.h>
using namespace std;
void MoveZeroes(vector<int> &arr){
    int nonZero = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]!=0){
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
    cout<<"MOved zero array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    vector<int> arr = {0,1,0,3,12,0};

    MoveZeroes(arr);
    return 0;
}