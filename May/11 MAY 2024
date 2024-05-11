class Solution {
public:
    std::vector<long long> jugglerSequence(long long n) {
        std::vector<long long> res;
        res.push_back(n);

        while (n > 1) {
            if (n % 2)
                n = static_cast<long long>(std::sqrt(n) * n);
            else
                n = static_cast<long long>(std::sqrt(n));

            res.push_back(n);
        }

        return res;
    }
};
