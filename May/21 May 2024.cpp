class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        int i = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
        int j = i-1;
        if(j >= 0 && arr[j] == x)
            j--;

        vector<int> res;
        while(k--) {
            int upperDiff = INT_MAX;
            if(i < n) upperDiff = arr[i] - x;
            int lowerDiff = INT_MAX;
            if(j >= 0) lowerDiff = x - arr[j];
            
            if(upperDiff <= lowerDiff) res.push_back(arr[i++]);
            else res.push_back(arr[j--]);
        }

        return res;
    }
    
};
