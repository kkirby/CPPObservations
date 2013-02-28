/**
 * @author Kyle Kirby
 * @date Nov 30, 2012
 *
 * Here I'm showing how arrays are just pointers
 * with a predefined amount of memory locations.
 */

#include <iostream>

int main(){
	int myArrayOfInts[] = {1,2,3,4};
	/**
	 * If we print out the value of our array, we get
	 * a memory address becasue it's a pointer
	 */
	std::cout << myArrayOfInts << std::endl;
	/**
	 * All the elements in the array
	 * are stored in memory blocks sequentially
	 * and they are all the size of an integer.
	 *
	 *
	 * This will give us the first item in the array,
	 * since the first address points to the first
	 * item in the array.
	 */
	std::cout << *myArrayOfInts << std::endl;
	// This will get the second item:
	std::cout << *(myArrayOfInts+1) << std::endl;
	// The memory address of the second item is:
	std::cout << myArrayOfInts+1 << std::endl;
	// Exactly 4 bytes off from the first item.
}