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
#include <memory>
#include <unordered_map>
#include <functional>


struct Node
{
    int value;
    std::shared_ptr<Node> left, right;
    Node(int val = 0) : value(val), left(nullptr), right(nullptr) { }
};

struct HashNode
{
    int operator() (const std::shared_ptr<Node> &a) const
    {
        return std::hash<int>()(a->value);
    }
};

std::shared_ptr<Node> getMaxTree(std::vector<int> nums);
void popStackSetMap(std::stack<std::shared_ptr<Node>> &stk, std::unordered_map<std::shared_ptr<Node> , std::shared_ptr<Node>, HashNode> &m);
void printTree(std::shared_ptr<Node> head);

#endif // MAXTREEFROMARRAY_H
