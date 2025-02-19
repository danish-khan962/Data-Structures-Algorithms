//Switch case problem

//PROBLEM: Program to enter amount and check how many notes of $100, $50, $20 and $1 are required for amount using switch..

#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount ;
    cout<<"Enter amount :";
    cin>>amount;

    int num = 1;
    int notes = 0;

    switch(num){
        case 1: notes = amount/100;
                amount = amount-(notes*100);
                cout<<"$100 notes required = "<<notes<<endl;
        case 2: notes = amount/50;
                amount = amount-(notes*50);
                cout<<"$50 notes required = "<<notes<<endl;
        case 3: notes = amount/20;
                amount = amount-(notes*20);
                cout<<"$20 notes required = "<<notes<<endl;
        case 4: notes = amount/1;
                amount = amount-(notes*1);
                cout<<"$1 notes required = "<<notes<<endl;
    }
    return 0;
}