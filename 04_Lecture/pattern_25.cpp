/*

              1 2 3 4
                2 3 4
                  3 4
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
        for (int j = i; j<=n; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}