#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
	using namespace std; 
	setlocale(LC_ALL, "Russian");
	int a = 0, l = 0, i = 0,r = 0, pi=3.14, S = 0;
	do
	{
		cout << "������� ������������� �������� ����� �����:_";
		cin >> a;
		cout << "������� �������� ����� �����:_";
		cin >> l;
		
		if ((0 < l) && (l < a))
		{
			r = l / (2 * pi);
			S = pi * r ^ 2;
			cout << "������ ����� �����:_" << r << endl << "������� ����� �����:_" << S << endl;
			i = 0;
		}
		else if (a < 0)
		{
			cout << "������������ �������� �� ����� ���� ������ ����,�������� ��� ��� " << endl;
			i = 1;
		}
		else if ((l < 0))
		{
			cout << "����� ����� �� ����� ���� ������ ����,�������� ��� ���" << endl;
			i = 1;
		}
		else if ((l > a))
		{

			cout << "�������� ����� ������ ���������,�������� ��� ��� " << endl;
			i = 1;
		}
		
	} while (i > 0);
	return 0;
}