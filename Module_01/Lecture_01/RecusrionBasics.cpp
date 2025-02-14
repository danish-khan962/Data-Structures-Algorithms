//RECURSION//
/*  When a function calls itself until a specific condition is met is known as Recursion..    */

/*  We need to specify condition because if we don't specify any condition, our recusrion will stuck into forever infinite loop. 
Such condition is causes segmentation fault , means stacking of non-released function stacks from stack memory , hence causing STACK OVERFLOW..   */

#include<bits/stdc++.h>
using namespace std;

//This is infinite recursion
/*
void print(){
    cout<<"Recursion Called.."<<endl;
    print(); // we are calling the same function afain here   
}
*/


//Recursion with base condition
void count(){
    static int cnt = 0;
    if(cnt == 3){
        return;
    } 
    else{
        cout<<cnt<<endl;
        cnt++;
        count();
    }
}
int main(){
    //calling a function
    //print();
    count();
    return 0;
}