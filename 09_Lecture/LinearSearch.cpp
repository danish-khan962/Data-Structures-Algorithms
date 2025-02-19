//LINEAR SEARCH
/*
It is a basic seraching technique works on 0(N) time complexity , which searches the target value linearly in the provided array. It is also known as sequential Search..

🧱 ->  🧱 -> 🧱 -> 🧱 (target) 
*/

#include<bits/stdc++.h>
using namespace std;
void LinearSearch(int arr[], int size, int key){
    int flag = false;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"Element condition | PRESENT.."<<endl;
    }else{
        cout<<"Element condition | ABSENT.."<<endl;
    }
}
int main(){
    int arr[10] = {10,20,30,44,56,708,2,450,6,35};
    int size = 10;

    int key;
    cout<<"Enter your target element: ";
    cin>>key;

    LinearSearch(arr,size,key);
    return 0;
}