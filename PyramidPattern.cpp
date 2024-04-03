#include <iostream>
using namespace std;

void pattern(int n)
{
    int k,rows=n;
    for(int i=1,k=0;i<=rows;++i)
    {
        k=0;
        for(int space=1;space<=rows-i;++space)
        {
            cout<<" ";
        }
        while(k!=2*i-1)
        {
            cout<<"*";
            ++k;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of  rows :";
    cin>>n;
    pattern(n);
    return 0;
}