#include <iostream>
#include <string>
#include <vector>

using namespace std;

void start();


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



void gamestone() {


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

			start();
		}
		c++;

	}
}


void start() {
	std::cout << "ti kakal segodnia?\n";

	string a;

	std::cin >> a;

	if (a == "yes") {

		std::cout << "MOLODEC!\n";
		game();
	}
	else {

		std::cout << "DURAK!\n";
		gamestone();

	}
}

//https://docs.google.com/document/d/1om947K__I2kWmfEZ1dXwYfzWbCecrz0MVUEBZojgfFA/edit?tab=t.0

void foo()
{
int humbers[5];
vector<int> masive;
vector<string> sddwed;

masive.push_back(5);
masive.push_back(2);
//masive.pop_back();
int f = masive.back();
sddwed.push_back("gdfgf");
masive[1];

int g = masive[1];
}



int main() {

	//srand(time(0));

	//start();
//	char x[4]{'t','e','s', 't'};

	int humbers [5]{ 2,-4,7,9,-6 };
	
	

		bool flag = true;
	for (int i = 1; i < 5; i++){
	{

	//	if (humbers[i] < 0) {
		//	std::cout << humbers[i];
		flag = true;
		for (int j = 0; j < 5 - i; j++)
			if (humbers[j] < humbers[j + 1]) {
				int tmp = humbers[j];
				humbers[j] = humbers[j + 1];
				humbers[j + 1] = tmp;
				flag = false;
			}
		}
	if (flag) {
		break;
	}

		

	}
	int f = 0;
	foo();
}