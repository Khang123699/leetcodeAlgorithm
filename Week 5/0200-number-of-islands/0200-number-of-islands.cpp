class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int num_islands = 0;
        auto dfs = [&](auto& self, int r, int c) -> void {
            if (r < 0 || c < 0 || r >= rows || c >= cols || grid[r][c] == '0') {
                return;
            }            
            grid[r][c] = '0';            
            self(self, r - 1, c);
            self(self, r + 1, c);
            self(self, r, c - 1);
            self(self, r, c + 1);
        };
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (grid[r][c] == '1') {
                    ++num_islands;
                    dfs(dfs, r, c);
                }
            }
        }
        return num_islands;
    }
};