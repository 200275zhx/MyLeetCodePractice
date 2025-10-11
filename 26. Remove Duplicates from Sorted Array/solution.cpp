#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int write = 0;
        for (size_t read = 1; read < nums.size(); ++read) {
            if (nums[write] != nums[read]) {
                nums[++write] = nums[read];
            }
        }
        return write + 1;
    }
};