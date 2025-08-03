class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i:nums){
            mpp[i]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>minHeap;

        for(auto& [num,freq]:mpp){
            minHeap.push({freq,num});
            if(minHeap.size()>k){
                minHeap.pop();
            }
        }
        vector<int> result;
        while(!minHeap.empty()){
           result.push_back(minHeap.top().second);
           minHeap.pop();
        }
        return result;

        



    }
};
