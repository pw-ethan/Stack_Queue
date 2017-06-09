#include "MaxRecSize.h"

#include <algorithm>
#include <stack>


int getMaxRecSize(const std::vector<std::vector<int>> &m) {
    if (m.empty() || m[0].empty()) {
        return 0;
    }
    int maxArea = 0;
    std::vector<int> height(m[0].size());
    for(std::vector<std::vector<int>>::size_type i = 0; i != m.size(); ++i) {
        for(std::vector<int>::size_type j = 0; j != m[i].size(); ++j) {
            height[j] = m[i][j] == 0 ? 0 : height[j] + 1;
        }
        maxArea = std::max(getMaxRecFromBottom(height), maxArea);
    }
    return maxArea;
}
int getMaxRecFromBottom(const std::vector<int> &height) {
    if (height.empty()) {
        return 0;
    }
    int maxArea = 0;
    std::stack<int> stk;
    for(std::vector<int>::size_type i = 0; i < height.size(); ++i) {
        while(!stk.empty() && height[i] <= height[stk.top()]) {
            int j = stk.top();
            stk.pop();
            int k = stk.empty() ? -1 : stk.top();
            int curArea = (i - k - 1) * height[j];
            maxArea = std::max(maxArea, curArea);
        }
        stk.push(i);
    }
    while(!stk.empty()) {
        int j = stk.top();
        stk.pop();
        int k = stk.empty() ? -1 : stk.top();
        int curArea = (height.size() - k - 1) * height[j];
        maxArea = std::max(maxArea, curArea);
    }
    return maxArea;
}
