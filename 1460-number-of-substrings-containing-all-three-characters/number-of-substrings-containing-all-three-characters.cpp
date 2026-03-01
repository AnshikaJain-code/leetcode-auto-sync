class Solution {
public:
    int numberOfSubstrings(string s) {
        // Brute Force Approach

        // int count  = 0;
        // for(int i=0; i<s.size(); i++){
        //     int aCount = 0, bCount = 0, cCount = 0;
        //     for(int j=i; j<s.size(); j++){
        //         if(s[j]=='a') aCount++;
        //         else if(s[j]=='b') bCount++;
        //         else cCount++;
        //         if((aCount>=1 && bCount>=1) && cCount>=1) count++;
        //     }
        // }
        // return count;

        // Optimal Approach

        int aCount = 0, bCount = 0, cCount =0, count=0, l=0, r=0, n=s.size();
        while(r<n){
            if(s[r]=='a') aCount++;
            else if(s[r]=='b') bCount++;
            else cCount++;
            while((aCount>=1 && bCount>=1) && cCount>=1){
                count+=(n-r);
                if(s[l]=='a') aCount--;
                else if(s[l]=='b') bCount--;
                else cCount--;
                l++;
            } 
            r++;
        }
        return count;
    }
};