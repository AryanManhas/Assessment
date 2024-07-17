// TO Display array elements
/*#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}*/

// To find max element in list in c++

#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    int i;
    list<int> a = {247, 278, 367, 365, 465};
    int max = INT_MIN;
    for (int i : a)
    {
        if (i > max)
        {
            max = i;
        }
    }
    cout << max;
    return 0;
}
// To Count of 3 Multiples
/*
#include <iostream>
using namespace std;

void divisibleby3(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 3 == 0)
        {
            count++;
        }
        else
        {
            cout << "Invalid Input!" << endl;
        }
    }
    cout << "Count of numbers divisible by 3: " << count << endl;
}

int main()
{
    int a[100];
    int s;
    cout << "Enter the size of the array: ";
    cin >> s;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }

    divisibleby3(a, s);
    return 0;
}*/
