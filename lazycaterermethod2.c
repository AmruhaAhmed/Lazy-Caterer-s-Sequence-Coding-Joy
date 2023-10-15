    #include<stdio.h>
    void main()
    {
        int n;
        int i=0;//loop counter
        printf("Enter the maximum number of cuts to be made:");
        scanf("%d",&n);
        printf("The lazy Caterer's Sequence is ...\n");
        while(i<=n)
        {
            int temp=((i*i)+i+2)/2;//temporary variable
            printf("%d\t",temp);
            i++;
        }
    }


