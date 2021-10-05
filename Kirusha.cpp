/*
Артемьев Кирилл группа П43021 Вариант 4
*/
#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*Begin10◦
	. Даны два ненулевых числа. Найти сумму, разность, произведение и
	частное их квадратов.
	*/
	/*
	int  a;
	int  b;
	double S;
	double  R;
	double  P;
	double C;
	cout << "naiti vse";
	cin >> a >> b;
	S = (a * a) + (b * b);
	R = (a * a) - (b * b);
	P = (a * a) * (b * b);
	C = (a * a) / (b * b);
	cout << S << endl;
	cout << R << endl;
	cout << P << endl;
	cout << C << endl;
	*/
	/*
	Begin11◦
		.Даны два ненулевых числа.Найти сумму, разность, произведение и
		частное их модулей
		*/
		/*
		int  a;
		int  b;
		double S;
		double  R;
		double  P;
		double C;
		cout << "naiti vse";
		cin >> a >> b;
		S = abs(a + b);
		R = abs(a - b);
		P = abs(a * b);
		C = abs(a / b);
		cout << S << endl;
		cout << R << endl;
		cout << P << endl;
		cout << C << endl;
		*/
		/*	Begin12◦
			.Даны катеты прямоугольного треугольника a и b.Найти его гипотенузу c и периметр P :
			*/
			/*
			int  a;
			int  b;
			double c;
			double P;
			cout << "naiti vse";
			cin >> a >> b;
			c = sqrt((a * a) + (b * b));
			P = a + b + c;
			cout << c << endl;
			cout << P << endl;
			*/
			/*
			Begin13◦
		. Даны два круга с общим центром и радиусами R1 и R2 (R1 > R2).
		Найти площади этих кругов S1 и S2, а также площадь S3 кольца, внешний
		радиус которого равен R1, а внутренний радиус равен R2:
		*/
		/*
		int  R1;
		int  R2;
		double S1;
		double S2;
		double S3;
		double P;
		cout << "naiti vse";
		cin >> R1 >> R2;
		S1 = 3.14 * ( R1 * R1);
		S2 = 3.14 * (R2 * R2);
		S3 = S1 - S2;

		cout << S1 << endl;
		cout << S2 << endl;
		cout << S3 << endl;
		*/
		/*
		Begin20◦
	. Найти расстояние между двумя точками с заданными координатами
	(x1, y1) и (x2, y2) на плоскости. Расстояние вычисляется по формуле
	*/
	/*
	int  x1;
	int  x2;
	double y1;
	double y2;
	double P;
	cout << "naiti vse";
	cin >> x1 >> x2 >> y1 >> y2;
	P = sqrt(((x2 - x1) * (x2 + x1)) + ((y2 - y1) * (y2 + y1)));

	cout << P << endl;
	*/
	/*
	Begin21◦
	. Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3).
	Найти его периметр и площадь, используя формулу для расстояния между двумя точками на плоскости (см. задание Begin20). Для нахождения
	площади треугольника со сторонами a, b, c использовать формулу Герона:
	*/
	/*
		int  x1;
		int  x2;
		int y1;
		int y2;
		int x3;
		int y3;
		double p;
		double P;
		double a;
		double b;
		double c;
		double S;
		cout << "naiti vse";
		cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3;
		a = sqrt(((x2 - x1) * (x2 + x1)) + ((y2 - y1) * (y2 + y1)));
		b = sqrt(((x3 - x2) * (x3 + x2)) + ((y3 - y2) * (y3 + y2)));
		c = sqrt(((x3 - x1) * (x3 + x1)) + ((y3 - y1) * (y3 + y1)));
		P = a + b + c;
		p = P / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));

		cout << P << endl;
		cout << S << endl;
		*/
		/*Begin22◦
		.Найти расстояние между двумя точками с заданными координатами x1 и x2 на числовой оси: |x2 − x1|
		*/
		/*
		Begin 16
			int x1;
			int x2;
			double S;
			cout << "vvesti";
			cin >> x1 >> x2;
			S = abs(x2 - x1);
			cout << S << endl;
			*/

			/*
			Begin9◦
		. Даны два неотрицательных числа a и b. Найти их среднее геометрическое, то есть квадратный корень из их произведения: √
		a·b.
		*/
		/*
			int a;
			int b;
			int S;
			cout << "ff";
			cin >> a >> b;
			S = sqrt(a * b);
			cout << S << endl;
			*/
			/*
			Begin 22
			Поменять местами содержимое переменных A и B и вывести новые
			значения A и B.
			*/
			/*
			Begin24◦
			. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в C, C — в B, B — в A, и вывести новые значения переменных A,
			B, C.
			*/
			/*
				int A;
				int B;
				int C;
				double S;
				cout << "naiti";
				cin >> A >> B >> C;
				S = A;
				C = S;
				A = B;
				B = C;
				cout << A << endl;
				cout << B << endl;
				cout << C << endl;
				*/



				/*Begin23◦
				. Даны переменные A, B, C. Изменить их значения, переместив содержимое A в B, B — в C, C — в A, и вывести новые значения переменных A,
				B, C.
				*/
				/*
				int A;
				int B;
				int C;
				double S;
				cout << "naiti";
				cin >> A >> B >> C;
				S = A;
				C = S;
				A = B;
				B = C;
				cout << A << endl;
				cout << B << endl;
				cout << C << endl;
				*/
				/*
					int a;
					int b;
					double x1;
					double x2;
					double x3;
					cout << "naiti";
					cin >> a >> b ;
					x1 = -sqrt(-b / a);
					x2 = sqrt(-b / a);
					x3 = 0;
					cout << x1 << endl;
					cout << x2 << endl;
					cout << x3 << endl;
					*/
					/*Begin25◦
					. Найти значение функции y = 3x
					6 − 6x
					2 − 7 при данном значении x
					*/
					/*
						int x;
						int y;
						cout << "naiti";
						cin >> x;
						y = 3 * (x * x * x * x * x * x) - 6 * (x * x) - 7;
						cout << y << endl;
						*/

						/*
						Begin26◦
						. Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном
						значении x.

						*/
						/*
							int x;
							int y;
							cout << "naiti";
							cin >> x;
							y = 4 * ((x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3) * (x - 3)) - 7 * ((x - 3) * (x - 3) * (x - 3)) + 2;
							cout << y << endl;
							*/
							/*
							Begin 27
							*/
							/*
							int A;
							int B;
							double S2;
							double S4;
							double S8;
							cout << "naiti";
							cin >> A >> B;
							S2 = A * A;
							S4 = S2 * S2;
							S8 = S4*S4;
							cout << S8 << endl;
							*/
							/*
							begin 28
							*/
							/*
							int A;
							double S2;
							double S3;
							double S5;
							double S10;
							double S15;
							cout << "naiti";
							cin >> A ;
							S2 = A * A;
							S3 = S2 * A;
							S5 = S3 * S2 ;
							S10 = S5 * S5;
							S15 = S10 * S5;
							cout << S15 << endl;
							*/
							/*
							integer 1
							*/
/*
int L;
double x;
cout << "naiti";
cin >> L;
x = L / 100;
cout << x << endl;
*/
/*
integer 2
int M;
double x;
cout << "naiti";
cin >> M;
x = M / 1000;
cout << x << endl;
*/
/*

integer 3
*/
/*
int L;
double x;
cout << "naiti";
cin >> L;
x = L / 1024;
cout << x << endl;
*/
/*
integer 4

*/
/*
int A;
int B ;
double x;
cout << "naiti";
cin >> A >> B;
x = A / B;
cout << x << endl;
*/
/*
integer 5
*/
/*
int A;
int B;
double x;
cout << "naiti";
cin >> A >> B;
x = A % B;
cout << x << endl;
*/

/*
integer 6
*/
/*
int A;
double C;
double D;
cout << "naiti";
cin >> A;
C = A / 10;
D = A % 10;
cout << C << endl;
cout <<  << endl;
*/
/*
integer 7
*/
/*
int A;
double C;
double S;
double P;
double O;
cout << "naiti";
cin >> A ;
C = A / 10 ;
O = A % 10 ;
S = C + O;
P = C * O;
cout << P << endl;
cout << S << endl;
*/
/*
integer 8 
*/




/*
тест
*/

int R1;
int R2;
int R;
cout << "Вычислите сопротивления электрической цепи при параллельном соединении элементов" << endl;
cout << "Введите исходные данные" << endl;
cout << "Введите величину первого сопротивления(Ом) ->";
cin >> R1;
cout << "Введите велечину второго сопротивления (Ом) ->";
cin >> R2;
cout << "Вычисление сопротивления электрической цепи при параллельном соединении элементов ->";
R = (R1 * R2) / (R1 + R2);
cout << R << endl;


}
	



