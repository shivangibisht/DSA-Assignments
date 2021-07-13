class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        
        vector <int>ins;
        
        for(int i=0;i<nums1.size();i++)
        { m[nums1[i]]=1;}
        
        for(int i=0;i<nums2.size();i++)
        {
            if(m[nums2[i]]==1)
                
            {ins.push_back(nums2[i]);
             
             m[nums2[i]]=0;
             
             
            }
        }
        return ins;
    }
};
