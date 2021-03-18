#pragma once
#include <stdio.h>
#include <cassert>

template <class Type, int len>
class WorkArrays {
private:
	Type *arr;
public:
	WorkArrays() {
		this->arr = new Type[length];
	}

	/*WorkArrays(int length) {
		this->len = length;
		this->arr = new Type[length];
	}*/

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
