#include<iostream>
using namespace std;
#include<array>

int main ()
{

    array <int,6>arr = {1,2,3,4,5,6};

    for (auto it=arr.rbegin(); it!=arr.rend(); it++)
    {
        cout<<*it<<"  ";
    }

    cout<<endl;

    return 0;

}
