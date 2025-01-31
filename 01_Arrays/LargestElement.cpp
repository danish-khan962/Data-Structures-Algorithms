#include <bits/stdc++.h>
using namespace std;
void LargestElement(int arr[], int size){
    int largest = arr[0];  //assuming first element as largest
    for(int i=0; i<size; i++){  //iterating over all array
        if(arr[i] > largest){   
            largest = arr[i]; // fitting largest element in the variable where we get arr[i] greater than existing arr[0]
        }
    }
    cout<<"Largest element is: "<<largest<<endl;
}
int main(){
    int arr[5] = {40,20,30,60,43};
    int size = 5;

    LargestElement(arr, size);

    return 0;
}