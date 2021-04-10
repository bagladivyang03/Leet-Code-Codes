class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       std::unordered_map<int, int> numMap;
    vector<int> result;
    for(int i=0; i<nums.size(); ++i)
    {
        int num = target - nums[i];
        std::unordered_map<int, int>::iterator it = numMap.find(num);
        if(it != numMap.end())
        {
            result.push_back(i);
            result.push_back(it->second);
            return result;
        }
        numMap.insert(pair<int, int> (nums[i], i));
    }
    return result;
    }
};