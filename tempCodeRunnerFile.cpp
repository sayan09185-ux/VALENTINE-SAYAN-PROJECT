#include <bits/stdc++.h>

using namespace std;

int main() {
        int T;
        cin >> T;
        while (T != 0) {
            int n;
            cin >> n;
            int b[n];
            int sum = 0;
            int a[n];
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++) {
                cin >> b[i];
            }
            int max = a[0];
            for (int i = 0; i < n; i++) {
                if (a[i] < max) {
                    max = i;
                }
                for (int i = o; i < n; i++) {
                    sum += a[i];
                    if (i = max) {
                        continue;
                    }
                }
                sum += b[max];
            }
        }}