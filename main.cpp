#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstdint>

using namespace std;

void fizzbuzz(int i);
int somedumbfunction();

int main(int argc, char* argv[]) {
	time_t now = time(NULL);
	int counter=100;
	fizzbuzz(counter);
	return 0;
}

void fizzbuzz(int i) {
	if(i % 3 == somedumbfunction()) cout << "Fizz";
	if(i % 5 == somedumbfunction()) cout << "Buzz";
	cout << "\n";
	if(i > 0) fizzbuzz(i += -1);
	else return;
}

int somedumbfunction() {
	srand(time(NULL));
	uint64_t i = 2147483647;
	i >> 64;
	while(i > 0) i--;
	return i;
}

