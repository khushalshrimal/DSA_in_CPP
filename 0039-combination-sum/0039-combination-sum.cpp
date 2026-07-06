class Solution {
public:
 vector<vector<int>> ans;
        vector<int> group;
 void function(int index,vector<int>& candidates,int target){
        if(target==0){
            ans.push_back(group);
            return;
        }
        if(target<0 || index==candidates.size()){
            return;
        }

        group.push_back(candidates[index]);
        function(index,candidates,target-candidates[index]);
        group.pop_back();

        function(index+1,candidates,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        function(0,candidates,target);
        return ans;
        
        
    }
};