#include "helpers.h"
#include <iostream>

using namespace std;

bool checkIfUserWantsToContinue()
{
    cout << "do another calculator? (y/n):";
    char answer = 0;
    cin >> answer;

    return answer == 'y';
}