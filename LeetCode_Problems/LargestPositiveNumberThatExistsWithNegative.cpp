// problem link
// https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/description/?envType=daily-question&envId=2024-05-02

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0,j = nums.size()-1;

        while(i < j){
            if(nums[j] + nums[i] == 0){
                return nums[j];
            }else if(nums[j] + nums[i] > 0){
                j--;
            }else{
                i++;
            }
        }

        return -1;
    }
};
