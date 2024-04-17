class Solution {
public:
    int countPairs(int arr[], int n) {
        orderedMultiSet st;
        st.insert(arr[n - 1] * (n - 1));
        int ans = 0;

        for (int i = n - 2; i >= 0; --i) {
            st.insert(arr[i] * i);
            ans += st.order_of_key(arr[i] * i);
        }

        return ans;
    }
};
