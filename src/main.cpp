#include <iostream>
#include <string>
#include <cstdlib>
#include <array>

#include "Token.hpp"

#include "main.hpp"

int main() {

	std::string expression;

	std::cout << "Test";

	return EXIT_SUCCESS;

}

void tokenizer(std::string expression) {

	const std::array<char, 10> numbers { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	const std::array<char, 7> operations { '+', '-', '*', '/', '^', '(', ')' };

	std::string substring;

	for (int i { 0 }; i < expression.length(); i++) {

		char c { expression[i] };

		if (c != ' ') {

			substring += c;

		} else {



		}

	}

}



