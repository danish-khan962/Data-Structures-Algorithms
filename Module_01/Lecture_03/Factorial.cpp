//Factorial of n using recursion

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter input: ";
    cin>>n;

    cout<<"Factorial: "<<factorial(n);
    return 0;
}