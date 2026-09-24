/* 
arrange array in such way that 1st even is store then odd is stored
*/
#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,3,4,5,6};
    int b[5];
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<b[i]<<" ";   
    }
    return 0;
}