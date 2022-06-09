#include <iostream>

using namespace std;

void max_secondmax(int* a, int n, int *max, int *second_max);

int main()
{
    int* a= new int[5];
    int* max=new int; // variable to memorize the max value;
    int* second_max=new int; // variable to memorize the second_max value;


    for(int i=0;i<5;++i)
    {
        cout<<"Number inside array"<<endl;
        a[i]=rand()%100+20;
        cout<<a[i]<<endl;
        max_secondmax(a, i, max, second_max);
    }
    cout<<"---------"<<endl;
    return 0;
}

void max_secondmax(int* a, int loopIndex, int *max, int *second_max)
{
    cout<<"max_secondmax function"<<endl;
    //cout<<loopIndex<<endl;
    if(loopIndex==0)
    {
        *max=a[loopIndex];
        *second_max=NULL;
    }
    if(a[loopIndex]>*max)
    {
        *second_max=*max;
        *max=a[loopIndex];
    }
    if(loopIndex!=0 && a[loopIndex]!=*max && a[loopIndex]> *second_max)
    {
        *second_max=a[loopIndex];
    }

    cout<<"*max"<<endl;
    cout<<*max<<endl;

    cout<<"*second_max="<<endl;
    cout<<*second_max<<endl;

}
