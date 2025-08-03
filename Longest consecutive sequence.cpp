class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.empty())return 0;
      unordered_set<int> numSet(nums.begin(),nums.end());
      
      int longest=0;
      int count;
      int curr;
      for(int i:numSet){
      if(numSet.find(i-1)==numSet.end()){
        curr=i;
        count=1;
      }  
      while(numSet.find(curr+1)!=numSet.end()){
         
         curr++;
         count++;
         }
         longest=max(longest,count);
    
      }
      
    return longest;}


};
