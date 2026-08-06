class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxl=0;
        unordered_set<char> ans;
        for(int right=0;right<s.size();right++){
            while(ans.find(s[right])!=ans.end()){
                ans.erase(s[left]);
                left++;
            }
            ans.insert(s[right]);
            maxl=max(maxl,right-left+1);

        }
        return maxl;
        
    }
};