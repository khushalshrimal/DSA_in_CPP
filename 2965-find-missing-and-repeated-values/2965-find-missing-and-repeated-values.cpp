class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int> freq(m*n+1,0);
        int repeat=-1;
        int missing=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                freq[grid[i][j]]++;
            }
        }
        for(int i=0;i<=m*n;i++){
            if(freq[i]==2)
            repeat=i;

           else if(freq[i]==0)
            missing=i;
            
        }
        return {repeat,missing};
    }
};