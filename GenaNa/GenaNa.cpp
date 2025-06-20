#include <iostream>
#include <string>


void game() {

	int a = 1 + rand() % 3;
	int b;


	for (int c = 0; c < 3;) {

		int a = 1 + rand() % 3;
		std::cout << a << std::endl;
		std::cin >> b;

		if (a == 2 && b == 1 || a == 3 && b == 2 || a == 1 && b == 3) {
			std::cout << "win\n";
			c++;

		}
		else if (a == b) {
			std::cout << "draw\n";


		}
		else {

			std::cout << "lose\n";

		}

	}



}



int main() {


	srand(time(0));
	std::string b;
	std::string bot[3]{ "rock", "scissors", "paper" };
	int c = 0;
	while (c < 2) {
	 int v = rand() % 3;
	 std::cout << bot[v] << std::endl;
	 std::cin >> b;


		if (bot[v] == bot[0] && b == bot[1] ||
			bot[v] == bot[1] && b == bot[2] ||
			bot[v] == bot[2] && b == bot[0]) {
			std::cout << "lose\n";
		}
		else if (bot[v] == b) {
			std::cout << "draw\n";

		}
		else {
			std::cout << "win\n";


		}
		c++;

	}
}


