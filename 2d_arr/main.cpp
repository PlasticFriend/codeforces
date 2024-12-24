#include <iostream>

using namespace std;

int main()
{
    //first method to create an 2d array
    int arr[3][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // second method
    int *arr2[3];
    arr2[0] = new int[4];
    arr2[1] = new int[4];
    arr2[2] = new int[4];

    //third method
    int **a;
    a = new int *[3];
    a[0] = new int[4];
    a[1] = new int[4];
    a[2] = new int[4];

    return 0;
}
