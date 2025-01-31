#include<bits/stdc++.h>
using namespace std;
void SmallestElement(int arr[], int size){
    int smallest = arr[0]; //assuming first element as smallest
    for(int i=0; i<size; i++){ //iterating over all array
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout<<"Smallest element is: "<<smallest<<endl;
}
int main(){
    int arr[5] = {12,30,9,32,71};
    int size = 5;

    SmallestElement(arr,size);

    return 0;
}