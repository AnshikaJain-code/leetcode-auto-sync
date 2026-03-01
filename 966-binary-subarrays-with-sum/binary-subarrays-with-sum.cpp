class Solution {
public:

    int func(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int l=0, r=0, n=nums.size(), sumi=0, cnt=0;
        while(r<n){
            sumi+=nums[r];
            while(sumi>goal){
                sumi-=nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        // Brute Force Approach

        // int cnt = 0, n=nums.size();
        // for(int i=0; i<n; i++){
        //     int sumi = 0;
        //     for(int j=i; j<n; j++){
        //         sumi+=nums[j];
        //         if(sumi==goal) cnt++;
        //         else if(sumi>goal) break;
        //     }
        // }
        // return cnt;

        // Optimal Approach
        return func(nums, goal) - func(nums, goal-1);
        
    }
};