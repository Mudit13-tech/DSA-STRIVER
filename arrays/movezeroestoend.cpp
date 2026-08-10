// BRUTE FORCE APPROACH
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        vector<int> temp;
        for (int i=0;i<n;i++) {
            if (nums[i]!=0) {
                temp.emplace_back(nums[i]);
            }
            else {
                count += 1;
            }
        }
        for (int i=0;i<count;i++) {
            temp.emplace_back(0);
        }
        nums = temp;

       }
};

//OPTIMAL SOLUTION 