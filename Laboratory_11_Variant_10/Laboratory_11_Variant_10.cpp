/*
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter value a\n";
    cin >> a;
    cout << "Enter value b\n";
    cin >> b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    temp = *pa;
    a = *pb;
    b = temp;
    cout << "A = " << a << " B = " << b;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    string temp;
    string* pa = new string;
    string* pb = new string;
    string* pc = new string;
    cin >> *pa;
    cin >> *pb;
    cin >> *pc;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    cout << *pa << " " << *pb << " " << *pc;
    delete pa, pb, pc;
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
    int n, temp, max, sum = 0;
    int* p = 0;
    cin >> n;
    int* a = new int[n];
    cout << "List of numbers:\n";
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 25 - 10;
        cout << a[i] << "   ";
        if (a[i] > 0)
        {
            max = a[i];
            p = &a[i];
        }
        if (a[i] < 0)
        {
            sum = sum + a[i];
        }
    }
    temp = *p;
    *p = a[0];
    a[0] = temp;
    cout << endl;
    for (int i = 0; i < n;i++)
    {
        cout << a[i] << "   ";
    }
    cout << endl << "Sum = " << sum;
}
*/
