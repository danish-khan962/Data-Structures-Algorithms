//PROBLEM: Printing name 5 times using recursion

#include<bits/stdc++.h>
using namespace std;
void printName(){
    static string name = "DANISH";
    static int i = 1;
    if(i==6) return;
    else{
        cout<<"Iteration "<<i<<": "<<name<<endl;
        i++;
        printName();   //again recursively calling the same function
    }
}
int main(){

    //calling recursive function
    printName();
    return 0;
}