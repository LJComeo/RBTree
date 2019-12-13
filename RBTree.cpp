#include <iostream>
#include "RBTree.h"
using namespace std;

int main()
{
	ljc::RBTree<int> lbt;

	lbt.insert(2);
	lbt.insert(5);
	lbt.insert(3);
	lbt.insert(7);
	lbt.insert(6);
	lbt.insert(13);
	lbt.insert(34);
	lbt.insert(98);
	lbt.insert(4);
	lbt.insert(8);
	lbt.insert(10);

	lbt.test();
	return 0;
}