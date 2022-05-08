#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr = &a;

    float f=10;
    float *fptr=&f;

    char ch='A';
    char *chptr = &ch;

    cout<<&a<<endl;
    cout<<aptr<<endl;

    cout<<&f<<endl;
    cout<<fptr<<endl;

    cout<<sizeof(aptr)<<endl;
    cout<<sizeof(fptr)<<endl;
    cout<<sizeof(chptr)<<endl;

    return 0;
}
