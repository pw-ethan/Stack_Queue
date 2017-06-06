/*
 * MyStackWithGetMin.cpp
 *
 *  Created on: May 14, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "MyStackWithGetMin.h"

// 方案一
//void MyStackWithGetMin::push(int newNum) {
//	if (stackMin.empty() || newNum <= stackMin.top()) {
//		stackMin.push(newNum);
//	}
//	stackData.push(newNum);
//}
//
//int MyStackWithGetMin::pop() {
//	if (stackData.empty()) {
//		throw "stack is empty!";
//	}
//	int ret = stackData.top();
//	if (ret == stackMin.top()) {
//		stackMin.pop();
//	}
//	stackData.pop();
//	return ret;
//}

// 方案二
void MyStackWithGetMin::push(int newNum) {
	if (stackMin.empty() || newNum <= stackMin.top()) {
		stackMin.push(newNum);
	} else {
		stackMin.push(stackMin.top());
	}
	stackData.push(newNum);
}

int MyStackWithGetMin::pop() {
	if (stackData.empty()) {
		throw "stack is empty!";
	}
	int ret = stackData.top();
	stackMin.pop();
	stackData.pop();
	return ret;
}

int MyStackWithGetMin::getmin() const {
	if (stackMin.empty()) {
		throw "stack is empty!";
	}
	return stackMin.top();
}

bool MyStackWithGetMin::empty() const {
	return stackData.empty();
}
