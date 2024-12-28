//Prime Number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int input;
    cout<<"Enter input to check if it is prime: ";
    cin>>input;

    bool isPrime = true;

    for(int i=2; i<input; i++){
        if(input%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == false){
        cout<<"NOT PRIME"<<endl;
    }else{
        cout<<"IS PRIME"<<endl;
    }
    return 0;
}