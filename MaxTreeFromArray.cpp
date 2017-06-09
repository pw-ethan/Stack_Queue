/*
 * MaxTreeFromArray.cpp
 *
 *  Created on: May 19, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "MaxTreeFromArray.h"
#include <queue>
#include <iostream>
#include <limits>

using namespace std;

std::shared_ptr<Node> getMaxTree(std::vector<int> nums)
{
<<<<<<< HEAD
    std::vector<std::shared_ptr<Node>> nArr;
    for(std::vector<int>::size_type i = 0; i != nums.size(); ++i){
        std::shared_ptr<Node> tmp(new Node(nums[i]));
        nArr.push_back(tmp);
    }

    std::stack<std::shared_ptr<Node>> stk;
    std::unordered_map<std::shared_ptr<Node>, std::shared_ptr<Node>, HashNode> lBigMap;
    std::unordered_map<std::shared_ptr<Node>, std::shared_ptr<Node>, HashNode> rBigMap;

    for(std::vector<std::shared_ptr<Node>>::size_type i = 0; i != nArr.size(); ++i){
        std::shared_ptr<Node> curNode = nArr[i];
        while(!stk.empty() && stk.top()->value < curNode->value){
            popStackSetMap(stk, lBigMap);
        }
        stk.push(curNode);
    }
    while(!stk.empty()){
        popStackSetMap(stk, lBigMap);
    }

    for(int i = nArr.size() - 1; i != -1; --i){
        std::shared_ptr<Node> curNode = nArr[i];
        while(!stk.empty() && stk.top()->value < curNode->value){
            popStackSetMap(stk, rBigMap);
        }
        stk.push(curNode);
    }
    while(!stk.empty()){
        popStackSetMap(stk, rBigMap);
    }

    std::shared_ptr<Node> head = nullptr;
    for(std::vector<std::shared_ptr<Node>>::size_type i = 0; i != nArr.size(); ++i){
        std::shared_ptr<Node> curNode = nArr[i];
        std::shared_ptr<Node> left = lBigMap[curNode];
        std::shared_ptr<Node> right = rBigMap[curNode];
        if(left->value == INT_MAX && right->value == INT_MAX){
            head = curNode;
        }
        else if(left->value == INT_MAX){
            if(right->left == nullptr){
                right->left = curNode;
            }
            else{
                right->right = curNode;
            }
        }
        else if(right->value == INT_MAX){
            if(left->left == nullptr){
                left->left = curNode;
            }
            else{
                left->right = curNode;
            }
        }
        else{
            std::shared_ptr<Node> parent = left->value < right->value ? left : right;
            if(parent->left == nullptr){
                parent->left = curNode;
            }
            else{
                parent->right = curNode;
            }
        }
    }
    return head;
=======
	std::vector<Node *> nArr;
	for(int i = 0; i < nums.size(); ++i){
		Node* tmp = new Node(nums[i]);
		nArr.push_back(tmp);
	}

	for(auto p : nArr){
		std::cout << p->value << std::endl;
	}

	std::stack<Node *> stk;
	std::map<Node*, Node*, Cmp> lBigMap;
	std::map<Node*, Node*, Cmp> rBigMap;

	for(size_t i = 0; i != nArr.size(); ++i){
		Node* curNode = nArr[i];
		while(!stk.empty() && stk.top()->value < curNode->value){
			popStackSetMap(stk, lBigMap);
		}
		stk.push(curNode);
	}
	while(!stk.empty()){
		popStackSetMap(stk, lBigMap);
	}

	for(int i = nArr.size() - 1; i != -1; --i){
		Node* curNode = nArr[i];
		while(!stk.empty() && stk.top()->value < curNode->value){
			popStackSetMap(stk, rBigMap);
		}
		stk.push(curNode);
	}
	while(!stk.empty()){
		popStackSetMap(stk, rBigMap);
	}

	Node* head = NULL;
	for(int i = 0; i != nArr.size(); ++i){
		Node* curNode = nArr[i];
		Node* left = lBigMap[curNode];
		Node* right = rBigMap[curNode];
		if(left == NULL && right == NULL){
			head = curNode;
		}
		else if(left == NULL){
			if(right->left == NULL){
				right->left = curNode;
			}
			else{
				right->right = curNode;
			}
		}
		else if(right == NULL){
			if(left->left == NULL){
				left->left = curNode;
			}
			else{
				left->right = curNode;
			}
		}
		else{
			Node* parent = left->value < right->value ? left : right;
			if(parent->left == NULL){
				parent->left = curNode;
			}
			else{
				parent->right = curNode;
			}
		}
	}
	return head;
>>>>>>> b6f646b24ad0ba391c49391e7eb0198cc56fb771
}

void popStackSetMap(std::stack<std::shared_ptr<Node>> &stk, std::unordered_map<std::shared_ptr<Node> , std::shared_ptr<Node>, HashNode> &m)
{
<<<<<<< HEAD
    std::shared_ptr<Node> popNode = stk.top();
    stk.pop();
    if (stk.empty()) {
        m[popNode] = std::shared_ptr<Node>(new Node(INT_MAX)); // map's value can't be nullptr(why?), so I use INT_MAX replace it
    }
    else{
        m[popNode] = stk.top();
    }
=======
	Node* popNode = stk.top();
	stk.pop();
	cout << popNode->value << endl;
	if(stk.empty()){
		m[popNode] = NULL;
	}
	else{
		m[popNode] = stk.top();
	}
	std::cout << popNode->value << " : " << m[popNode]->value << std::endl;
>>>>>>> b6f646b24ad0ba391c49391e7eb0198cc56fb771
}

// print results layer by layer
void printTree(std::shared_ptr<Node> head)
{
<<<<<<< HEAD
    std::vector<std::shared_ptr<Node>> v;
    v.push_back(head);
    std::vector<std::shared_ptr<Node>>::size_type cur = 0;
    std::vector<std::shared_ptr<Node>>::size_type last = 1;
    while(cur != v.size()){
        last = v.size();
        while (cur < last) {
            std::cout << v[cur]->value << " ";
            if (v[cur]->left != nullptr) {
                v.push_back(v[cur]->left);
            }
            if (v[cur]->right != nullptr) {
                v.push_back(v[cur]->right);
            }
            ++cur;
        }
        std::cout << std::endl;
    }
=======
	std::queue<Node *> q;
	q.push(head);
	while(!q.empty()){
		Node* curNode = q.front();
		std::cout << curNode->value << std::endl;
		if(curNode->left != NULL){
			q.push(curNode->left);
		}
		if(curNode->right != NULL){
			q.push(curNode->right);
		}
		q.pop();
	}
>>>>>>> b6f646b24ad0ba391c49391e7eb0198cc56fb771
}
