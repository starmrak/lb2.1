int index_first_zero(int arr[],int i){
        int out=0;
        for(int ind=0;ind<i;ind++){
            if(arr[ind]==0) {
                    out=ind;
                    break;
             }
        }
        return out;
}

