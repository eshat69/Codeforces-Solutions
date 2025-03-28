#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        int operations = 0;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                if (a[i][j] < 0) {
                    int needed_magic = -a[i][j];
                    operations += needed_magic;
                    int k = 0;
                    while (i - k >= 0 && j - k >= 0) {
                        a[i - k][j - k] += needed_magic;
                        k++;
                    }
                }
            }
        }
        cout << operations << endl;
    }
    return 0;
}
