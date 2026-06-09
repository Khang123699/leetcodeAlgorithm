class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i=0, j=0;
        int u=0, v=0;
        while(i<word1.size()&&u<word2.size()){
            if(word1[i][j]!=word2[u][v]) return false;
            j++;
            v++;
            if(j==word1[i].size()){
                i++;
                j=0;
            }
            if(v==word2[u].size()){
                u++;
                v=0;
            }
        }
        return i==word1.size()&&u==word2.size();
    }
};