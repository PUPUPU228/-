#include <iostream> 
using namespace std;
int main()
{
	int s, e;
	int t = 0;

	cout << "Введите начало диапазона: ";
	cin >> s;
	cout << "Введите конец диапазона: ";
	cin >> e;
	for (int w = s; w <= e; w++)
	{
		if (w % 2 == 0)
		{
			t += 1;
		}
	}
	cout << "Сумма четных чисел: " << t << endl;
	return 0;
}