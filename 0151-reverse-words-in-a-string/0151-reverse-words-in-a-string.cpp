class Solution {
public:
    string reverseWords(string s) {
        int left=0;
        reverse(s.begin(),s.end());
        while(!s.empty() && s[0]==' '){
        s.erase(0,1);
        }

        while(!s.empty() && s.back()==' '){
            s.pop_back();
        }
        for(int i=left;i<s.size();i++){
            while(i+1<s.size() && s[i]==' ' && s[i+1]==' '){
                s.erase(i,1);
                continue;
            }
            if(s[i]==' '){
                reverse(s.begin()+left,s.begin()+i);
                left=i+1;


            }
        }
        reverse(s.begin()+left,s.end());
        return s;
        
    }
};