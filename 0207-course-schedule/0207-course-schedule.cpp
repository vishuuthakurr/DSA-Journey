class Solution {
public:
bool dfs(int s, vector<vector<int>>& adj,
             vector<int>& visited, vector<int>& path)
    {
        visited[s] = 1;
        path[s] = 1;

        for (int i = 0; i < adj[s].size(); i++)
        {
            int x = adj[s][i];

            if (visited[x] == 0)
            {
                if (dfs(x, adj, visited, path))
                    return true;
            }
            else if (path[x] == 1)
            {
                return true;
            }
        }
        path[s] = 0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
         vector<vector<int>> adj(numCourses);

        
        for (int i = 0; i < prerequisites.size(); i++)
        {
            int course = prerequisites[i][0];
            int prerequisite = prerequisites[i][1];

            adj[prerequisite].push_back(course);
        }

        vector<int> visited(numCourses, 0);
        vector<int> path(numCourses, 0);

        // Check for cycle
        for (int i = 0; i < numCourses; i++)
        {
            if (visited[i] == 0)
            {
                if (dfs(i, adj, visited, path))
                    return false;
            }
        }

        return true;
    }
};