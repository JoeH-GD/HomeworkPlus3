// HomeworkPlus3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

extern const int a;
extern const int b;
extern const int c;
extern const int d;



int main()
{
    float result;
   
    result = float(a) * (b + (float(c) / float(d)));
    cout << result << std::endl;

    int userNumber;
    int difference;
    std::cout << "enter any integer number: ";
    std::cin >> userNumber;

    difference = (userNumber <= 21) ? 21 - userNumber : (userNumber - 21) * 2;
    std::cout << difference<<endl;


    int arr[3][3][3], * ptr;
    int numbers = 4;
    ptr = &arr[0][0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                arr[i][j][k] = numbers++;
                std::cout << arr[i][j][k]<<" ";
            }
        }
    }
    
    std::cout << endl;
    std::cout<< *(ptr+13);
        

}
