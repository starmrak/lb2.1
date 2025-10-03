#include <stdlib.h>

#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_before_and_after(int arr[],int i){
        int one=index_first_zero(arr,i);
        int last=index_last_zero(arr,i);
        int out=0;

        for(int b=0;b<i;b++)
        {
                if(b<one||b>last)
                {
                        out+=abs(arr[b]);
                }
        }

        return out;

}
