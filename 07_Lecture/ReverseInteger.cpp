//LEETCODE SESSION

//PROBLEM: Reversing and integer

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter input: ";
    cin>>num;

    int answer = 0;
    while(num!=0){
        int digit = num%10;
        answer = (answer*10)+digit;
        num = num/10;
    }
    cout<<"Reversed Integer: "<<answer<<endl;
    return 0;
}