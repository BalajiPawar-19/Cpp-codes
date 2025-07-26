// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int num[5]={10,20,30,40,50};
// //     int sum=0;

// //     for(int i=0; i<5;i++)
// //     {
// //         sum = sum + num[i];
// //     }
// //     cout << "the sum of an array is="<< sum << endl;
// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// int main(){
    
//     int num[5];
//     int sum = 0;
//     cout << "enter ur 5 num";
//     for(int i=0;i<5;i++)
//     {
//         cin>>num[i];
//     }
//     for(int i=0;i<5;i++)
//     {
//         sum = sum + num[i];
//     }
//     cout << "the sum  of the array is ="<< sum<< endl;
//     return 0;
// }


// //secound largest element sorted array-------------------------
// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[2] = {5, 10, 15, 20, 25}; 
//     int n = sizeof(arr) / sizeof(arr[0]);  // length of array

//     cout << "Second largest element is: " << arr[n - 2] << endl;

//     return 0;
// }




#include <iostream>
using namespace std;

int main()
{
    int arr[]={0,1,0,1,0,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,0,1,1,1,0,0,1,1,0};
    int a=sizeof(arr) / sizeof(arr[0]);
    int countones=0;
    int countzero=0;

    for (int i=0;i< a; i++)
    {
        if (arr[i]==1)
        countones++;
        else if (arr[i]==0)
        countzero++;
    }
    cout<<"total num of 1="<<countones<<endl;
    cout<<"total num of 0="<<countzero<<endl;
return 0;
}