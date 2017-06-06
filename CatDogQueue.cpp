/*
 * CatDogQueue.cpp
 *
 *  Created on: May 15, 2017
 *      Author: pw-ethan
 * Description:
 *
 */

#include "CatDogQueue.h"

void CatDogQueue::add(Pet* pet) {
	if (pet->getPetType() == "dog") {
		dogQ.push(PetEnterQueue(pet, count++));
	} else if (pet->getPetType() == "cat") {
		catQ.push(PetEnterQueue(pet, count++));
	} else {
		throw "not dog or cat!";
	}
}

const Pet* CatDogQueue::pollAll() {
	if (!dogQ.empty() && !catQ.empty()) {
		if (dogQ.front().getTimestamp() < catQ.front().getTimestamp()) {
			const Pet *ret = dogQ.front().getPet();
			dogQ.pop();
			return ret;
		} else {
			const Pet *ret = catQ.front().getPet();
			catQ.pop();
			return ret;
		}
	} else if (!dogQ.empty()) {
		const Pet *ret = dogQ.front().getPet();
		dogQ.pop();
		return ret;
	} else if (!catQ.empty()) {
		const Pet *ret = catQ.front().getPet();
		catQ.pop();
		return ret;
	} else {
		throw "queue is empty!";
	}
}

const Pet* CatDogQueue::pollCat() {
	if (!catQ.empty()) {
		const Pet *ret = catQ.front().getPet();
		catQ.pop();
		return ret;
	} else {
		throw "cat queue is empty!";
	}
}

const Pet* CatDogQueue::pollDog() {
	if (!dogQ.empty()) {
		const Pet *ret = dogQ.front().getPet();
		dogQ.pop();
		return ret;
	} else {
		throw "dog queue is empty!";
	}
}

bool CatDogQueue::isEmpty() const {
	return dogQ.empty() && catQ.empty();
}

bool CatDogQueue::isCatQueueEmpty() const {
	return catQ.empty();
}

bool CatDogQueue::isDogQueueEmpty() const {
	return dogQ.empty();
}
