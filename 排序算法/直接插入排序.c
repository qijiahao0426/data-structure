void InsertionSort(int a[],int n){
    int i,j;
    for(i=2;i<=n;i++){
        if(a[i]<a[i-1]){
            a[0]=a[i];
            for(j=i-1;a[0]<a[j];--j)
                a[j+1]=a[j];
            a[j+1]=a[0];
        }
    }
}