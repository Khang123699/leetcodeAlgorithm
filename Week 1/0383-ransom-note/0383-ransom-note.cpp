class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::vector<int> char_count(26, 0);
        for(char c:magazine){
            char_count[c-'a']++;
        }
        for(char c:ransomNote){
            char_count[c-'a']--;
            if(char_count[c-'a']<0) return false;
        }
        return true;
    }
};