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
		cout << "введите максимальоное значение длины круга:_";
		cin >> a;
		cout << "введите значение длины круга:_";
		cin >> l;
		
		if ((0 < l) && (l < a))
		{
			r = l / (2 * pi);
			S = pi * r ^ 2;
			cout << "радиус круга равен:_" << r << endl << "площадь круга равна:_" << S << endl;
			i = 0;
		}
		else if (a < 0)
		{
			cout << "максимальное значение не может быть меньше нуля,попробуй ещё раз " << endl;
			i = 1;
		}
		else if ((l < 0))
		{
			cout << "длина круга не может быть меньше нуля,попробуй ещё раз" << endl;
			i = 1;
		}
		else if ((l > a))
		{

			cout << "значение длины больше заданного,попробуй ещё раз " << endl;
			i = 1;
		}
		
	} while (i > 0);
	return 0;
}