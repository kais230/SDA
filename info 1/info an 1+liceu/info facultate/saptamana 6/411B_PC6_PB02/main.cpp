#include <iostream>

using namespace std;

int main()
{
    int a, b, n;
    cin >> n;
    cin >> a >> b;
    n -= 2;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    while (n != 0)
    {
        cin >> b;
        while (a != b)
        {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        n--;
    }
    cout << a;
	return 0;
}
