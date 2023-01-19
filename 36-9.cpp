#include<iostream>
using namespace std;
#include<array>

int main ()
{
    array<int,10> arr = {5,3,2,4,2,4,6,8,4,1};

    int count=1;

    cout<<"The elements which comes odd number of times : \n\n";

    for(int i=0; i<10; i++)
    {
        for (int j=i+1; j<10; j++)
        {
            if (arr[i]==arr[j])
                count++;
        }
        if (count==1 || count==3 || count==5 || count==7 || count==9)
           {
               cout<<arr[i]<<"  ";
           }
    }
    cout<<endl;

    return 0;

}
