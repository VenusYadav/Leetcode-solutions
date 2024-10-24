class RecentCounter {
public:
    RecentCounter() {
        
    }
    
     vector<int> ans;
    int ping(int t) {
        ans.push_back(t);
        int i=0;
        int count  = ans.size() ;
        while( ans[i] < t-3000)
        {
            count --;
            i++;
        }
        return count ;
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */