//PROBLEM: Finding unique element in the array

#include<bits/stdc++.h>
using namespace std;
void findUnique(int arr[], int size){
    int answer = 0;
    for(int i=0; i<size; i++){
        answer = answer^arr[i];
    }
    cout<<"Unique element in array: "<<answer<<endl;
}
int main(){
    int arr[5] = {1,2,4,4,1};
    int size = 5;

    findUnique(arr,size);
    return 0;
}