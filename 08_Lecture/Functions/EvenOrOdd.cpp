//Function problem
//To check if the given input is odd or even

#include<bits/stdc++.h>
using namespace std;
void evenOrOdd(int num){
    if(num%2==0){
        cout<<"It is EVEN..."<<endl;
    }else{
        cout<<"It is ODD..."<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter num: ";
    cin>>num;

    //calling function in main
    evenOrOdd(num);
    return 0;
}