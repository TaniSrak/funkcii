#include <iostream>
//функция
int sum(int num1, int num2)
{
	return num1 + num2;;
}

//процедура
void hi()
{
	std::cout << "Hello\n";
}

// функция для вывода массива в консоль
void print_arr(int arr[], const int  length) //, вывод массива и его длинны. создана константа под size
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << "\n";
} 

void mult_x5(int num) // num - это параметр функции
{
	num *= 5;
}

void arr_x5(int arr[])
{
	arr[1] *= 5;
}

void positive_elements(int arr[], const int lehdth)
{
	for (int i = 0; i < lehdth; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;
}

unsigned long long factorial(int num)
{
	unsigned long long result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	
	//создание и вызов функций
	
	hi();

	std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;
	

	//Функции работающие с массивами
	
	const int size = 5;
	int arr[size]{ 1, 2, 3 , 4, };
	print_arr(arr, size); //массив передается как имя, без скобочек
	
	arr_x5(arr); 
	print_arr(arr, size);

	n = 7;
	mult_x5(n); // n - это аргумент функции
	std::cout << "n = " << n << std::endl;
	


	//Task1 Индексы положительных эдементов массива
	
	std::cout << "Массив:\n";
	const int size1 = 5;
	int arr1[size1]{ 4, 2, 3, -2, };

	print_arr(arr1, size1);
	std::cout << "Индексы положительных элементов -> ";
	positive_elements(arr1, size1);
	std::cout << '\n';
	

	//Task2 возвращение факториала

	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;



	return 0;
}
