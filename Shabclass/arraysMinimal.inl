#include <iostream>
#include "arraysMinimal.h"

using namespace std;

template <typename Type2>
int WorkArrays<Type2>::getLength() {
	return this->len;
}

template <typename Type2>
void WorkArrays<Type2>::minimum() {

	int min = this->arr[0];
	for (int i = 0; i < len; i++) {
		if (min > arr[i])
			min = arr[i];
	}

	cout << "Минимальный элемент: " << min << endl;
}