class Solution {
public:
bool checkInclusion(string s1, string s2) {
        int n1=s1.size();
        if(s1.size() > s2.size())
            return false;
        for(int i=0;i<=s2.size()-n1;i++){
              vector<int> freq(26, 0);
            string k=s2.substr(i,n1);
            for(int i=0;i<n1;i++){
                freq[k[i]-'a']++;
            }
            for(int i=0;i<n1;i++){
                freq[s1[i]-'a']--;
            }
            bool flag =true;
            for(int i=0;i<26;i++){
                if(freq[i]!=0){
                flag=false;
                break;  
            }

        }
        if(flag)
        return true;
        }


        return false;

         
    }
};