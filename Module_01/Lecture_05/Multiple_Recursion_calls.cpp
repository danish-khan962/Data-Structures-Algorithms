//Multiple recursion calls
//PROBLEM: Fibonacci series using recursion

#include<bits/stdc++.h>
using namespace std;
int fibonacciSeries(int n){
  if(n<=1) return n;
  int last = fibonacciSeries(n-1);
  int s_last = fibonacciSeries(n-2);
  return last + s_last;
}
int main(){
    int n;
    cout<<"Enter the location to get fibonacci number: ";
    cin>>n;

    cout<<"Fibonacci number: "<<fibonacciSeries(n);
    return 0;
}