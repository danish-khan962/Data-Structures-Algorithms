//Function problem
//To check if a number is prime or not

#include<bits/stdc++.h>
using namespace std;
void primeNumber(int num){
    int flag = true;
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag = false;
            break;
        }
    }
    if(flag==false){
        cout<<"It is NOT A PRIME NUMBER.."<<endl;
    }else{
        cout<<"It is a PRIME NUMBER.."<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    primeNumber(num);
    return 0;
}