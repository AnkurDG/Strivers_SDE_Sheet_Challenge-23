class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans=0;
   
        
        
        for(auto t:mp){
            if(t.second>1){
                 ans =  t.first;
                break;
            }
        }
        
        return ans;
    }
};