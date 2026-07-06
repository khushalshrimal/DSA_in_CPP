class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea=0;
        int i=0;
        int j=height.size()-1;
        while(i<j){
            int width=j-i;
            int h=min(height[i],height[j]);
            int area=h*width;
         maxarea=max(maxarea,area);
            if(height[i]<height[j]){
                i++;
            }
            else{j--;}


        }
        return maxarea;
        
    }
};