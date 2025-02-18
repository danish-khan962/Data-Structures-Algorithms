//Checking for prime number*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter number to check if it's prime or not: ";
    cin>>num;

    int i=2;
    while(i<num){
        if(num%i==0){
            cout<<"NOT PRIME.."<<endl;
        }else{
            cout<<"PRIME..."<<endl;
        }
        i++;
    }
    return 0;
}