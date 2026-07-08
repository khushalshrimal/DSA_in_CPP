class Solution {
public:
vector<vector<int>> ans;
vector<int> group;
void function(int start,vector<int>& candidates,int target){
     if(target==0){
        ans.push_back(group);
        return;
    }
    for(int i=start;i<candidates.size();i++){

    if(i>start && candidates[i]==candidates[i-1])
    continue;
    if(candidates[i]>target)
    break;

    group.push_back(candidates[i]);
    function(i+1,candidates,target-candidates[i]);
    group.pop_back();
}
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        function(0,candidates,target);
        return ans;

        
    }
};