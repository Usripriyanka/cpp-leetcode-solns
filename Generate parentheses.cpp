class Solution {
public:
   
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backTrack(res,"",0,0,n);
        return res;
    }
private:
     void backTrack(vector<string>& res, string curr, int open, int close,int max){
        if(curr.length()==2*max){
            res.push_back(curr);
            return;
        }
        if(open<max){
            backTrack(res,curr+'(',open+1,close,max);
        }
        if(close<open){
            backTrack(res,curr+')',open,close+1,max);
        }
    }

};
