/*
 *  MaxWindow.h
 *
 *  Created on: May 18, 2017
 *      Author: pw-ethan
 * Description: 生成窗口最大值数组
 *              使用了双端队列deque
 *
 */

#ifndef MAXWINDOW_H
#define MAXWINDOW_H

#include <deque>
#include <vector>

void getMaxWindow(const std::vector<int> &nums, std::vector<int> &ret, int w);


#endif // MAXWINDOW_H
