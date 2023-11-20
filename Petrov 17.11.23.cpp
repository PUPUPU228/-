#include <iostream> 
using namespace std;
int main()
{
	int n;
	cout << "Введите число: ";
	cin >> n;
	int kv = n * n;
	int cu = n * n * n;
	cout << "Квадрат числа: " << kv << endl;
	cout << "Куб числа: " << cu << endl;
	return 0;
}