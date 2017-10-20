#include <stdio.h>
#include <math.h>


int main()
{

	double rez,
		x = 0.4,
		h = 0.02;


    do
	{
		if (x < 0.5)
			rez = pow(abs(log(x)), 7);
		if (x >= 0.5 && x < 7)
			rez = cos(x + x*x*x) / sin(x + x*x*x);
		if (x >= 0.7)
			rez = log(5, sin(x));

		printf_s("\nWhen x=%lf than function=%lf", x, rez);
		x += h;

	} while (x <= 0.8);
	getchar();
	return 0;
}
