class MinStack {
    stack<int> minSt;
       stack<int> mainSt;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        mainSt.push(val);
        if(minSt.empty()){
          minSt.push(val);
        }
        else{
          minSt.push(min(val,minSt.top()));   
        }

        


    }
    
    void pop() {
        if(!minSt.empty()){
         minSt.pop();
         mainSt.pop();
       
        }
    }
    
    int top() {
      
        return mainSt.top();
        
        
    }
    
    int getMin() {
         return minSt.top();
        
    }
};
