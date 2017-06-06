/*
 * MyStackWithGetMin.h
 *
 *  Created on: May 14, 2017
 *      Author: pw-ethan
 * Description: 带有getMin功能的栈
 *
 */

#ifndef MYSTACKWITHGETMIN_H_
#define MYSTACKWITHGETMIN_H_

#include <stack>

class MyStackWithGetMin {
public:
	MyStackWithGetMin() = default;

	void push(int newNum);
	int pop();
	int getmin() const;
	bool empty() const;

private:
	std::stack<int> stackData;
	std::stack<int> stackMin;
};

#endif /* MYSTACKWITHGETMIN_H_ */
