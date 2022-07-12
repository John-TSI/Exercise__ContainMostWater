#include<cmath>
#include<algorithm>
#include"../inc/solution.hpp"


int Solution::maxArea(std::vector<int>& height)
{
    std::vector<int>::iterator left{height.begin()}, right{height.end()-1};
    int maxA{0};
    while(left != right)
    {
        int currA = std::abs( (left - right) * std::min(*left, *right) );
        if(maxA < currA){ maxA = currA; }
        (*left <= *right) ? ++left : --right;
    } 
    return maxA;
}