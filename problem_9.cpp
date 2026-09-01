#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {

        char c = s[i];
        int x = -1;

        for (int j = i + 1; j < n; j++) {

            if (c == s[j]) {
                cout << j - i - 1 << " ";
                x = 10;
                break;
            }
        }

        if (x == -1) {
            cout << -1 << " ";
        }
    }

    return 0;
}