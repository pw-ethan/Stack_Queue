/*
 * main.cpp
 *
 *  Created on: May 14, 2017
 *      Author: pw-ethan
 * Description:
 *
 */
#include <iostream>
#include <vector>
#include <stack>

#include "MyStackWithGetMin.h"
#include "TwoStacksQueue.h"
#include "ReverseStack.h"
#include "CatDogQueue.h"
#include "SortStackByStack.h"
#include "Hanoi.h"
#include "MaxWindow.h"
#include "MaxTreeFromArray.h"

using namespace std;

int main() {

	vector<int> v = { 3, 4, 5, 1, 2 };

    Node* head = getMaxTree(v);
    printTree(head);

//	vector<int> nums = { 4, 3, 5, 4, 3, 3, 6, 7 };
//	vector<int> ret;
//	getMaxWindow(nums, ret, 3);
//	for(int num : ret){
//        cout << num << " ";
//	}
//	cout << endl;

// 用栈解决汉诺塔问题
//    string left = "left", mid = "mid", right = "right";
//	cout << "It will move " << hanoiRecurision(2, left, mid, right) << " steps." << endl;
//	cout << "It will move " << hanoiStack(2, left, mid, right) << " steps." << endl;

// 	用一个栈实现另一栈的排序
//	stack<int> stk;
//	for (int num : v) {
//		stk.push(num);
//	}
//	while (!stk.empty()) {
//		cout << stk.top() << " ";
//		stk.pop();
//	}
//	cout << endl;
//
//    for (int num : v) {
//		stk.push(num);
//	}
//	sortStack(stk);
//	while (!stk.empty()) {
//		cout << stk.top() << " ";
//		stk.pop();
//	}
//	cout << endl;

// 4.猫狗队列
//	Pet *dog1 = new Dog();
//	Pet *dog2 = new Dog();
//	Pet *cat1 = new Cat();
//	Pet *cat2 = new Cat();
//
//	CatDogQueue cdqueue;
//	cdqueue.add(dog1);
//	cdqueue.add(cat1);
//	cdqueue.add(dog2);
//	cdqueue.add(cat2);
//	while (!cdqueue.isDogQueueEmpty()) {
//		cout << cdqueue.pollDog()->getPetType() << endl;
//	}
//	while (!cdqueue.isEmpty()) {
//		cout << cdqueue.pollAll()->getPetType() << endl;
//	}

// 3.如何仅用递归函数和栈操作逆序一个栈
//	stack<int> stk;
//	for (int num : v) {
//		stk.push(num);
//	}
//	cout << "reverse : ";
//	reverseStack(stk);
//	while (!stk.empty()) {
//		cout << stk.top() << " ";
//		stk.pop();
//	}

// 2.由两个栈组成的队列
//	TwoStacksQueue mqueue;
//	for (int num : v) {
//		mqueue.add(num);
//	}
//	cout << mqueue.peek() << endl;
//	cout << mqueue.poll() << endl;
//	cout << mqueue.peek() << endl;
//
//	mqueue.add(6);
//	mqueue.add(7);
//
//	cout << mqueue.peek() << endl;
//	cout << mqueue.poll() << endl;
//	cout << mqueue.peek() << endl;

// 1.带有getmin功能的栈
//	MyStackWithGetMin mstack;
//	cout << "push" << endl;
//	for (int num : v) {
//		mstack.push(num);
//		cout << "current minimum number : " << mstack.getmin() << endl;
//	}
//
//	cout << "pop" << endl;
//	while (!mstack.empty()) {
//		cout << "current minimum number : " << mstack.getmin() << endl;
//		mstack.pop();
//	}

	return 0;
}
