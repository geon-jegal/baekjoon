#include<iostream>
#include <cmath>

using namespace std;

int main(void) {
	
	int n;

	cin >> n;

	cout << pow(pow(2, n) + 1, 2);

	return 0;
} 
/*
*
* 
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n;
	int x = 2;

	cin >> n;

	while(n--) {
		x += (x - 1);
	}

	x *= x;

	cout << x << endl;

	return 0;
}
 */