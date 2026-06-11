class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size();
        int n=maze[0].size();
        std::queue<pair<int, int>> q;
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        int steps =0;
        std::vector<pair<int, int>> dirs={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            int size=q.size();
            steps++;
            for(int i=0;i<size;i++){
                auto [r,c]=q.front();
                q.pop();
                for (auto dir:dirs){
                    int nr=r+dir.first;
                    int nc=c+dir.second;
                    if(nr>=0&&nr<m&&nc>=0&&nc<n&&maze[nr][nc]=='.'){
                        if(nr==0||nr==m-1||nc==0||nc==n-1){
                            return steps;
                        }
                        maze[nr][nc]='+';
                        q.push({nr,nc});
                    }
                }
            }
        }
        return -1;
    }
};