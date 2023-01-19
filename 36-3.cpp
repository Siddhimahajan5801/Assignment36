#include<iostream>
using namespace std;
#include<array>

int main ()
{
    array<int,5>arr = {9,3,8,4,3};

    cout<<"The first element of the array = "<<arr.front()<<endl<<endl;
    cout<<"The last element of the array =  "<<arr.back()<<endl;

    return 0;
}
