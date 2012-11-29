/**
 * @author Kyle Kirby
 * @date Nov 24, 2012
 *
 * In this code, I'm trying to prove to myself the importance of
 * passing constant references.
 * I tried to demonstrate how a pointer can be lost forever.
 *
 * I'm not 100% sure if I got the idea of why constants are important
 * or not, but it made for a very interesting result regardless.
 */

#include <iostream>

int main(){
	// For some reason, on my Mac, I need to initalize my first variable here so that
	// all others occur in order in memory.
	int * c = new int(2);
	// Initalize a new pointer.
	int *b = new int(2);
	// Initalize a fuck up pointer
	int * z = new int(3);
	// Verify the value is actually 1.
	std::cout << *b << std::endl;
	// Verify the address
	std::cout << b << std::endl;
	// Mess some shit up.
	*&b = z;
	// What's this? The value has changed!
	std::cout << *b << std::endl;
	// Ohhhmeeegeerdd! The address has too! FFUUU
	std::cout << b << std::endl;
	/**
	 * But wait! I can get it back because I know that
	 * between the changes, only one variable of int type
	 * have been initialized!
	 */
	// Oh b! I knew you wouldn't leave me! Here is your address!
	std::cout << (int*)(b - sizeof(int)) << std::endl;
	// And your value! There you are!
	std::cout << *(int*)(b - sizeof(int)) << std::endl;
}