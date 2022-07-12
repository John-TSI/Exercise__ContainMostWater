// https://leetcode.com/problems/container-with-most-water/

#include<iostream>
#include"../inc/solution.hpp"

int main()
{
	std::vector<int> vec{1,8,6,2,5,4,8,3,7};
	//std::vector<int> vec{1,1};
	Solution sol{};
	std::cout << sol.maxArea(vec);
	return 0;
}

