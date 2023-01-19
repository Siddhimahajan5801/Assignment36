#include<iostream>
using namespace std;
#include<array>

int main()
{
    array <int,5>arr1 = {2,2,6,9,7};
    array <int,0>arr2;

    if (arr1.empty()== true)
    {
        cout<<"The array is empty! \n";
    }
    else
        cout<<"The array is not empty! \n";

    cout<<endl;

    if (arr2.empty()== true)
    {
        cout<<"The array is empty! \n";
    }
    else
        cout<<"The array is not empty! \n";

        return 0;

}
