#include <iostream>
using namespace std;
class top
{
    bool f;
    public:void bubble(int arr[],int s)
    {
        for(int i=0;i<s;i++)
        { 
            f=true;
            for(int j=0;j<s-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp;
                    temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                    f=false;
                }
            }
            if(f==true)
            {
                break;
            }
        }
       
    }
};
int main()
{
    top p;
    int a[]={5,4,3,2,1,56,1,2,78};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<"\t";
    }
    p.bubble(a,s);
    cout<<"\n after applying \n";
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<"\t";
    }
}