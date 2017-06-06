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

using namespace std;

Node* getMaxTree(std::vector<int> nums)
{
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
}

void popStackSetMap(std::stack<Node *> &stk, std::map<Node*, Node*, Cmp> &m)
{
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
}

void printTree(Node* head)
{
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


}
