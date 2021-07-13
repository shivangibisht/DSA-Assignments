class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> f;int gp=0;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
            if( f[nums[i]]>1){gp+=f[nums[i]]-1;}
        }return gp;
        
    }
};
