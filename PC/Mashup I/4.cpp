#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> grid(n, vector<char>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        for (int j = 0; j < m; j++) {
            for (int i = n - 1; i >= 0; i--) {
                if (grid[i][j] == '*') {
                    int k = i + 1;
                    while (k < n && (grid[k][j] == '.' || grid[k][j] == '*')) {
                        if (grid[k][j] == '.') {
                            grid[k-1][j] = '.';
                            grid[k][j] = '*';
                        }
                        k++;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << grid[i][j];
            }
            cout << endl;
        }
        if (t > 0) {
            cout << endl;
        }
    }

    return 0;
}
