# include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target){
    vector<int> r;
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                r.push_back(i);
                r.push_back(j);
                break;
            }
        }
    }
    return r;
}
