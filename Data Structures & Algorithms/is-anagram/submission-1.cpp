class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> freq(26,0);
        int n=s.size();

        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(auto it:freq){
            if(it!=0){
                return false;
            }
        }
        return true;
    
    }
};
