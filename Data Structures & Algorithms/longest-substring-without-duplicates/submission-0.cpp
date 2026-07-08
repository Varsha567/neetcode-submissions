class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int maxL=0;
        unordered_set<int> st;
        while(r<s.size()){
            if(st.find(s[r])!=st.end()){
                while(l<r && st.find(s[r])!=st.end()){
                    st.erase(s[l]);
                    l++;
                }
            }
            st.insert(s[r]);
            maxL=max(maxL,r-l+1);
            r++;
        }
        return maxL;
    }
};
