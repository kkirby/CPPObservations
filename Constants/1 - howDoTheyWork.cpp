#import <iostream.h>

int main(){
	// c stands for constant
	// p stands for pointer
	// cInt means constant integer
	// cPInt means contant pointer integer
	
	const int cInt = 1;
	int const intC = 1;
	// You can't do this.
	// cInt = 2;
	// You can't do this either:
	// intC = 2;
	/**
	 * So what's the difference?
	 * In this instance, there isn't one. One
	 * constant is for reassignment of a
	 * pointers, another is for value reassignment.
	 */
	const int * cPInt = new int(1);
	// You can't do this:
	// *cPInt = 2;
	// You CAN do this:
	const int * cPInt2 = new int(2);
	cPInt = cPInt2;
	/**
	 * Why? Because the value stored at CPInt hasn't
	 * changed, only the address. According to the
	 * compiler, our const int cannot have its value
	 * changed, but changing the pointer's location
	 * is completely different.
	 */
	int * const pIntC = new int(1);
	// You CAN do this:
	*pIntC = 3;
	// You can't do this:
	// int * const pIntC2 = new int(2);
	// pIntC = pIntC2;
	/**
	 * Here, the compiler sees the const after the
	 * pointer declaration. This means that the
	 * address of the pointer cannot be changed,
	 * but the value is totally up to being changed.
	 */
	const int * const cIntPC = new int(1);
	// You can't do this:
	// *cIntPC = 2;
	// You can't do this either:
	// int * pIntC2 = new int(2);
	// cIntPC = pIntC2;
	/**
	 * Neither of those two are valid. We cannot change
	 * the value stores at the memory address, nor can
	 * we change the memory address.
	 */
}