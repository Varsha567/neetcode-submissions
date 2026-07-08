class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int maxl=0,mf=0;
        unordered_map<int,int> mp;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            mf=max(mf,mp[s[r]]);
            if((r-l+1)-mf>k){
                mp[s[l]]--;
                l++;
            }
            maxl=max(maxl,r-l+1);
        }
        return maxl;
    }
};
