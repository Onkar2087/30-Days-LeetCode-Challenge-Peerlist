class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> smp, pmp;
        int pl = p.length();
        int sl = s.length();
        
        for(auto c : p)
        {
            pmp[c]++;
        }

        for(int i=0; i<pl; i++)
        {
            smp[s[i]]++;
        }

        if(pmp == smp)
        {
            ans.push_back(0);
        }

        for(int i=pl; i<sl; i++)
        {
            smp[s[i]]++;

            char rem = s[i - pl];
            if(smp[rem] == 1)
            {
                smp.erase(rem);
            }
            else
            {
                smp[rem]--;
            }

            if(smp == pmp)
            {
                ans.push_back(i-pl+1);
            }
        }
        return ans;
    }
};