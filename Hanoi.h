/*
 * Hanoi.h
 *
 *  Created on: May 18, 2017
 *      Author: pw-ethan
 * Description: 用栈解决汉诺塔问题
 *
 */

#ifndef HANOI_H
#define HANOI_H

#include <string>
#include <stack>
#include <limits.h>

int hanoiRecurision(int num, const std::string &left, const std::string &mid, const std::string &right);
int processRecurision(int num, const std::string &left, const std::string &mid, const std::string &right, const std::string &from, const std::string &to);

enum Action{ No, LToM, MtoL, MToR, RToM};

int hanoiStack(int num, const std::string &left, const std::string mid, const std::string right);
int fStackTotStack(Action &record, Action preNoAct, Action nowAct, std::stack<int> &fStack, std::stack<int> &tStack, const std::string &from, const std::string &to);

#endif // HANOI_H
