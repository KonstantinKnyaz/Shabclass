#include <iostream>
#include <clocale>
#include <string>
#include <time.h>
#include "arraysMinimal.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time_t(NULL));

	WorkArrays<int> int_arr(10);
 	WorkArrays<float> float_arr(10);
	WorkArrays<long long> long_arr(10);

	for(int i = 0; i < int_arr.getLength(); i++){
		int_arr[i] = rand() % 100;
		float_arr[i] = rand() % 100;
		long_arr[i] = rand() % 100;
	}

	int_arr.minimum();
	float_arr.minimum();
	long_arr.minimum();

	return 0;
}