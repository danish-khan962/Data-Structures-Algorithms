/*FOR LOOP*/
/*Fibonacci series*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter range to print fibonacci upto: ";
    cin>>n;

    int num1 = 0;
    int num2 = 1;
    cout<<"FIBONACCI SERIES =>   "<<num1<<" "<<num2<<" ";

    for(int i=1; i<=n; i++){
        int nextNumber = num1+num2;
        cout<<nextNumber<<" ";

        num1 = num2;
        num2 = nextNumber;
    }
    return 0;
}