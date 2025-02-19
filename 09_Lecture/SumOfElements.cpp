//PROBLEM: to do sum of all elements in the array

#include<bits/stdc++.h>
using namespace std;
void sumOfElements(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum+arr[i];
    }
    cout<<"Sum of all elements in array is: =>  "<<sum<<endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    sumOfElements(arr,size);
    return 0;
}