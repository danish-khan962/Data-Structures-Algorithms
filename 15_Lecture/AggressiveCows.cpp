//Problem: Agressive Cows | Binary Search....

#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid ){
    int cowCounts = 1;
    int lastPOS  = stalls[0];
    for(int i=0; i<stalls.size(); i++){
        if(stalls[i]-lastPOS >= mid){
            cowCounts++;
            if(cowCounts == k){
                return true;
            }
            lastPOS = stalls[i];
        }
    }
    return false;
}
int aggresiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls.size()-1;
    int answer = -1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(isPossible(stalls, k, mid)){
            answer = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return answer;
}
int main(){
    vector<int> stalls = {4,2,1,3,6};

    int k;
    cout<<"Enter number of cows: ";
    cin>>k;

    cout<<"Answer: "<<aggresiveCows(stalls,k);
    return 0;
}