class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<int> cost(n,INT_MAX);
        vector<int> visted(n,false);
        cost[0]=0;
        int total=0;
        for(int count=0;count<n;count++){
            int u=-1;
            for(int i=0;i<n;i++){
                if(!visted[i] && (u==-1 || cost[i]<cost[u]) ){
                    u=i;
                }
                
            }
            visted[u]=true;
            total+=cost[u];
            for(int v=0;v<n;v++){
                if(!visted[v]){
                int dist=abs(points[u][0]-points[v][0])+abs(points[u][1]-points[v][1]);
                if(dist<cost[v]){
                    cost[v]=dist;
                }
            }
            }
        }
        return total;
    

        
        
    }
};