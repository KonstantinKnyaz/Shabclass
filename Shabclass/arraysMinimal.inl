#include <iostream>
#include "arraysMinimal.h"

using namespace std;

template <typename Type2, int len>
int WorkArrays<Type2, len>::getLength() {
	return len;
}

template <typename Type2, int len>
void WorkArrays<Type2, len>::minimum() {

	int min = this->arr[0];
	for (int i = 0; i < len; i++) {
		if (min > arr[i])
			min = arr[i];
	}

	cout << "Минимальный элемент: " << min << endl;
}