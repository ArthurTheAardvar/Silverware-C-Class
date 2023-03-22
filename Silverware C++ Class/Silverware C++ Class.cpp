#include <iostream>
using namespace std;

class SilverWare {
private:
	int type;
	bool isClean;

public:
	SilverWare();

	void printInfo();
	void use();
	void wash();

};

int main() {
	
	SilverWare type;
	type.printInfo();

	type.use();
	type.wash();
}

SilverWare::SilverWare() {
	isClean = true;
	type = rand() % 3;
}



void SilverWare::use() {
	isClean = false;
		
}

void SilverWare::wash() {
	isClean = true;
}

void SilverWare::printInfo() {
	cout << "Choose silverware to use" << endl;

	if (type == 0)
		cout << "Im a fork: " << endl;
	else if (type == 1)
		cout << "Im a spoon: " << endl;
	else if (type == 2)
		cout << "Im a knife: " << endl;

	isClean = true;
		cout << "I am clean" << endl;

	isClean = false;
		cout << "I am dirty" << endl;
		
		
		

}