class Solution {
public:
    int hammingWeight(uint32_t n) {
        int r=0;
        while(n!=0){
            r+=(n&1)?1:0;
            n>>=1;
        }
        return r;
    }
};
