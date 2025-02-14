//PROBLEM: Printing from 1 to n linearly

#include<bits/stdc++.h>
using namespace std;
void printNumbers(int n){
    static int i= 1;
    if(i==n+1) return;
    else{
        cout<<i<<"   ";
        i++;
        //again calling the same function recursively
        printNumbers(n);
    }
}
int main(){
    int n;
    cout<<"Enter number to print upto: ";
    cin>> n;

    //calling recursive function
    printNumbers(n);
    return 0;
}