//PROBLEM: TO find the precise square root of a number using binary search

#include<bits/stdc++.h>
using namespace std;
long long BinarySearch(int n){
    int start = 0;
    int end = n;
    long long mid = start+(end-start)/2;
    long long answer = -1;

    while(start<=end){
        long long square = pow(mid,2); //mid * mid
        if(square == n){
            return mid;
        }else if(n>square){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return answer;
}
double morePreciseAnswer(int n, int precision, int tempSolution){
    double factor = 1;
    double answer = tempSolution;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j=answer; j*j<n; j=j+factor){
            answer = j;
        }
    }
    return answer;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int tempSolution = BinarySearch(n);
    cout<<"Square root of number = "<<morePreciseAnswer(n,3,tempSolution)<<endl;
    return 0;
}