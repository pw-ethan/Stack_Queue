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
<<<<<<< HEAD

// 8. get the MaxTree of array
//    shared_ptr<Node> head = getMaxTree(v);
//    printTree(head);
=======
	Node* head = getMaxTree(v);
	printTree(head);
>>>>>>> b6f646b24ad0ba391c49391e7eb0198cc56fb771

// 7. get a window maximum value array
//	vector<int> nums = { 4, 3, 5, 4, 3, 3, 6, 7 };
//	vector<int> ret;
//	getMaxWindow(nums, ret, 3);
//	for(int num : ret){
//        cout << num << " ";
//	}
//	cout << endl;

// 6. the solution of Hanoi using stack
//    string left = "left", mid = "mid", right = "right";
//	cout << "It will move " << hanoiRecurision(2, left, mid, right) << " steps." << endl;
//	cout << "It will move " << hanoiStack(2, left, mid, right) << " steps." << endl;

// 5. sort a stack using another stack
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

// 4. cat & dog queue
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

// 3. reverse a stack only with recursive functions and stack operations
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

// 2. a queue that is implemented by two stacks
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

// 1. a stack with getmin()
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
