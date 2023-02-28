#include <math.h>
#include "Test.h"

double Test::task1(double& t, double& l)
{
	return 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9;
}

double Test::task2(double& n, double& p, double& e, double& y)
{
	return 1 * n * (pow(p, 2) + pow(y, 3)) + pow(e, p);
}

double Test::task3(double& n, double& y)
{
	return n * (y + 3.5) + sqrt(y);
}

double Test::task4(double& a, double& t)
{
	return 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5));
}

double Test::task5(double& x)
{
	return 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3);
}

double Test::task6(double& x, double& y, double& e)
{
	return cos(2 * y) + 3.6 * pow(e, x);
}

double Test::task7(double& m)
{
	return pow(m, 2) + 2.8 * fabs(m) + 0.55;
}

double Test::task8(double& y)
{
	return sqrt(fabs(6 * pow(y, 2) - 0.1 * y + 4));
}

double Test::task9(double& n, double& y, double& x)
{
	return 1 * n * (y + 0.95) + sin(pow(x, 4));
}

double Test::task10(double& e, double& y, double& x, double& k)
{
	return pow(e, y) + 7.355 * pow(k, 2) + pow(sin(x), 2);
}

double Test::task11(double& y, double& x)
{
	return 9.756*pow(y,7)+2*tan(x);
}

double Test::task12(double& x, double& t)
{
	return 7 * pow(t, 2) + 3 * sin(pow(x, 3)) + 9.2;
}

double Test::task13(double& y)
{
	return sqrt(fabs(3 * pow(y, 2) + 0.5 * y + 4));
}

double Test::task14(double& e, double& y, double& x)
{
	return fabs(sqrt(pow(sin(y), 2) + 6.835) + pow(e, x));
}

double Test::task15(double& y)
{
	return sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y));
}

double Test::task16(double& y)
{
	return sqrt(cos(4 * pow(y, 2)) + 7.151);
}

double Test::task17(double& y)
{
	return 3 * pow(y, 3) + sqrt(y + 1);
}

double Test::task18(double& y)
{
	return 3 * pow(y, 2) + sqrt(pow(y, 3) + 1);
}

double Test::task19(double& n, double& y, double& g)
{
	return n * sqrt(pow(y, 3) + 1.09 * g);
}

double Test::task20(double& e, double& y, double& x, double& k)
{
	return pow(e, k + y) + tan(x) * sqrt(y);
}

double Test::task21(double& e, double& y, double& h)
{
	return pow(e, y + 5.5) + 9.1 * pow(h, 3);
}

double Test::task22(double& u, double& y, double& x, double& n)
{
	return sin(2 * u) * 1 * n * (2 * pow(y, 2) + sqrt(x));
}

double Test::task23(double& e, double& y, double& f)
{
	return pow(e, 2 * y) + sin(f);
}

double Test::task24(double& y)
{
	return 2 * sin(0.214 * pow(y, 5) + 1);
}

double Test::task25(double& e, double& y, double& f)
{
	return pow(e, 2 * y) + sin(pow(f, 2));
}

double Test::task26(double& p)
{
	return sin(pow(pow(p, 2) + 0.4, 3));
}

double Test::task27(double& e, double& y, double& x, double& v)
{
	return 1.03 * v + pow(e, 2 * y) + tan(fabs(x));
}

double Test::task28(double& e, double& y, double& h)
{
	return pow(e, y + h) + sqrt(fabs(6.4 * y));
}

double Test::task29(double& y)
{
	return 3 * pow(y, 2) + sqrt(fabs(y + 1));
}

double Test::task30(double& e, double& y, double& r)
{
	return pow(e, y + r) + 7.2 * sin(r);
}