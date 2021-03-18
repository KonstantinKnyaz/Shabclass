#pragma once
#include <stdio.h>
#include <cassert>

template <class Type>
class WorkArrays {
private:
	int len;
	Type *arr;
public:
	WorkArrays() {
		this->len = 0;
		this->arr = nullptr;
	}

	WorkArrays(int len) {
		this->len = len;
		this->arr = new Type[len];
	}

	~WorkArrays() {
		delete[] this->arr;
	}

	Type& operator[](int index) {
		assert(index >= 0 && index < len);
		return arr[index];
	}
	
	void minimum();
	int getLength();
};

#include "arraysMinimal.inl"
