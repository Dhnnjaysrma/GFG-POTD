class Solution {
public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query, int q) {
        int nax = *max_element(a.begin(), a.end());
        vector<int> mp(nax + 1, 0);
        for (auto i : b)
            if (i <= nax)
                ++mp[i];

        for (int i = 1; i <= nax; ++i)
            mp[i] += mp[i - 1];

        vector<int> out;
        for (auto i : query)
            out.push_back(mp[a[i]]);

        return out;
    }
};
