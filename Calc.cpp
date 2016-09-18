#include <iostream>
#include <conio.h>
#include <math.h>
#include <cmath>
#include <cstring>


using std::cout;
using std::cin;
using std::endl;


int main()
{

	setlocale(LC_ALL, "Russian");

	double	 values[8]		= { 16, 14356, 6434, 2222, 123, 434, 123, 77 };
	char	 operators[7]	= { '+', '-', '+', '*', '/', '-', '+'}; 
	double	 result[20];

	cout << "\t\t--------------------------"			<< endl;
	cout << "\t\t\tCALCULATOR"							<< endl;
	cout << "\t\t--------------------------\n\n\n\n\n"  << endl;


	for (int i = 0; i < sizeof(values[8]); i++) 
	{
		switch (operators[i])
		{
			case '+':
			result[i] = values[i] + values[i + 1];
			cout << "Результат действия: " << values[i] << " + " << values[i + 1] << " равен: " << result[i] << endl;
			break;

			case '-':
			result[i] = values[i] - values[i + 1];
			cout << "Результат действия: " << values[i] << " - " << values[i + 1] << " равен: " << result[i] << endl;
			break;

			case '/':
			result[i] = values[i] / values[i + 1];
			cout << "Результат действия: " << values[i] << " / " << values[i + 1] << " равен: " << result[i] << endl;
			break;

			case '*':
			result[i] = values[i] * values[i + 1];
			cout << "Результат действия: " << values[i] << " * " << values[i + 1] << " равен: " << result[i] << endl;
			break;
		}		
	}
	
	_getch();
	return 0;
}
