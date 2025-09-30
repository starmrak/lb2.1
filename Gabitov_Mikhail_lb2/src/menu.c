#include <stdio.h>


#include "index_first_zero.h"
#include "index_last_zero.h"
#include "sum_between.h"
#include "sum_before_and_after.h"
int main()
{
	int max_size=100;
	int choice=0;
	int arr[max_size];
	int i=0;
	char str;
	int out=0;

	scanf("%d\n",&choice);

	while(str!='\n')
	{
		scanf("%d%c",&arr[i],&str);
		i+=1;
	}

	switch(choice)
	{
		case 0:
			out=index_first_zero(arr, i);
			break;
		case 1:
			out=index_last_zero(arr, i);
			break;
		case 2:
			out=sum_between(arr, i);
			break;
		case 3:
			out=sum_before_and_after(arr, i);
			break;
		default:
			printf("Данные некорректны");
			break;
	}
	printf("%d\n",out);
	return 0;

}
