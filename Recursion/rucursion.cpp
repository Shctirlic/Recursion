#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include <algorithm> 
using namespace std;

long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;

}

//Числа Фибоначчи

int fibonacci(int num) {
	if (num <= 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задание Факториал
	/*cout << "Введите число:";
	cin >> n;
	cout << n << "! = " << factorial(n) << "\n";*/


	cout << "Задача 1.\nВведите номер числа Фибоначчи: ";
	cin >> n;
	cout << "Число Фибоначчи № " << n << " = " << fibonacci(n) << "\n";

	cout << " первые 13 чисел Фибоначчи:\n";
	for (int i = 0; i < 13; i++)
		cout << fibonacci(i) << " , ";
	cout << "\b\b.\n";







	return 0;
}