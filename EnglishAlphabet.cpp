#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
* Complete the function below.
*/
int word_count(int input1_size_rows, int input1_size_cols, char*** input1, char* input2)
{
	int i,j,count = 0;
	for (i = 0; i < input1_size_rows; i++)
	{
		for (j = 0; j < input1_size_cols; j++)
		{
			if (input1[i][j] == input2)
			{

			}
		}
	}
	return count;
}

//int main()
//{
//	int r, c, i, j, res;
//	scanf("%d%d", &r, &c);
//	char ***ch = (char ***)malloc(sizeof(char **)*(r*c)), *str;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			scanf("%c", &ch);
//		}
//	}
//	scanf("%c", &str);
//	res = word_count(r, c, ch, str);
//	return 0;
//}