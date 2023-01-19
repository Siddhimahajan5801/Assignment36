#include<iostream>
using namespace std;
#include<array>

int main ()
{
    int i;

    array <int,5>arr = {2,4,6,8,10};

    cout<<"Enter the index : ";
    cin>>i;

    if (i<0 || i>4)
        cout<<"\nEnter valid index range! \n";

    else
    {
    cout<<"\nThe element from the given index is = ";
    cout<<arr.at(i)<<endl;

    }

    return 0;
}
