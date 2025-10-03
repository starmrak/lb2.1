#include <stdlib.h>

#include "index_first_zero.h"
#include "index_last_zero.h"

int sum_between(int arr[],int i){
        int one=index_first_zero(arr,i);
        int last=index_last_zero(arr,i);
        int out=0;

        for(int forw=one;forw<last;forw++)
        {
                out+=abs(arr[forw]);
        }

        return out;

}

