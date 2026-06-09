class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> set;
        int max_len=0;
        int left=0;
        for(int right=0;right<s.length();right++){
            while(set.find(s[right])!=set.end()){
                set.erase(s[left]);
                left++;
            }
        set.insert(s[right]);
        max_len=std::max(max_len,right-left+1);
        }
    return max_len;
    }
};