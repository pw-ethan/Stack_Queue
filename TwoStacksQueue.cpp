/*
 * TwoStacksQueue.cpp
 *
 *  Created on: May 14, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "TwoStacksQueue.h"

void TwoStacksQueue::add(int val) {
	stackPush.push(val);
}

int TwoStacksQueue::poll() {
	if (stackPush.empty() && stackPop.empty()) {
		throw "queue is empty!";
	} else if (stackPop.empty()) {
		while (!stackPush.empty()) {
			stackPop.push(stackPush.top());
			stackPush.pop();
		}
	}
	int ret = stackPop.top();
	stackPop.pop();
	return ret;
}

int TwoStacksQueue::peek() {
	if (stackPush.empty() && stackPop.empty()) {
		throw "queue is empty!";
	} else if (stackPop.empty()) {
		while (!stackPush.empty()) {
			stackPop.push(stackPush.top());
			stackPush.pop();
		}
	}
	return stackPop.top();
}
