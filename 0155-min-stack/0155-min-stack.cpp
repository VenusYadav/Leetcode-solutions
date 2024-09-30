class MinStack {
public:
    vector<pair<int, int>> vp ; 
    MinStack() {
       
        
    }
    
    void push(int val) {
        if(vp.empty())
        {
            pair<int, int> p;
            p.first = val;
            p.second = val;
            vp.push_back(p);
        }
        else
        {
            pair<int, int> p;
            p.first = val;
            int oldval = vp.back().second ;
            p.second = min(oldval, val);
            vp.push_back(p);
        }
        
    }
    
    void pop() {
        if(!vp.empty())
          vp.pop_back();
    }
    
    int top() {
        return vp.back().first;
    }
    
    int getMin() {
        return vp.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */