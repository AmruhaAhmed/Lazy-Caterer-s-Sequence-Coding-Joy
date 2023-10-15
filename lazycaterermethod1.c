#include<stdio.h>
    int fact(int a)//function to calculate factorial
    {
        if(a==0)
        return 1;
        else
        return(a*fact(a-1));
    }
    void main()
    {
        int n;
        int i;
        printf("Enter the maximum number of cuts to be made:");
        scanf("%d",&n);
        int term1=0,term2=0,term3=0; //term1 =nC0, term2 for nC1, term3 for nC2    
        printf("The lazy Caterer's Sequence is ...\n");
        for(i=0;i<=n;i++)// i is the loop counter
        {
            int finalterm=0;//to store the sum of term1,term2 and term3(substitution of formula)
            term1=fact(i)/(fact(i)*fact(0));
            if(i!=0)
            {               
                term2=fact(i)/(fact(i-1)*fact(1));
                if(i!=1)
                term3=fact(i)/(fact(i-2)*fact(2));
                else
                term3=0;        
            }
            else
            {
                term2=0;
            }
            finalterm=term1+term2+term3;
            printf("%d\t",finalterm);
            
        }
    }
