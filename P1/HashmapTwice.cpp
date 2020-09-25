class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ans(2, -1);
		unordered_map <int, int> hashmap;
		for (int i = 0; i < nums.size(); i++)
		{
			if (hashmap.count(target - nums[i]))
			{
				ans[0] = hashmap[target - nums[i]];
				ans[1] = i;
				break;
			}
			hashmap[nums[i]] = i;
		}
		return ans;
	}
};
