class Solution {
public:
	bool isEularCircuitExist(int v, vector<int>adj[]){
	    unordered_map<int, int>deg;
        for (int i=0;i<v;i++) 
            deg[i]=adj[i].size();
        for (auto& kv : deg)
        {
            if (kv.second%2!=0)
                return false;
        }
        return true;
	}

};
