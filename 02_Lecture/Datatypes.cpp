/*Datatypes in C++*/
/*
    Datatypes are classified into 2 major types : PRIMITVE and NON-PRIMITIVE

    --> Primitive datatypes are int, bool, float, cgar, double

    --> Non-primitve are further classified into two categories i.e. linear and non-linear
        Linear datatypes : arrays, string, stack, queue, linked list, etc...
        Non-linear datatypes: graphs, trees, etc..
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;  // declaring a integer datatypes and storing it in a variable
    cout<<"Value of a: "<<a<<endl; //printing value of variable a


    /*Similarly other datatypes*/
    float b = 1.34;
    bool islogged = true;

    cout<<"Value of b: "<<b<<endl;
    cout<<"Value of islogged: "<<islogged<<endl;
    return 0;
}

/*Printing sum of all even numbers upto n*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    int sum = 0;
    int i=2;
    while(i<=n){
        sum = sum+i;
        i = i+2;
    }
    cout<<"Sum of even numbers upto n: "<<endl;
    return 0;
}