class Solution{
public:
	string printLargest(int n, vector<string> &arr)
	{
	    sort(arr.begin(), arr.end(), func);
        string out;
        for (auto s : arr)
            out+=s;
        return out;
	}
};
