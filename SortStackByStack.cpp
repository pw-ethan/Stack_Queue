/*
 * SortStackByStack.cpp
 *
 *  Created on: May 15, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "SortStackByStack.h"

void sortStack(std::stack<int>& stk) {
	std::stack<int> help;
	while (!stk.empty()) {
		int val = stk.top();
		stk.pop();
		while(!help.empty() && val > help.top()){
            stk.push(help.top());
            help.pop();
		}
		help.push(val);
	}

	while (!help.empty()) {
		stk.push(help.top());
		help.pop();
	}
}
