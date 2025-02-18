/*

                1 1 1 1
                  2 2 2
                    3 3
                      4               

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int space = i-1;
        while(space){
            cout<<" ";
            space = space-1;
        }
        for (int j = n-i+1; j; j--) {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}