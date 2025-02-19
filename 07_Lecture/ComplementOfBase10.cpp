//LEETCODE SESSION
//PROBLEM: Complement of base 10 integer
//explanation: 5 is "101" in binary, if we do complement it becomes  "010" which is 2 in base 10, hence when n=5 output will be 2

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int m = num;
    if(num==0) return 1;
    int mask = 0;
    while(m!=0){
        mask = (mask<<1)|1;
        m = m>>1;
    }
    int ans = (~num)&mask;
    cout<<"Complement of "<<num<<" is "<<ans<<endl;
    return 0;
}