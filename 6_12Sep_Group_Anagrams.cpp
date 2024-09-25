class Solution {
public:
    string help(string& word)
    {
        vector<int> arr(26, 0);

        for(char &ch : word)
        {
            arr[ch - 'a']++;
        }

        string str = "";

        for(int i=0; i<26; i++)
        {
            int c = arr[i];
            if(c > 0)
            {
                str += string(c, i+'a');
            }
        }
        return str;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> mp;
        int n = strs.size();

        for(int i=0; i<n; i++)
        {
            string word = strs[i];
            string str = help(word);
            mp[str].push_back(word);
        }

        for(auto x : mp)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};