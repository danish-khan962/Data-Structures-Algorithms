/*
    *  *  *
    *  *  *
    *  *  *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter input:-> ";
    cin>>size;
    for(int row=1; row<=size; row++){
        for(int column=1; column<=size; column++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}