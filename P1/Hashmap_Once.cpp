class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> ans(2, -1);
		unordered_map <int, int> hashmap;
		for (int i = 0; i < nums.size(); i++)
		{
			hashmap.insert(map<int, int>::value_type(nums[i], i));
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (hashmap.count(target - nums[i]) && hashmap[target - nums[i] != i)
			{
				b[0] = i;
				b[1] = a[target - nums[i]];
				break;
			}
		}
		return ans;
	}
};
