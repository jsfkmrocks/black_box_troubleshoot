#include <iostream> 
#include "magic.h"
using namespace std;

int main (void)
{
	int x, y;

	cout << "Enter X: ";
	cin >> x;
	cout << "Enter Y: ";
	cin >> y;

	cout << "Result: " << magic(x, y) << endl;

	return 0;

}

		
