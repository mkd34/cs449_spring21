/* author: Martha Dixon
* This is an exercise for CS449 spring 2021, no unauthorized use is allowed
*/

/*
* This program uses an array to count how many bytes a float variable is in size.
* You can declare a pointer to the beginning of the array and to the beginning of the 1st element (aka the end of 0th element) and subtract those two pointers.  We use floatArray + 1 instead of *(floatArray + 1). because we intend to use the ADDRESS of these elements, and are not looking for the value which these elements are pointing to.

* Basically, we are taking where a single float starts and subtracting where that float ends in order to measure its length.
*/

/*
* This example also shows how you might cast a variable type to a named variable.
*/

#include <stdio.h>
int floatSize() {
	float floatArray[10];	// the length of the array is arbitrary, since we only really care about utilizing the first element
	float * floatPtr1;
	float * floatPtr2;
	
	floatPtr1 = floatArray;
	floatPtr2 = floatArray + 1; // we are NOT using floatArray[1] or *(floatArray + 1), because we would end up getting the value at that index when we want the addresses.
	
	int start = floatPtr1;
	int end = floatPtr2; 	
	return end - start;
}


int main() {
	printf("A float should be 4 bytes in size.\n");
	int float_size = (int)floatSize();
	printf("We calculated that a float is %d bytes in size.\n", float_size);
	return 0;
}
