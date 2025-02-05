#include <iostream>
using namespace std;


for(int i=0;i<s;i++)
{
    int chotu=i;
    for(int j=i+1;j<s;j++)
    {
        if(arr[chotu]>arr[j])
        {
            chotu=j;
        }
    }
    if(chotu!=i)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[chotu];
        arr[chotu]=temp;
    }
}
}
int main()
{}