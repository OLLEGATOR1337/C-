#include <iostream>
#include <cassert>
#include <string>

int countOnes(std:: string str ="std::string_view str") {

	int count = 0;
	for (char i : str) {
		if (i == '1') {
			++count;
		}
	}
	return count;
}

void runTests() {
	assert(countOnes("001100") == 2);
	assert(countOnes("11111") == 5);
	assert(countOnes("000000") == 0);
	assert(countOnes("0") == 0);
	assert(countOnes("1000101") == 3);
	assert(countOnes("1") == 1);
}

int main() {
	int i = countOnes();
	std::cout << i;
	runTests();
	return 0;
}