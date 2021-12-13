#pragma once
#include<iostream>
using namespace std;

class palindrome {
public:
	palindrome(std::string &str); //This function is being called by refrence. this means that when changes are made inside the function are actually reflected in actual parameters of the caller.
	void isPalindrome();
private:
	std::string strPal;
};

int main() {
	std::string input; //In c++, variables, and functions that are defined outside of the scope of the main class can be accessed by using the scope resolution operator(::).
	std::cout << "Enter a string with no punctuation or spaces: "; //C++ allows for operator overloading with the big examples being the << and >> as well as index [] operator.
	//Get user input and then test user input													   
	std::cin >> input;
	palindrome test(input);
	test.isPalindrome();
} 

palindrome::palindrome(std::string &str) { //Because there is no direct access to the private varable. We will use a constructor to access the private varable.
	strPal = str;
}
void palindrome::isPalindrome() { //this function takes no input and instead it will use the private data of the object that it is called on
	bool isPal = true;
	int len = strPal.length();
	//This will go throught the string and will compare the first and last characters. Then It will incrementing and decrementing the iterators. 
	//If there is a proint when the program does find a difference, the program stops running.
	for (int i = 0; i < len; ++i) {
		if (strPal[i] != strPal[len-1]) {
			std::cout << strPal << " is not a palindrome" << std::endl;
			isPal = false;//if this is false the program will not print the true statement
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
//C++ is compiled in 3 steps, preprocessing, compilation, and linking. 
//Due to this, C++ is platform dependant and can function at a system level. 
//The C++ code is translated into pure C++ code. Then in compilation, the pure C++ code is translated into assembly and then binary. Finally, the linker links all the object files and calls to external libraries together into one executable file.
