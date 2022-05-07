#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i>=1){
        cout<<i<<' ';
        if(i==n)
            break;
        i++;
    }
    return 0;
}
