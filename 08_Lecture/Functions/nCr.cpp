//Function problem
//To find the value of nCr

#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact; //returning factorial answer
}
int nCr(int n, int r){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    return numerator/denominator; // returning answer of nCr
}
int main(){
    int n, r;
    cout<<"Enter value of n for nCr: ";
    cin>>n;
    cout<<"Enter value of r for nCr: ";
    cin>>r;


    cout<<"Value of nCr is: "<<nCr(n,r)<<endl;
}