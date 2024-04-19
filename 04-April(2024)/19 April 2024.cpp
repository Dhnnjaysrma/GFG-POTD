class Solution{

    public:

    vector<int> findMissing(int a[], int b[], int n, int m)

    {

            unordered_map<int, int> s;
            vector<int> v;
            for(int i = 0; i<m;i++){
                int flag = b[i];
                s[flag] = 1;
            }
            for(int j = 0; j<n; j++){
                int temp = a[j];
            i    f(s[temp]==0){
                    v.push_back(temp);
                }
            }
        
            return v;
        }

}; 
