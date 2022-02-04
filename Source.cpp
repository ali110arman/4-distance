#include <iostream>
#include <conio.h>
using namespace std;
void main() {
	int x1, x2, y1, y2;
	float  lengh;
		cout << "inter x1:\n";
		cin >> x1;
		cout << "inter y1:\n";
		cin >> y1;
		cout << "inter x2:\n";
		cin >> x2;
		cout << "inter y2:\n";
		cin >> y2;
		lengh = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << "the distance beetwin your point is:" <<lengh;
	}