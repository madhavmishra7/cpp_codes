#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char n[][20] = {"RAJU","KAMAL","KHUSHI","ORANGE"};

    char key[20];

    int size = sizeof(n) / sizeof(n[0]);

    cout << "Enter name to search: ";
    cin >> key;

    int pos = -1;

    for(int i = 0; i < size; i++)
    {
        if(strcmp(n[i], key) == 0)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
        cout << "Found at index " << pos;
    else
        cout << "Not Found";

    return 0;
}
