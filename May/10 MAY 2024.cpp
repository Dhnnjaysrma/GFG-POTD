class Solution{
public:
    void solve(vector<int>& arr, int target, int start, vector<int>& temp, vector<vector<int>>& result) {
        if(target == 0) {
            result.push_back(temp);
            return;
        }

        for(int i = start; i < arr.size(); i++) {
            if(i > start && arr[i] == arr[i - 1])
                continue;

            if(arr[i] > target)
                break;

            temp.push_back(arr[i]);
            solve(arr, target - arr[i], i + 1, temp, result);
            temp.pop_back();
        }
    }

    vector<vector<int>> CombinationSum2(vector<int> arr, int n, int k) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        vector<int> temp;
        solve(arr, k, 0, temp, result);
        return result;
    }
};
