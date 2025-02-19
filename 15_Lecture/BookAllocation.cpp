//Problem: Book allocation | Binary search

#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &arr, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<arr.size(); i++){
        if(pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
        if(studentCount > m){
            return false;
        }
    }
    return true;
}
int allocateBooks(vector<int> &arr,int m){
    int s = 0;
    int sum = 0;
    for(int i=0 ;i<arr.size(); i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,m,mid)){
            ans = mid;
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> arr = {10,20,30,40,50};

    int m;
    cout<<"Enter number of books: ";
    cin>>m;
    cout<<allocateBooks(arr,m);
}