class Solution {
public:
vector<vector<int>> ans;
vector<int> group;
void function(int start,vector<int>& nums){
    
    for(int i=start;i<nums.size();i++){
        if(i>start && nums[i]==nums[i-1]){
            continue;
        }
         group.push_back(nums[i]);
         function(i+1,nums);
         group.pop_back();
    }
    ans.push_back(group);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        function(0,nums);
        return ans;
        
    }
};