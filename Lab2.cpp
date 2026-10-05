#include <iostream>
#include <cmath>

using namespace std;
int main() 
{
	/*Рахуємо для z1.  Введення значення одразу в радіанах (cos рахує їх як є)*/
	/*float z1,a;
	cout << "Enter your a";
	cin >> a ;
	z1 = cos(2 * a) + cos(a) + cos(6 * a) + cos(7 * a);
	cout << "Z1=" <<z1;*/

	/*Рахуємо для z1.  Введення значення в градусах з подальшим переведенням у радіани*/
	/*float z1, a;
	const float  PI = 3.14159265;
	cout << "Enter your a (in degrees ";
	cin >> a;
	a = a * PI / 180;
	z1 = cos(2 * a) + cos(a) + cos(6 * a) + cos(7 * a);
	cout << "Z1=" <<z1;*/

	/*Рахуємо для z2.*/
	/*float z2, a;
	cout << "Enter your a";
	cin >> a;
	z2 = log(fabs(a - 12.5 * pow(a, 9))) / log(5);
	cout << "Z2=" <<z2;*/


	float z1,z2, a;
	const float  PI = 3.14159265;
	cout << "Enter your a (in degrees) ";
	cin >> a;
	a = a * PI / 180;
	z1 = cos(2 * a) + cos(a) + cos(6 * a) + cos(7 * a);
    /*Рахуємо для z2.*/
	z2 = log(fabs(a - 12.5 * pow(a, 9))) / log(5);
	cout << "Z1= " << z1 << endl;
	cout << "Z2= " << z2 << endl;







	//return 0;

}
