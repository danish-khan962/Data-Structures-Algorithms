//PROBLEM: printing from n to 1 using recursion

#include<bits/stdc++.h>
using namespace std;
void printNumbersBackwards(int n){
    static int i = n;
    if(i==0) return;
    else{
        cout<<i<<"   ";
        i--;
        printNumbersBackwards(n);  //again calling same function recursively
    }
}
int main(){
    int n;
    cout<<"Enter number to reach 1: ";
    cin>>n;

    //calling recursive function
    printNumbersBackwards(n);
    return 0;
}