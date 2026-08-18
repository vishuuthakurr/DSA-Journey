
class Solution {
  public:

      void fun(int x, int y, vector<vector<int>>& maze,
               vector<vector<int>>& visited,
               vector<string>& ans, string path) {

          int n = maze.size();
          if (x == n - 1 && y == n - 1) {
              ans.push_back(path);
              return;
          }

          visited[x][y] = 1;
          if (x + 1 < n && maze[x + 1][y] == 1 && !visited[x + 1][y]) {
              fun(x + 1, y, maze, visited, ans, path + 'D');
          }
          if (y - 1 >= 0 && maze[x][y - 1] == 1 && !visited[x][y - 1]) {
              fun(x, y - 1, maze, visited, ans, path + 'L');
          }
          if (y + 1 < n && maze[x][y + 1] == 1 && !visited[x][y + 1]) {
              fun(x, y + 1, maze, visited, ans, path + 'R');
          }
          if (x - 1 >= 0 && maze[x - 1][y] == 1 && !visited[x - 1][y]) {
              fun(x - 1, y, maze, visited, ans, path + 'U');
          }

          visited[x][y] = 0;
      }

      vector<string> ratInMaze(vector<vector<int>>& maze) {

          int n = maze.size();

          vector<string> ans;
          if (maze[0][0] == 0)
              return ans;

          vector<vector<int>> visited(n, vector<int>(n, 0));

          fun(0, 0, maze, visited, ans, "");

          sort(ans.begin(), ans.end());

          return ans;
      }
  };