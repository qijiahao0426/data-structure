void BubbleSort(int R[],int n){
    int i,j,flag;
    int temp;
    for(i=n-1;i>=1;--i){
        flag=0;
        for(j=1;j<=i;++j){
            if(R[j-1]>R[j]){
                temp=R[j];
                R[j]=R[j-1];
                R[j-1]=temp;
                flag=1;
            }
        }
        if(flag==0) return;
    }
}