class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int n = nums.size();
        vector<int> result(n, 1); 

        //  Prefix pass (left to right)
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            result[i] = prefix;      // store product of all elements to the left of i
            prefix *= nums[i];       // update prefix with current element
        }

        //  Suffix pass (right to left)
        int suffix = 1;
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= suffix;     // multiply with product of all elements to the right
            suffix *= nums[i];       // update suffix
        }

        
    
       return result;
        
       
    }
};
