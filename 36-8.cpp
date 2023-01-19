#include<iostream>
#include<algorithm>
using namespace std;
#include<array>

int main ()
{
    array <int,8>arr1 = {8,6,3,2,7,4,3,1};

    cout<<"The array in descending order is : \n\n";

    sort(arr1.begin(), arr1.end(), greater<>());

    for (int i=0; i<8 ; i++)
    {
        cout<<arr1[i]<<"    ";
    }

    cout<<endl;

    return 0;

}

