#include <iostream>
#include <iomanip>
#include <string>

/**
 * Print a string as hexadecimal values.
 *
 * */ 
void printToHex(std::string s)
{
	std::cout << "printToHex() for " << s << ": ";
	for(size_t i = 0; i < s.size(); i++) {
		std::cout << std::hex << std::setfill('0') << std::setw(2) << (int)s[i];
	}
	std::cout << '\n';
}

/**
 *
 * return a hex string representation of the value of an integer
 *
 * */ 
std::string intToHexString1(int num)
{
	std::stringstream ss;
	ss << std::hex << num;
	return ss.str();
}

/**
 * Convert an int to a hexadecimal string, using arithmetic.
 *
 * */
std::string intToHexString2(int num)
{
	const char hexChars[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
	std::string result;
	while (num) {
		char tmp = hexChars[num % 16];
		result.insert(result.begin(), tmp);
		num /= 16;
	}
	return result;
}

int main()
{
	int num;
	std::string str;
	std::cout << "Enter integer: ";
	std::cin >> num;
	std::cout << "Enter a string: ";
	std::cin >> str;
	printToHex(str);
	std::cout << "result 1: " << intToHexString1(num) << '\n';
	std::cout << "result 2: " << intToHexString2(num) << '\n';
	return 0;
}
