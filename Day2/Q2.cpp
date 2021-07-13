class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {int maxx=candies[0];
         for (int i = 0; i < candies.size(); i++)
            maxx = max(maxx, candies[i]);
                                                                          
             vector<bool>ans(candies.size(),false);
       for (int i = 0; i < candies.size(); i++){
            ans[i] = (candies[i] + extraCandies) >= maxx ? true : false;
        }
    return ans;
        
    }
};
