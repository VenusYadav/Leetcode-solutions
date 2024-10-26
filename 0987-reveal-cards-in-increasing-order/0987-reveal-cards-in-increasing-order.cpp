class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        vector<int>ans(deck.size(), -1);

        queue<int> que;
        for(int i=0;i<deck.size(); i++)
        {
            que.push(i);
        } 
        int i=0;
        while(!que.empty())
        {
            int topval = que.front();
            que.pop();
            ans[topval] = deck[i];
            i++;
            if(!que.empty())
            {
                int nextToTop = que.front();
                que.pop();
                que.push(nextToTop);  
            }
        }
        return ans;   
    }
};