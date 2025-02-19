//PROBLEM: Pair sum

#include<bits/stdc++.h>
using namespace std;
void pairSum(vector<int> &arr, int s){
    vector<vector<int>> answer;
    for(int i=0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i]+arr[j] == s){
                vector<int> temporary;
                temporary.push_back(min(arr[i], arr[j]));
                temporary.push_back(max(arr[i], arr[j]));
                answer.push_back(temporary);
            }
        }
    }
    sort(answer.begin(), answer.end());
    cout << "Pairs with sum " << s << ": ";
    for (const auto& pair : answer) {
        cout << "(" << pair[0] << ", " << pair[1] << ") ";
    }
    cout << endl;
}
int main(){
    vector<int> arr = {1,2,3,4,8};
    int s=6;

    pairSum(arr,s);
    return 0;
}