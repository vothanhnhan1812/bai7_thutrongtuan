// bai7_thutrongtuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
int main()
{
	int so;
	cout << " nhap so:";
	cin >> so;
	switch (so)
	{
	case 2:
		cout << "thu hai \n";
		break;
	case 3:
		cout << "thu ba \n";
		break;
	case 4:
		cout << "thu tu \n";
		break;
	case 5:
		cout << "thu nam \n";
		break;
	case 6:
		cout << "thu sau \n";
		break;
	case 7:
		cout << "thu bay \n";
		break;
	case 8:
		cout << "chu nhat \n";
		break;

		cout << "khong phai cac ngay trong tuan\n";
	}
	return 0;
}