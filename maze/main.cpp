#include <iostream>
#include <vector>

using namespace std;

bool dfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& visited, vector<vector<bool>>& cycle) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || visited[i][j]) {
        return false;
    }

    visited[i][j] = true;

    switch (grid[i][j]) {
        case 'U':
            return dfs(grid, i - 1, j, visited, cycle);
        case 'D':
            return dfs(grid, i + 1, j, visited, cycle);
        case 'L':
            return dfs(grid, i, j - 1, visited, cycle);
        case 'R':
            return dfs(grid, i, j + 1, visited, cycle);
        default:
            for (char dir : {'U', 'D', 'L', 'R'}) {
                grid[i][j] = dir;
                if (dfs(grid, i, j, visited, cycle)) {
                    cycle[i][j] = true;
                    return true;
                }
                grid[i][j] = '?';
            }
    }
    return false;
}

int count_trapped_positions(vector<vector<char>>& grid) {
    int n = grid.size(), m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<bool>> cycle(n, vector<bool>(m, false));

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j] && dfs(grid, i, j, visited, cycle)) {
                count += cycle[i][j];
            }
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin>>grid[i][j];  

            }
        }

        int ans = count_trapped_positions(grid);
        cout << ans << endl;
    }

    return 0;
}
