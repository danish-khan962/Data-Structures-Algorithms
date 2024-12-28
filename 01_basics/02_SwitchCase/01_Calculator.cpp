//Calculator : Syntax to understand switch case
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number_1;
    cout<<"Enter 1st number: ";
    cin>>number_1;

    int number_2;
    cout<<"Enter 2nd number: ";
    cin>>number_2;

    char expression;
    cout<<"Enter operator: ";
    cin>>expression;

    switch(expression){
        case '+': cout<<"ADDITION: "<<(number_1+ number_2)<<endl;
        break;
        case '-': cout<<"SUBTRACTION: "<<(number_1- number_2)<<endl;
        break;
        case '*': cout<<"MULTIPLICATION: "<<(number_1* number_2)<<endl;
        break;
        case '/': cout<<"DIVISON: "<<(number_1/ number_2)<<endl;
        break;
        case '%': cout<<"MODULUS: "<<(number_1% number_2)<<endl;
        break;  
        
        default: cout<<"Please Enter a valid operator :/"<<endl;
    }
    return 0;
}