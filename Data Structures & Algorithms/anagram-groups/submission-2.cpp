class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;

        unordered_map<string,vector<string>> mpp;

        for(int i=0;i< strs.size();i++){

            vector<int> freq(26,0);

            for(char ch :strs[i]){

                freq[ch- 'a']++;
            }
            // convert the array to string and insert it in map
            string key= "";
            for(int i=0;i<26;i++){
                key += "#";
                key+=to_string(freq[i]);
            }
            mpp[key].push_back(strs[i]);

        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;

    }
};
