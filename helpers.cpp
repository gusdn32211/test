#include "headers/constants.h"
#include <math.h> 

int add(int x, int y) {
	return x + y;
}

int distanceFallen(int initialHeight, int time) {
	return initialHeight - (constants::gravity * pow(time, 2))/2;
}
