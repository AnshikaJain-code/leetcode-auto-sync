class Solution {
public:

    int AtMost(vector<int>& nums, int k){
        int l=0, r=0, cnt=0, odd=0, n=nums.size();
        while(r<n){
            if(nums[r]%2!=0) odd++;
            while(odd>k){
                if(nums[l]%2!=0) odd--;
                l++;
            }
            cnt+= (r - l + 1);
            r++;
        }
        return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {

        // Optimal Approach
        return AtMost(nums, k) - AtMost(nums, k-1);
    }
};