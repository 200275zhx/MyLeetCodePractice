#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mcur = m - 1;
        int ncur = n - 1;
        int mncur = m + n - 1;

        while (ncur >= 0) {
            if (mcur >= 0 && nums1[mcur] >= nums2[ncur]) {
                nums1[mncur--] = nums1[mcur--];
            } else {
                nums1[mncur--] = nums2[ncur--];
            }
        }
    }
};