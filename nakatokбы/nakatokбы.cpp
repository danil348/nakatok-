#include <iostream>
#include "entity.h"
#include <vector>

using namespace std;

int main()
{
	vector<fish*> items;
	srand(time(NULL));
	for (int i = 0; i < 15 + rand() % 5; i++) {
		int q = rand() % 2;
		if (q == 0) {
			items.push_back(new caras);
		}
		else if (q == 1) {
			items.push_back(new okyn);
		}
	}

	for (fish* item : items) {
		fish*& foo = item;
		foo->feed(12);
	}

}