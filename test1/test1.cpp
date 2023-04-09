#define _USE_MATH_DEFINES 

#include <iostream>  
#include <cmath>
#include <Windows.h>

using namespace std;

float fact(int i) {
	if (i > 1) return i * fact(i - 1);
	else return 1;
}

int main()
{
	SetConsoleOutputCP(1251);
	const float E = 0.0004;
	float x, temp, sum = 0;
	int iterations = 0;
	cin >> x;
	for (int i = 1;;i++) {
		temp = (i + pow(x, i) * cos(x + i)) / fact(i + 5);
		if (temp < E) {
			break;
		}
		cout << "#" << i << " " << temp << endl;
		sum += temp;
		iterations++;
	}
	cout << "Сума = " << sum << "| Кількість ітерацій=" << iterations;
	cout << "CHANGE";
}


