#include <iostream>

typedef const char * const constptr;

class MyClass {
    public:
        constptr * myArray;
        MyClass(constptr inputChar) {
			myArray = &inputChar;
			//*&*myArray = new char('h');
			
        }

        void get(constptr * retVal){
            retVal = myArray;
        }
};

int main(){
    char myString[] = "Hello";
    MyClass somethingNew(myString);
    constptr other = new char[4];
    somethingNew.get(&other);
    std::cout << other[0];
    return 0;
}

