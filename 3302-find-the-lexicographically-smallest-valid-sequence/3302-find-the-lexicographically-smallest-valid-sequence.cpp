class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        vector<int> ans(word2.size());

        // last[j] = word2[j] ko right side se match
        // karne wala suitable index
        vector<int> last(word2.size(), -1);

        int i = word1.size() - 1;
        int j = word2.size() - 1;

        while(i >= 0 && j >= 0)
        {
            if(word1[i] == word2[j])
            {
                last[j] = i;
                j--;
            }

            i--;
        }

        // Ab left se answer banayenge
        bool mismatch = false;
        j = 0;

        for(i = 0; i < word1.size() && j < word2.size(); i++)
        {
            // Exact match
            if(word1[i] == word2[j])
            {
                ans[j] = i;
                j++;
            }

            // Mismatch use kar sakte hain?
            else if(mismatch == false)
            {
                // Agar ye last character hai,
                // to mismatch directly use kar sakte hain.
                //
                // Ya agar remaining word2 ko
                // word1 ke aage wale part se bana sakte hain.
                if(j == word2.size() - 1 || i < last[j + 1])
                {
                    ans[j] = i;
                    j++;
                    mismatch = true;
                }
            }
        }

        // Pura word2 nahi bana
        if(j != word2.size())
        {
            return {};
        }

        return ans;
    }
};