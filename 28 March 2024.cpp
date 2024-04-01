class Solution {
public:
    int dijkstra(int curr, int& n, int& distThreshold, vector<vector<pair<int, int>>>& graph) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        vector<int> vis(n, 0);
        pq.push({0, curr});
        
        int cnt = 0;
        while (!pq.empty()) {
            int dist = pq.top().first; 
            int node = pq.top().second;
            pq.pop();
            
            if (vis[node]) 
                continue;
                
            vis[node] = 1;
            if (dist > distThreshold) 
                continue;
            ++cnt;
            
            for (auto itr : graph[node]) {
                int nodeDist = itr.first;
                int nextNode = itr.second;
                if (!vis[nextNode]) 
                    pq.push({dist + nodeDist, nextNode});
            }
        }
        return cnt;
    }
