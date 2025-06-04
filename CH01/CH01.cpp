// CH01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int Sum(int* arr, int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += arr[i];
	}
	return result;
}

double Avg(int arr[], int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += arr[i];
	}
	return result / size;
}

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}

	int sum = Sum(arr, 5);
	double avg = Avg(arr, 5);
	cout << sum << '\n';
	cout << avg << '\n';	
}



