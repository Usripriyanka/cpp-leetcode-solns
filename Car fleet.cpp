class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        if(n==0) return 0;

        vector<pair<int,double>> cars;
        for(int i=0;i<n;i++){
            double time=(double)(target - position[i])/speed[i];
            cars.push_back({position[i],time});
        }
        sort(cars.rbegin(),cars.rend());
        int fleet=0;
        double prevTime=0.0;
        for(auto& car: cars){
            double currTime = car.second;
            if(currTime > prevTime){
                fleet++;
                prevTime=currTime;
            }

        }
        return fleet;
    
    }
};
