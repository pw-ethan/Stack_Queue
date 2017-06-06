/*
 * ReverseStack.cpp
 *
 *  Created on: May 15, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "ReverseStack.h"

int getAndRemoveLastElement(std::stack<int>& stk) {
	int ret = stk.top();
	stk.pop();
	if (stk.empty()) {
		return ret;
	} else {
		int last = getAndRemoveLastElement(stk);
		stk.push(ret);
		return last;
	}
}

void reverseStack(std::stack<int>& stk) {
	if (stk.empty()) {
		return;
	}
	int last = getAndRemoveLastElement(stk);
	reverseStack(stk);
	stk.push(last);
}

