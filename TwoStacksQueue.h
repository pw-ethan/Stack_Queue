/*
 * TwoStacksQueue.h
 *
 *  Created on: May 14, 2017
 *      Author: pw-ethan
 * Description: ������ջ��ɵĶ���
 *
 */

#ifndef TWOSTACKSQUEUE_H_
#define TWOSTACKSQUEUE_H_

#include <stack>

class TwoStacksQueue {
public:
	TwoStacksQueue() = default;
	void add(int val);
	int poll();
	int peek();

private:
	std::stack<int> stackPush;
	std::stack<int> stackPop;
};

#endif /* TWOSTACKSQUEUE_H_ */
