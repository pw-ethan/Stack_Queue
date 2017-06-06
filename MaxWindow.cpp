/*
 *  MaxWindow.cpp
 *
 *  Created on: May 18, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "MaxWindow.h"

void getMaxWindow(const std::vector<int> &nums, std::vector<int> &ret, int w)
{
    if(nums.empty() || w < 1 || nums.size() < w){
        return;
    }
    std::deque<int> qmax;
    for(int i = 0; i < nums.size(); ++i){
        while(!qmax.empty() && nums[qmax.back()] <= nums[i]){
            qmax.pop_back();
        }
        qmax.push_back(i);
        if(qmax.front() == i - w){
            qmax.pop_front();
        }
        if(i >= w - 1){
            ret.push_back(nums[qmax.front()]);
        }
    }
}
