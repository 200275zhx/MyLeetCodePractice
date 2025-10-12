#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return n;
        int write = 2;

        for (int read = 2; read < n; ++read) {
            if (nums[write-2] != nums[read]) {
                nums[write++] = nums[read];
            }
        }
        return write;
    }
};