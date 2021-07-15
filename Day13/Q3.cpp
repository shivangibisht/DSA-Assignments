class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int n= nums.size();
        int s1,s2=0,res;
        s1=n*(n+1)/2;
        for(int i=0; i<n;i++)
        {
            s2+=nums[i];
        }
            return s1-s2;
        }
};
