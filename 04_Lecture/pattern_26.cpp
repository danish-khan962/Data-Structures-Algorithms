/*

                   1
                2  3
            4   5  6             

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 1;
    for (int i = 1; i <= n; i++) {
        int space = n-i;
        while(space){
            cout<<" ";
            space = space-1;
        }
        for (int j = 1; j<=i; j++) {
            cout << count;
            count++;
        }
        cout << endl;
    }
    return 0;
}