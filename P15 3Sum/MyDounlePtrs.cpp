class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int first = 0; first < len-2; first ++){
            if (first > 0 && nums[first] == nums[first - 1]) {
                continue;
            }
            int third = len - 1;
            int second = first + 1;
            int target = -nums[first];
            while(second<third){
                if (second > first + 1 && nums[second] == nums[second - 1]) {
                    second++;
                    continue;
                }
                if (third < len - 1 && nums[third] == nums[third+1]) {
                    third--;
                    continue;
                }
                if(nums[third]+nums[second]>target){
                    third--;
                }else if(nums[third]+nums[second]<target){
                    second++;
                }else{
                    ans.push_back({nums[first], nums[second], nums[third]});
                    second++;
                }
            }

            
        }
        return ans;
    }
};
