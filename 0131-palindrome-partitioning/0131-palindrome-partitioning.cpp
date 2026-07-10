class Solution {
public:
vector<vector<string>> ans;
vector<string> group;
void function(int start,string s){
    if(start==s.size()){
        ans.push_back(group);
        return;
    }

    for(int i=start;i<s.size();i++){
        string part=s.substr(start,i-start+1);
        string temp=part;
        reverse(temp.begin(),temp.end());
        if(temp==part){
            group.push_back(part);
            function(i+1,s);
            group.pop_back();
        }
    else{
        continue;
    }
    }
}
vector<vector<string>> partition(string s) {
    function(0,s);
    return ans;

    
        
    }
};