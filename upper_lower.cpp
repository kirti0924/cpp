#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    int sum=0;
    cout<<"upper triangle\n";
    for (i=1;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            sum+=a[i][j];
        }
    }
    cout<<sum<<"\n";
    cout<<"lower triangle\n";
    int sum1=0;
    for (i=1;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            sum1+=a[i][j];
        }
    }
    cout<<sum1;
}
