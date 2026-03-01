class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int l=0, r=0, maxlen=0, maxCount=0, n=s.size();
        while(r<n){
            freq[s[r]-'A']++;
            maxCount = max(maxCount, freq[s[r]-'A']);
            if((r-l+1)-maxCount>k){
                freq[s[l]-'A']--;
                l++;
            }
            else maxlen = max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};