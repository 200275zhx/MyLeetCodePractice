#include <vector>
using namespace std;

// Moore Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter{};
        int candidate{};

        for (int i{}; i < nums.size(); ++i) {
            if (counter == 0) {
                candidate = nums[i];
                ++counter;
                continue;
            }
            if (candidate == nums[i]) ++counter;
            else --counter;
        }

        return candidate;
    }
};