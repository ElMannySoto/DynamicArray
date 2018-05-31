#include <iostream>

using namespace std;

int main()
{
    // Array size determined by user
    int intNumOfArrayElements = 0;

    // Variable for storing dynamic array's address
    int* intPtrArray = nullptr;

    cout << "How many elements do you want in the array: ";
    cin >> intNumOfArrayElements;

    // Allocate memory for dynamic array
    intPtrArray = (int*)malloc(intNumOfArrayElements*sizeof(int));

    for(int i=0;i<intNumOfArrayElements;i++){
        cout << "Enter value: ";
        cin >> intPtrArray[i];
    }

    for(int i=0;i<intNumOfArrayElements;i++){
        cout << "intPtrArray[" << i << "] = " << intPtrArray[i] << endl;
    }

    for(int i=0;i<intNumOfArrayElements;i++){
        free(intPtrArray);
        intPtrArray = nullptr;
    }

    return 0;
}
