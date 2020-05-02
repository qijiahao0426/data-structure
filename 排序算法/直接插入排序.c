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

void InsertSort(int r[],int n){
    int i,j;
    int temp;
    for(i=1;i<n;++i){
        temp=r[i];
        j=i-1;
        while(j>=0&&temp<r[j]){
            r[j+1]=r[j];
            --j;
        }
        r[j+1]=temp;
    }
}