#include <iostream>
//�������
int sum(int num1, int num2)
{
	return num1 + num2;;
}

//���������
void hi()
{
	std::cout << "Hello\n";
}

// ������� ��� ������ ������� � �������
void print_arr(int arr[], const int  length) //, ����� ������� � ��� ������. ������� ��������� ��� size
{
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << "\n";
} 

void mult_x5(int num) // num - ��� �������� �������
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
	
	//�������� � ����� �������
	
	hi();

	std::cout << "������� ��� ����� -> ";
	std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;
	

	//������� ���������� � ���������
	
	const int size = 5;
	int arr[size]{ 1, 2, 3 , 4, };
	print_arr(arr, size); //������ ���������� ��� ���, ��� ��������
	
	arr_x5(arr); 
	print_arr(arr, size);

	n = 7;
	mult_x5(n); // n - ��� �������� �������
	std::cout << "n = " << n << std::endl;
	


	//Task1 ������� ������������� ��������� �������
	
	std::cout << "������:\n";
	const int size1 = 5;
	int arr1[size1]{ 4, 2, 3, -2, };

	print_arr(arr1, size1);
	std::cout << "������� ������������� ��������� -> ";
	positive_elements(arr1, size1);
	std::cout << '\n';
	

	//Task2 ����������� ����������

	std::cout << "������� ����� -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl;



	return 0;
}
