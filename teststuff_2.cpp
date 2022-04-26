#include<iostream>

using namespace std;

float calculate(float, float);

int main()

{
    int rate = 0.05;
    int calculate = 1000 * 0.05;
    cout << calculate << endl;

}

float calculate(float rate, float investment)

{

    return rate * investment;

}
