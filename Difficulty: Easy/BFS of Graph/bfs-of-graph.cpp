class Solution {
public:
    vector<int> bfs(vector<vector<int>>& adj) {
        int v = adj.size();
        
        vector<int> visited(v, 0);
        vector<int> ans;
        queue<int> q;

        int s = 0;  // starting vertex

        q.push(s);
        visited[s] = 1;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            ans.push_back(u);

            for (int i = 0; i < adj[u].size(); i++) {
                int x = adj[u][i];

                if (visited[x] == 0) {
                    visited[x] = 1;
                    q.push(x);
                }
            }
        }

        return ans;
    }
};