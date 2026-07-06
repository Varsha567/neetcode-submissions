class Solution {
public:
    int appendCharacters(string s, string t) {
        int c=0;
        int x=0,y=0;
        while(x!=s.size() && y!=t.size()){
            if(s[x]==t[y]){
                c++;
                y++;
            }
            x++;
        }
        //cout<<c;
        return t.size()-c;
    }
};