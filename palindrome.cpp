#pragma once

#include<iostream>
using namespace std;

class palindrome {
public:
	palindrome(std::string &str); 
  //This function is being called by refrence. this means that when changes are made inside the function are actually reflected in actual parameters of the caller.
	void isPalindrome();
private:
	std::string strPal;
};

int main() {
	std::string input; //In c++, variables, and functions that are defined outside of the scope of the main class can be accessed by using the scope
					   //resolution operator(::). This also allows for the creation of functions that lie outside of the scope of any class.

	//get user input
	std::cout << "Enter a string with no punctuation or spaces: "; //C++ allows for operator overloading with the big examples being the << and >>
																   //operators as well as the index [] operator. In this case they are used for IO
																   //finding the character in a string at a certain index.
	std::cin >> input;

	//test user input
	palindrome test(input);
	test.isPalindrome();
}

//constructor to add the users input to the private member data without the user having direct access to it
palindrome::palindrome(std::string &str) {
	strPal = str;
}

//this function takes no input and instead uses the private data of the object that it is called on
void palindrome::isPalindrome() {
	bool isPal = true;
	int len = strPal.length();
	//iterate through the string by comparing the first and last characters and then incrementing and decrementing the 
	//two iterators respectively. If at any point there is a difference then they are not equal and the loop is ended and the 
	//program stops running.
	for (int i = 0; i < len; ++i) {
		if (strPal[i] != strPal[len-1]) {
			std::cout << strPal << " is not a palindrome" << std::endl;
			//if this is false the program will not print the true statement
			isPal = false;
			break;
		}
		//decrement the length iterator for the next cycle
		--len;
	}

	//if isPal is never changed then the string must be a palindrome and the true statement will print
	if (isPal == true) {
		std::cout << strPal << " is a palindrome" << std::endl;
	}
}

//Compilation
//C++ is compiled in 3 steps, preprocessing, compilation, and linking. Due to this, C++ is platform dependant and can function at a system 
//level. First, in preprocessing, the C++ code is translated into pure C++ code. Then in compilation, the pure C++ code is translated into assembly
//and then binary. Finally, the linker links all the object files and calls to external libraries together into one executable file.
