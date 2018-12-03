#include<iostream>
using namespace std;
int x;
int main()
{
    unsigned int x;cin>>x;
    unsigned int z;
    int k=0;
    unsigned int y=x;
    int h=0;

    while(y!=0)
    {
        y=y>>1;
        k++;
    }

    for(int i=1;i<=k;i++)
{
    z=x;
    z=z<<(32-i);
    z=z>>31;
    h++;
    cout<<z<<endl;


}
}
