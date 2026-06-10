class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int originalColor = image[sr][sc];    
        if (originalColor == color) {
            return image;
        }  
        int rows = image.size();
        int cols = image[0].size();
        auto dfs = [&](auto& self, int r, int c) -> void {
            if (r < 0 || c < 0 || r >= rows || c >= cols || image[r][c] != originalColor) {
                return;
            }          
            image[r][c] = color;         
            self(self, r - 1, c);
            self(self, r + 1, c);
            self(self, r, c - 1);
            self(self, r, c + 1);
        }; 
        dfs(dfs, sr, sc);
        return image;
    }
};