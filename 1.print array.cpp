#include <iostream>
using namespace std;

class top
{
public:void show(int arr[],int s)
{
    for(int i=0;i<s;i++)
    {
        if(i==s-1)
        {
       cout<<arr[i];
        }
        else{
          cout<<arr[i]<<",";
        }
    }
}
};
int main()
{
    int a[5]={2,3,4,5,6};
    int s=sizeof(a)/sizeof(a[0]);
    top p;
    p.show(a,s);
}