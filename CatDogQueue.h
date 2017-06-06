/*
 * CatDogQueue.h
 *
 *  Created on: May 15, 2017
 *      Author: pw-ethan
 * Description: √®π∑∂”¡–
 *
 */

#ifndef CATDOGQUEUE_H_
#define CATDOGQUEUE_H_

#include <string>
#include <queue>

class Pet {
private:
	std::string type;
public:
	Pet(std::string t) :
			type(t) {
	}
	std::string getPetType() const {
		return type;
	}
};

class Dog: public Pet {
public:
	Dog() :
			Pet("dog") {
	}
};

class Cat: public Pet {
public:
	Cat() :
			Pet("cat") {
	}
};

class PetEnterQueue {
private:
	Pet *pet;
	long timestamp;
public:
	PetEnterQueue(Pet* p, long ts) :
			pet(p), timestamp(ts) {
	}

	const Pet* getPet() {
		return pet;
	}

	long getTimestamp() const {
		return timestamp;
	}

	std::string getPetType() const {
		return pet->getPetType();
	}
};

class CatDogQueue {
private:
	std::queue<PetEnterQueue> dogQ;
	std::queue<PetEnterQueue> catQ;
	long count;
public:
	CatDogQueue() :
			count(0) {
	}

	void add(Pet* pet);
	const Pet* pollAll();
	const Pet* pollCat();
	const Pet* pollDog();
	bool isEmpty() const;
	bool isCatQueueEmpty() const;
	bool isDogQueueEmpty() const;

};

#endif /* CATDOGQUEUE_H_ */
