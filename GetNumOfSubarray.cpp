#include "GetNumOfSubarray.h"

#include <deque>


int getNumOfSubarray(std::vector<int> arr, int num) {
    if(arr.empty()) {
        return 0;
    }
    std::deque<int> qmin;
    std::deque<int> qmax;
    int i = 0, j = 0;
    int ret = 0;
    while (i < arr.size()) {
        while (j < arr.size()) {
            while (!qmin.empty() && arr[qmin.back()] >= arr[j]) {
                qmin.pop_back();
            }
            qmin.push_back(j);
            while (!qmax.empty() && arr[qmax.back()] <= arr[j]) {
                qmax.pop_back();
            }
            qmax.push_back(j);
            if(arr[qmax.front()] - arr[qmin.front()] > num) {
                break;
            }
            ++j;
        }
        if(qmax.front() == i) {
            qmax.pop_front();
        }
        if(qmin.front() == i) {
            qmin.pop_front();
        }
        ret += j - i;
        ++i;
    }
    return ret;
}
