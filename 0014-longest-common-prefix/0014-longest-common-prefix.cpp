class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string p=strs[0];
        for(auto& x:strs){
            while(x.find(p)!=0){
                p.pop_back();
            }
        }

        return p;
    }
};