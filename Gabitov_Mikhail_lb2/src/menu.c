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
                        printf("%d\n",out);
                        break;
                case 1:
                        out=index_last_zero(arr, i);
                        printf("%d\n",out);
                        break;
                case 2:
                        out=sum_between(arr, i);
                        printf("%d\n",out);
                        break;
                case 3:
                        out=sum_before_and_after(arr, i);
                        printf("%d\n",out);
                        break;
                default:
                        printf("Данные некорректны\n");
                        break;
        }

        return 0;

}
