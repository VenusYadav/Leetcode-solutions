class Solution {
public:

    int findTheWinner(int n, int k) {
        vector<int> friends;
        for (int i = 1; i <= n; i++) {
            friends.push_back(i);
        }
        
        int index = 0; 
    
        while (friends.size() > 1) {
            // Calculate the next index to remove
            index = (index + k - 1) % friends.size();
            friends.erase(friends.begin() + index);
        }
        
        return friends[0];
    }
};

