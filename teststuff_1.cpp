#include<iostream>

using namespace std;

int x = 7;

int function_x();

int main()

{

    int x = 15;

    {

      int x = 25;

      cout << x << endl;

    }

    cout << function_x() << endl;

    cout << x << endl;

    cout << ::x << endl; // we double :: because this uses the scope to find the global instead of an already changed var

}

int function_x()

{

    int x = 50;

    return x;

}
