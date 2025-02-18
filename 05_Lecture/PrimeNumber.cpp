//FOR LOOP
//Prime number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to check for prime: ";
    cin>>n;

    int flag = true;
    for(int i=2; i<n; i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag==false){
        cout<<"number is NOT PRIME..."<<endl;
    }else{
        cout<<"number is PRIME..."<<endl;
    }
    return 0;
}