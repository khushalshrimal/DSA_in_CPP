class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currsum=0;

        for(int start=0;start<nums.size();start++){
            
                currsum=currsum+nums[start];
                maxsum=max(maxsum,currsum);
                if(currsum<0){
                    currsum=0;
                }
            }
        return maxsum;
    }
    
    
    


        
    
};