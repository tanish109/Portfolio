#include <iostream>
using namespace std;

void pattern(int n) {

    // Upper part
    for(int i = n-1; i >= 0; i--) {
        for(int j = i; j <= n-1; j++)
            cout << j;
        cout << endl;
    }

    // Lower part
    for(int i = 1; i < n; i++) {
        for(int j = i; j <= n-1; j++)
            cout << j;
        cout << endl;
    }
}

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        pattern(n);
    }

    return 0;
}