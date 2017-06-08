#include "MaxRecSize.h"

#include <algorithm>

int getMaxRecSize(std::vector<std::vector<int>> m) {
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
int getMaxRecFromBottom(std::vector<int> height) {
    if (height.empty()) {
        return 0;
    }
    int maxArea = 0;

}
