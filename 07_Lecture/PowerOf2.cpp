//LEETCODE SESSION
//Problem: Power of 2
//explanation: to check if the gicen input exists in the power of 2 or not


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter input: ";
    cin>>n;

    for(int i=0; i<=30; i++){
        int answer = pow(2,i);
        if(answer==n) {
            cout<<"True.."<<endl;
            return true;
        }
    }
    cout<<"False.."<<endl;
    return false;
    return 0;
}