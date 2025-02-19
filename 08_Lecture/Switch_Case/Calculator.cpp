//Calculator using switch case

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
    cout<<"Enter number Ist: ";
    cin>>num1;

    int num2;
    cout<<"Enter number IIst: ";
    cin>>num2;

    char operation;
    cout<<"Enter operation to perform: ";
    cin>>operation;

    switch(operation){
        case '+': cout<<"ADDITION=>>  "<<(num1+num2)<<endl;
        break;
        case '-': cout<<"SUBTRACTION=>>  "<<(num1-num2)<<endl;
        break;
        case '*': cout<<"MULTIPLICATION=>>  "<<(num1*num2)<<endl;
        break;
        case '/': cout<<"DIVISION=>>  "<<(num1/num2)<<endl;
        break;

        default:    //if everycase becomes false, default will execute
        cout<<"Enter valid operation....////"<<endl;
    }
    return 0;
}