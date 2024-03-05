#include <iostream>
#include <vector>
#include <set>

class Solution
{
    public:
    bool containsDuplicate(std::vector<int>& nums)
    {
        std::set<int> myset;
        for (int elem : nums)
        {
            auto ret = myset.insert(elem);
            if (!ret.second)
            {
                return true;
            }
        }
        return false;
    }
};