class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        unordered_set<char> sett;
        
        int left=0;
        int maxSub=0;
        for(int right=0;right<n;right++){
            while(sett.count(s[right])){
                sett.erase(s[left]);
                left++;
            }
            sett.insert(s[right]);
            maxSub=max(maxSub,right-left+1);
            
            }
            return maxSub;
           
        }
         
        
    
};
