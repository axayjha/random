/*Counting sort implementation*/

#include <iostream>
using namespace std;
#define RANGE 10000000
int main()
{
    int n;
    cout << "Enter the length of the array: " ;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i < n ; i++)
        cin >> arr[i] ;

    
    static int table[RANGE] = {0};
    
    for(int i=0; i<n; i++)
        table[arr[i]] ++;

    long int i=0;
    for(; i<RANGE ; i++)
        for(int j=0; j<table[i]; j++)
            cout << i << " ";

}