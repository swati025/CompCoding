/* Read input from STDIN. Print your output to STDOUT*/
#include<stdio.h>

int divide(int len, int bth)
{
	int child = 0;
	if (len & bth == 0)
	{
		return child;
	}
	else if (len == bth)
	{
		return 1;
	}
	else if (len > bth)
	{
		return  (1 + divide(len - bth, bth));
	}
	else
	{
		return  (1 + divide(len, bth - len));
	}
}

//int main(int argc, char *a[])
//{
//	int m, n, p, q;
//	//Write code here
//	scanf("%d%d%d%d", &m, &n, &p, &q);
//	printf("%d", divide(m, p) + divide(m, q) + divide(n, p) + divide(n, q));
//	// printf("%d",divide(m,q));
//	//printf("%d",divide(n,p));
//	//	printf("%d",divide(n,q));    
//}