#include <iostream>
#include <ctime>
using namespace std;

int main()
{	//Task 1
	srand(time(0));
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}

	int min_task1 = arr[0];
	int max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min_task1)
		{
			min_task1 = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	cout << min_task1 << endl;
	cout << max << endl;


	//Task 2
	srand(time(0));
	const int size_task2 = 8;
	int arr_task2[size_task2];
	int start, end, number, sum_task2 = 0;

	cout << "Start of range: ";
	cin >> start;
	cout << "End of range: ";
	cin >> end;

	for (int i = 0; i < size_task2; i++)
	{
		arr_task2[i] = start + rand() % (end - start);
		cout << arr_task2[i] << " ";
	}
	cout << endl;

	cout << "Enter a number: ";
	cin >> number;

	for (int i = 0; i < size_task2; i++)
	{
		if (arr_task2[i] < number)
		{
			sum_task2 += arr[i];
		}
	}
	cout << sum_task2 << endl;


	//Task 3
	int profit[12];
	cout << "Enter the firm's profit for each month (12 months): ";
	for (int i = 0; i < 12; i++) {
		cin >> profit[i];
	}

	int first, second;
	cout << "Enter the range: ";
	cin >> first;
	cin >> second;

	int max_prof = profit[first - 1], min_prof = profit[first - 1];
	int max_month = first, min_month = first;
	for (int i = first; i < second; i++) {
		if (profit[i] > max_prof) {
			max_prof = profit[i];
			max_month = i + 1;
		}
		if (profit[i] < min_prof) {
			min_prof = profit[i];
			min_month = i + 1;
		}
	}

	cout << "Min income: " << max_prof << " months: " << max_month << endl;
	cout << "Max income: " << min_prof << " months: " << min_month << endl;


	//Task4
	const int size_task4 = 10;
	double arr_task4[size_task4] = {4.3, 2.4, 3.5, 4.7, 3.3, 1.4, 5.4, 1.8, 1.6, 8.4};
	float elem = 0.0;
	int neg = -0.0, pos = -0.0;
	int min_task4 = 1, max_task4 = 1;
	int product = 1;
	int sum_task4 = 0;

	for (int i = 0; i < size_task4; i++)
	{
		if (arr_task4[i] < 0)
		{
			elem += arr_task4[i];
		}


		min_task4 = arr_task4[i] > min_task4 ? min_task4 : arr_task4[i];
		max_task4 = arr_task4[i] < max_task4 ? max_task4 : arr_task4[i];


		if (i % 2 == 0)
		{
			product *= arr_task4[i];
		}


		if (arr_task4[i] < 0)
		{
			neg = arr_task4[i] > neg ? neg : arr_task4[i];
			pos = arr_task4[i] < pos ? pos : arr_task4[i];
			if (arr_task4[i] != neg || arr_task4[i] != pos)
			{
				sum_task4 += arr_task4[i];
			}
		}


	}
	cout << "The sum of the negative elements. " << elem << endl;
	cout << "The product of the minimum number and the maximum number.  " << min_task4 * max_task4 << endl;
	cout << "The product of elements with even numbers. " << product << endl;
	cout << "The sum of the elements between the first and last negative elements. " << sum_task4 << endl;
	return 0;
}
