class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        // Brute Force Approach
        int cnt = 0, n=nums.size();
        for(int i=0; i<n; i++){
            int sumi = 0;
            for(int j=i; j<n; j++){
                sumi+=nums[j];
                if(sumi==goal) cnt++;
                else if(sumi>goal) break;
            }
        }
        return cnt;
    }
};