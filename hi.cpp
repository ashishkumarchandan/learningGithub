#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int product(int a, int b)
{
    return a * b;
}
int diff(int a, int b){
    return a-b;
}

int main()
{
    cout << "helloWorld";
    cout << "my name is Ashish";
    cout << "i am the best";
    cout << '\n';
    cout << sum(1, 2) << '\n'
         << product(3, 4) << '\n';
    return 0;
}