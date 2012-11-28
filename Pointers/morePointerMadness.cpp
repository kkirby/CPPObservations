#import <stdio.h>

/**
 * In this example, I'm showing how you can overwrite the value of a variable
 * while leaking into the memory of another unknown area.
 */

int main(){
	// I use this is a placeholder.
	int * refChar;
	// This is my character.
	char baseChar = 'a';
	// Everything is normal.
	printf("\n The address of baseChar is %p and the value is %c",&baseChar,baseChar);
	printf("\n The address of refChar is %p and points to %p",&refChar,refChar);
	printf("\n");
	// Assign the address to the reference as an integer.
	refChar = (int*)&baseChar;
	/**
	 * Everything is normal, except that the int I just
	 * allocated is a bit defunked with random shit. That's
	 * because it's coming from random memory that is
	 * ahead of baseChar.
	 */
	printf("\n The address of baseChar is %p and the value is %c",&baseChar,baseChar);
	printf("\n The address of refChar is %p and points to %p and the value is %i and the value bitwise is %i\n",&refChar,refChar,*refChar,*refChar & 255);
	printf("\n");
	/**
	 * I'm now going to change the value of baseChar by
	 * changing the value of refChar, but I'm making sure
	 * I don't change the value of the unknown memory address,
	 * otherwise we would segfault, maybe, if you're unlucky.
	 */
	/**
	 * All I'm doing here is saying: take 99 and make sure all the bits fill
	 * up to the size of a char. Then erase all the old binary
	 * data that baseChar is using (>> 7 and << 7), then combine
	 * the two so that the new value overwites the old value.
	 */
	*refChar = (99 & 255) | ((*refChar >> 7) << 7);
	// Violia!
	printf("\n The address of baseChar is %p and the value is %c",&baseChar,baseChar);
	printf("\n The address of refChar is %p and points to %p and the value is %i and the value bitwise is %i\n",&refChar,refChar,*refChar,*refChar & 255);
}