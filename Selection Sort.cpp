#include <iostream>
#include <cstdlib>
#include "apvector.h"
#include "apmatrix.h"

using namespace std;

// Sort a[0], ..., a[size¨C1] in ascending order.

int main()
{
    int numElements = 5;
    apvector<int> a(numElements);
    int temp;
    int i,j;

    //Get numbers from the user
    for(int k = 0; k < numElements; k++){
        cout << "Please enter the number" << k + 1 << " number of your set: ";
        cin >> a[k];
    }
    cout <<endl << endl;


    //Print out the user's numbers
    cout << "Your numbers are: " << endl;
    for(int k = 0; k < numElements; k++){
        cout << a[k] << "  ";
    }
    cout << endl;


    //Sort the numbers
    for(i = 0; i < numElements; i++){
        int smallest = a[i];


        for(j = 0; j <numElements; j++){
            if( a[j] < smallest){
                smallest = a[j];

            }
        }
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

    }


    //Print out the sorted numbers
    cout << "Your sorted numbers are: " << endl;
    for(int i = 0; i < numElements; i++){
        cout << a[i] << "  ";
    }


}
