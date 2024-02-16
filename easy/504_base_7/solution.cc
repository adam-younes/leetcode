#include <iostream>
#include <string>

// Given an integer num, return a string of its base 7 representation.
//

std::string solution(int num);

int main(void) {
	std::cout << solution(100) << std::endl;
	std::cout << solution(-10) << std::endl;
}

std::string solution(int num) {
	if(!num) return "0";
	int sign = (num < 0) ? -1 : 1;
	num *= sign;
	std::string output = "";
	while(num) {
		output = std::to_string(num % 7) + output;
		num /= 7;
	}
	return ((sign < 0) ? "-" : "") + output;
}
