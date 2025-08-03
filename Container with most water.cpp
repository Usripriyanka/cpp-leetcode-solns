class Solution {
public:
    int maxArea(vector<int>& height) {
        long long maxWater=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int width=right-left;
            int ht=min(height[left],height[right]);
            long long area=width*ht;
            maxWater=max(area,maxWater);

            if(height[left]<height[right])left++;
            else right--;
        }
        return maxWater;
        

    }
};
