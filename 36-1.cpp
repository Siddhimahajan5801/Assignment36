#include<iostream>
using namespace std;
#include<array>

int main ()
{
    array<int,5>arr = {1,2,3,4,5};

    cout<<"The element arr[0] = "<<get<0>(arr)<<endl;
    cout<<"The element arr[1] = "<<get<1>(arr)<<endl;
    cout<<"The element arr[2] = "<<get<2>(arr)<<endl;
    cout<<"The element arr[3] = "<<get<3>(arr)<<endl;
    cout<<"The element arr[4] = "<<get<4>(arr)<<endl;

    arr[4]=10;
    cout<<"\nThe modified element arr[4] = "<<get<4>(arr)<<endl;


    return 0;
}
