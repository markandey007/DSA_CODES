#include <iostream>
using namespace std;
int btd(int n)
{
    int ans = 0;
    int x = 1;
    while (n != 0)
    {
        int lastdigit = n % 10;

        if (lastdigit == 1)
        {
            ans = (lastdigit * x) + ans;
        }

        n = n / 10;
        x = x * 2;
    }
    return ans;
}

int main()
{
    int number;
    cout << "Enter Number:-";
    cin >> number;
    cout << "Your number;-" << number << endl;
    cout << "decimal:-" << btd(number);
    return 0;
}