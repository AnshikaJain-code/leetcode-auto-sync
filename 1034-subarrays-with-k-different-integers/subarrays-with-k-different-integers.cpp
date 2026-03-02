class Solution {
public:
    int AtMost(vector<int>& nums, int k){
        int l=0, r=0, n=nums.size(), cnt=0;
        unordered_map<int, int> mpp;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            if(mpp.size()<=k) cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return AtMost(nums, k) - AtMost(nums, k-1);
    }
};