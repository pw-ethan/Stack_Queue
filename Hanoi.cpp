/*
 * Hanoi.cpp
 *
 *  Created on: May 18, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "Hanoi.h"

#include <iostream>

int hanoiRecurision(int num, const std::string &left, const std::string &mid, const std::string &right)
{
    if(num < 1){
        return 0;
    }
    return processRecurision(num, left, mid, right, left, right);
}
int processRecurision(int num, const std::string &left, const std::string &mid, const std::string &right, const std::string &from, const std::string &to)
{
    if(1 == num){
        if(from == mid || to == mid){
            std::cout << "Move 1 from " + from + " to " + to << std::endl;
            return 1;
        }else{
            std::cout << "Move 1 from " + from + " to " + mid << std::endl;
            std::cout << "Move 1 from " + mid + " to " + to << std::endl;
            return 2;
        }
    }
    if(from == mid || to == mid){
        std::string another = (from == left || to == left) ? right : left;
        int part1 = processRecurision(num - 1, left, mid, right, from, another);
        std::cout << "Move " << num << " from " + from + " to " + to << std::endl;
        int part3 = processRecurision(num - 1, left, mid, right, another, to);
        return part1 + 1 + part3;
    }
    else{
        int part1 = processRecurision(num - 1, left, mid, right, from, to);
        std::cout << "Move " << num << " from " + from + " to " + mid << std::endl;
        int part3 = processRecurision(num - 1, left, mid, right, to, from);
        std::cout << "Move " << num << " from " + mid + " to " + to << std::endl;
        int part5 = processRecurision(num - 1, left, mid, right, from, to);
        return part1 + part3 + part5 + 2;
    }
}

int hanoiStack(int num, const std::string &left, const std::string mid, const std::string right)
{
    std::stack<int> LS, MS, RS;
    LS.push(INT_MAX);
    MS.push(INT_MAX);
    RS.push(INT_MAX);
    for(int i = num; i > 0; --i){
        LS.push(i);
    }
    Action record = No;
    int step = 0;
    while(RS.size() != num + 1){
        step += fStackTotStack(record, MtoL, LToM, LS, MS, left, mid);
        step += fStackTotStack(record, LToM, MtoL, MS, LS, mid, left);
        step += fStackTotStack(record, RToM, MToR, MS, RS, mid, right);
        step += fStackTotStack(record, MToR, RToM, RS, MS, right, mid);
    }
    return step;
}
int fStackTotStack(Action &record, Action preNoAct, Action nowAct, std::stack<int> &fStack, std::stack<int> &tStack, const std::string &from, const std::string &to)
{
    if(record != preNoAct && fStack.top() < tStack.top()){
        tStack.push(fStack.top());
        fStack.pop();
        std::cout << "Move " <<  tStack.top() << " from " + from + " to " + to << std::endl;
        record = nowAct;
        return 1;
    }
    return 0;
}
