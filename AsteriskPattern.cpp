#include <iostream>

using namespace std;
void print_space(int n)
{
    if(n==0)
    return;
    cout<<" ";
    n=n-1;
    print_space(n);
}

void print_asterisk(int n, int num)
{
    if(n==0)
    return;
    cout<<"*";   //to print number pattern replace * with n
    n=n-1;
    print_asterisk(n,num);
}

void pattern(int n, int num)
{
    if(n==0)
    return;
    print_space(n-1);
    print_asterisk(num-n+1,num);
    cout<<endl;
    n=n-1;
    pattern(n,num);

}
int main()
{
    int n,num;
    cout<<"Enter the number of  rows :";
    cin>>n;
    num=n;
    pattern(n,num);
    return 0;
}