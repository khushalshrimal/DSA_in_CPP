class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        for(int p=nums.size()-1;p>index;p--){
            if(nums[index]<nums[p]){
                swap(nums[index],nums[p]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());

        
    }
};