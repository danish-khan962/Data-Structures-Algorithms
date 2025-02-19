//PROBLEM: to find the intersection between two arrays

#include<bits/stdc++.h>
using namespace std;
void arrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m){
    int i=0, j = 0;
    vector<int> answer;
    while(i<n&&i<m){
        if(arr1[i] == arr2[j]){
            answer.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            i++;
        }else{
            j++;
        }
    }
     // Printing the intersection
     cout << "Intersection: ";
     for (int num : answer) {
         cout << num << " ";
     }
     cout << endl;
}
int main(){
    vector<int> arr1 = {1,2,2,2,3,4};
    int n = arr1.size();

    vector<int> arr2 = {2,2,3,3};
    int m = arr2.size();

    arrayIntersection(arr1, n , arr2, m);
    return 0;
}