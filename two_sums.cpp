#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> v;
        mp[nums[0]] = 0;
        for(int i=1; i<nums.size(); i++){
            int compliment = target-nums[i];
            if(mp.find(compliment) != mp.end()){
                v.push_back(mp[compliment]);
                v.push_back(i);
                return v;
            }
            else
                mp[nums[i]] = i;
        }
        return v;
    }
};
