class Solution {
public:
    string makeGood(string s) {
        std::string result = "";
        for (char c:s){
            if (!result.empty()&&result.back()!=c&&std::tolower(result.back())==std::tolower(c)){
                result.pop_back();
            }else{
                result.push_back(c);
            }
        }
    return result;
    }
};