class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int repeat=0;
        int miss=0;
        int n=grid.size();
        vector<int> freq(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=0;i<=n*n;i++){
            if(freq[i]==2){
                repeat=i;
            }
         if(freq[i]==0){
                miss=i;
            }
        }
        return {repeat,miss};
        
    }
};