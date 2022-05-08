#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

int main(){
    int a=10;
    float f=10.11;
    char ch='A';

    cout<<&ch<<endl; //A + garbage value till null
    int arr[]={1,2,3,4};
    cout<<arr<<endl;

    char ch_Arr[10]="Hello";
    cout<<ch_Arr<<endl;

    cout<<a<<endl;
    cout<<&a<<endl;

    cout<<f<<endl;
    cout<<&f<<endl;

    return 0;
}
