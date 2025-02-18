/*Conditionals are those keywords which we use to manipulate our code according to our necessary conditionds

    if,         else,           else if

*/

//*PROBLEM - 1 : To check if number if positive, negative or zero
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter number to check if it's +, - or 0 =>   ";
    cin>>number;

    //using conditionals
    if(number<0)
        cout<<"number is NEGATIVE..";
    if(number>0)
        cout<<"number is POSITIVE...";
    if(number==0)
        cout<<"number is ZERO....";
    
    return 0;
}


//*PROBLEM - 2 : To classify which character is uppercase, lowercase, digit and special char
#include<bits/stdc++.h> // we use <cctype> , which is already included by using this header file
using namespace std;
int main(){
    char inputCH;
    cout<<"Enter your character: ";
    cin>>inputCH;

    if(isupper(inputCH)){
        cout<<"Entered charcater is UPPERCASE.....//"<<endl;
    }else if(islower(inputCH)){
        cout<<"Entered character is LOWERCASE......//"<<endl;
    }else if(isdigit(inputCH)){
        cout<<"Entered character is DIGIT.....//"<<endl;
    }else{
        cout<<"Eneterd character is SPECIAL CHARACTER.......//"<<endl;
    }
    return 0;
}