class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        for (int i = 0; i < strs[0].size(); i++) {

            for (int j = 1; j < strs.size(); j++) {

                // If current string is shorter
                if (i == strs[j].size()) {
                    return ans;
                }

                // If characters don't match
                if (strs[j][i] != strs[0][i]) {
                    return ans;
                }
            }

            // Every string matched this character
            ans += strs[0][i];
        }

        return ans;
    }
};
