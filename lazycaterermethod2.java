import java.util.*;
class lazycatererseq2
{
    Scanner ob=new Scanner(System.in);
    void main()
    {
        int n;
        int i=0;//loop counter
        System.out.print("Enter the maximum number of cuts to be made:");
        n=ob.nextInt();
        System.out.println("The lazy Caterer's Sequence is ...\n");
        while(i<=n)
        {
            int temp=((i*i)+i+2)/2;//temporary variable
            System.out.print(temp+"\t");
            i++;
        }
    }
}
