int index_last_zero(int arr[],int i){
        int out;
        for(int ind=0;ind<i;ind++){
            if(arr[ind]==0) {
                    out=ind;
             }
        }
        return out;

}

