#include <iostream>
using namespace std;

int main() 
{
    int arr[10]={10,30,5,7,20,15,25,35,40,45};
    int smallest = arr[0];
    for(int i = 1; i<10; i++)
    {
        if(arr[i] < smallest)
        {
            //5 < 10 -- first case
            // 1 < 5 -- second case
            // one more comment added
            smallest = arr[i];
        }
    }
    cout << "Smallest element in the array is: " << smallest << endl;

    return 0;
}