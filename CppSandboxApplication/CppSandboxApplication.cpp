#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	cout << "hello!" << endl;
	cout << "hello2!" << endl;

	char symbol = 'S';
	bool isComplited = true;
	int number = 28;
	long long longNumber = 2811111111111111;
	short shortNum = 30001;
	const float pi = 3.14f;
	double temperature = 101.23435345435;

	//pi = 5;
	temperature = 102.34534554543;

	cout << symbol << endl;
	cout << isComplited << endl;
	cout << number << endl;
	cout << longNumber << endl;
	cout << shortNum << endl;
	cout << pi << endl;
	cout << temperature << endl;

	int numOne{1}, numTwo{5}, numThree{}, result;
	float result_2;
	//numOne = 1;
	cout << "Enter number one:" << endl;
	//cin >> numOne;
	cout << "Enter number two:" << endl;
	//cin >> numTwo;
	cout << "Enter number three:" << endl;
	//cin >> numThree;

	cout << numOne << " | " << numTwo << " | " << numThree << endl;

	result = numOne + numTwo + numThree;

	cout << result << endl;

	result = numOne - numTwo;
	cout << numOne << " - " << numTwo << " = " << result << endl;

	result = numOne * numTwo;
	cout << numOne << " * " << numTwo << " = " << result << endl;
	
	result_2 = (float) numOne / (float) numTwo;
	cout << numOne << " / " << numTwo << " = " << result_2 << endl;

	result = numOne % numTwo;
	cout << numOne << " % " << numTwo << " = " << result << endl;

	numOne += 10;

	cout << "numOne + 10 = " << numOne << endl;

	cout << "numOne increment = " << ++numOne << endl;

	int age{15};
	//cin >> age;
	if (age > 18) {
		cout << "age > 18" << endl;
	} else if (age == 18) {
		cout << "age == 18" << endl;
	} else {
		cout << "age < 18" << endl;
	}

	const bool isCompleted = true;
	const bool isCorrect = false;


	if (isCompleted && isCorrect) // == true == 1
		cout << "isCompleted and isCorrect" << endl;
	
	if (isCompleted || isCorrect) // == true == 1
		cout << "isCompleted or isCorrect" << endl;
	
	int num = 9;
	switch (num) {
		case 8:
			cout << "num is 8" << endl;
			break;
		default:
			cout << "default actions" << endl;
	}

	bool isCheck = 1 == 1 ? true : false;
	int checkNumber = 1 == 1 ? 12 : 17;

	cout << isCheck << endl;
	cout << checkNumber << endl;

	int array[4];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;

	cout << array[0] << endl;

	cout << "---" << endl;

	float array_2[2] = { 1.11, 2.22 };
	
	cout << array_2[0] << endl;

	int array_3[3][2] = { {5, 4}, {3, 2}, {1, 2} };

	cout << array_3[1][1] << endl;

	for (int i = 0; i < 5; i++) {
		cout << "i = " << i << endl;

	}


	return 0;
}


//#include "Time.h"

//int main()
//{
//    std::cout << "Hello World!\n";
//
//  //  Time t(8, 16, 0);
//
//    std::cout << t.GetMinutes();
//
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
