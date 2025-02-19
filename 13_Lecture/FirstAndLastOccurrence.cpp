/*PROBLEM: To find first and last position of an element in sorted array*/

#include<bits/stdc++.h>
using namespace std;
int FirstOccurrence(vector<int> &arr, int key){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int answer = -1;
    while(start<=end){
        if(arr[mid]==key){
            answer = mid;
            end = mid-1;
        }else if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return answer;
}
int LastOccurrence(vector<int> &arr, int key){
    int start = 0;
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    int answer = -1;
    while(start<=end){
        if(arr[mid] == key){
            answer = mid;
            start = mid +1;
        }else if(arr[mid]<key){
            start = mid +1;
        }else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return answer;
}
pair<int,int> firstAndLastPosition(vector<int>&arr, int key){
    pair<int,int> p;
    p.first = FirstOccurrence(arr,key);
    p.second = LastOccurrence(arr,key);
    return p;
}
int main(){
    vector<int> arr= {1,2,3,3,3,5};
    int key;
    cout<<"Enter element to check it's first and last occurrence: ";
    cin>>key;

    pair<int, int> result = firstAndLastPosition(arr, key);
    cout << "First Occurrence: " << result.first << endl;
    cout << "Last Occurrence: " << result.second << endl;
    return 0;
}