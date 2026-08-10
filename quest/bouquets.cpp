class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int s = 1;
        int e = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            int count = 0;
            int bouquet = 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) {
                    count++;
                    if (count == k) {
                        bouquet++;
                        count = 0;
                    }
                else {
                    count = 0;
                    }
                }  
            }

            if (bouquet >= m) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }
        return ans;
    }
};