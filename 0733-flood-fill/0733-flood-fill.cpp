class Solution {
public:

    void dfs(vector<vector<int>>& image, int i, int j, int org, int color)
    {
        int n = image.size();
        int m = image[0].size();

        // boundary check + different color check
        if(i < 0 || j < 0 || i >= n || j >= m ||
           image[i][j] != org)
        {
            return;
        }

        image[i][j] = color;

        // up
        dfs(image, i - 1, j, org, color);

        // down
        dfs(image, i + 1, j, org, color);

        // right
        dfs(image, i, j + 1, org, color);

        // left
        dfs(image, i, j - 1, org, color);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                   int sr, int sc, int color)
    {
        int org = image[sr][sc];

        if(org == color)
        {
            return image;
        }

        dfs(image, sr, sc, org, color);

        return image;
    }
};