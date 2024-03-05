#include <iostream>
#include <vector>
#include "Solution.hpp"

int main()
{
	std::vector<int> nums = {1, 2, 3, 1};
	Solution s1;
	std::cout << std::boolalpha << s1.containsDuplicate(nums);

	return 0;
}