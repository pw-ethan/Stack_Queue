/*
 * MaxTreeFromArray.h
 *
 *  Created on: May 19, 2017
 *      Author: pw-ethan
 * Description: 构造数组的MaxTree
 *
 */

#ifndef MAXTREEFROMARRAY_H
#define MAXTREEFROMARRAY_H

#include <vector>
#include <stack>
#include <map>


struct Node
{
    int value;
    Node *left;
    Node *right;
    Node(int val) : value(val), left(NULL), right(NULL) { }
};

struct Cmp
{
    bool operator()(Node* left, Node* right)
    {
        return left->value < right->value;
    }

};

Node* getMaxTree(std::vector<int> nums);
void popStackSetMap(std::stack<Node *> &stk, std::map<Node*, Node*, Cmp> &m);
void printTree(Node* head);

#endif // MAXTREEFROMARRAY_H
