#include<stdio.h>
#include<string.h>

int main()
{
	char *p = "hello world";
	*p = 'H';
	struct s{
		int i;
	float f;
	};
	union u{
		int i;
		float f;
	};
	printf("%lu %lu", sizeof(u), sizeof(s));
	return 0;
}