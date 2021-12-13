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
