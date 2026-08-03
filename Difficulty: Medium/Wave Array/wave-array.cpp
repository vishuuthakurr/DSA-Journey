
class Solution {
public:
    void sortInWave(std::vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i += 2) {
            if (i > 0 && arr[i] < arr[i - 1]) {
                swap(arr[i], arr[i - 1]);
            }
            if (i < n - 1 && arr[i] < arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
};