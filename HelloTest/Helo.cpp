#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    srand(time(NULL));
    for(int i=0;i<n;i++)
        a[i]=rand()%100;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                int z=a[i];
                a[i]=a[j];
                a[j]=z;
            }
        }
    }
    for(int i=2 ;i<n;i++){
        int a1=a[i-2];
        int b=a[i-1];
        int c=a[i];
        if((a1+b>c) && (a1+c>b) && (b+c>a1)){
            double pol=(a1+b+c)/2;
            cout<<"S="<<sqrt(pol*(pol-a1)*(pol-b)*(pol-c))<<endl<<a1<<" "<<b<<" "<<c<<endl;
            break;
        }
    }
    return 0;
}