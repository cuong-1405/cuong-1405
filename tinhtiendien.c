#include <stdio.h>
#include <math.h>
int main ()
{
	float sokwh,tien;
	printf ("\n nhap vao so dien da dung: ");
	scanf ("%f",&sokwh);
	if (sokwh<=50)
	{
		tien = sokwh*1678;
	}
	else if (sokwh>50 && sokwh<=100)
	{
		tien = 50*1678+(sokwh-50)*1734;
	}
	else if (sokwh>100 && sokwh<=200)
	{
		tien = 50*1678 + 50*1734 + (sokwh-100)*2014;
	}
	else if (sokwh>200 && sokwh<=300)
	{
		tien = 50*1678 + 50*1734 + 100*2014 + (sokwh-200)*2536;
	}
	else if (sokwh>300 && sokwh<=400)
	{
		tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (sokwh-300)*2834;
	}
	else 
	{
		tien = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (sokwh-400)*2927;
	}
	printf ("so tien phai tra: %0.1f",tien);
	printf ("VND");
	return 0;
}