#include<iostream>
    using namespace std;
    int main()
    {
        int n;
        int i=0;//loop counter
        cout<<"Enter the maximum number of cuts to be made:";
        cin>>n;
        cout<<"The lazy Caterer's Sequence is ...\n";
        while(i<=n)
        {
            int temp=((i*i)+i+2)/2;//temporary variable
            cout<<temp<<"\t";
            i++;
        }
        return 0;
    }