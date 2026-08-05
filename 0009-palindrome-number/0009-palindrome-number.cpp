class Solution {
public:
    bool isPalindrome(int x) {
        string k=to_string(x);
        string p=to_string(x);
        reverse(p.begin(),p.end());
        if(p==k)
        return true;

        return false;
        
    }
};