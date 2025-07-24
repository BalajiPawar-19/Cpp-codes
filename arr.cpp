#include <iostream>
using namespace std;

int main() {
    int num[5]={10,27,50,30,40};
    int sum=0;

    for(int i=0; i<5;i++)
    {
        sum = sum + num[i];
    }
    cout << "the sum of an array is="<< sum << endl;
    return 0;
}
