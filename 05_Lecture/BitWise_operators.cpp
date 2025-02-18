/*Biwise operators
AND: &  , OR: |     , NOT: ~    , XOR:^
    <<: Left shift
    >>: Right shift
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a= 3;
    int b = 5;
    
    cout<<"AND : "<< (a&b)<<endl;
    cout<<"OR : "<< (a|b)<<endl;
    cout<<"NOT: "<< (~a)<<endl;
    cout<<"XOR: "<< (a^b)<<endl;
}