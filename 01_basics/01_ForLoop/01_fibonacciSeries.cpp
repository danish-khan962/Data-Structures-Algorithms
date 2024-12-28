//FIBONACCI SERIES
#include<bits/stdc++.h>
using namespace std;
int main(){
    int range;
    cout<<"Enter range to print fibonacci series: ";
    cin>>range;

    int initial_var1 = 0;
    int initial_var2 = 1;
    cout<<"FIBONACCI SERIES: "<<initial_var1<<" "<<initial_var2<<" ";

    for(int i=0; i<=range; i++){
        int nextNumber = initial_var1 + initial_var2;
        cout<<nextNumber<<" ";

        initial_var1 = initial_var2;
        initial_var2 = nextNumber;
    }
    return 0; 
}