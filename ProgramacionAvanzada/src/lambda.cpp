#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> maxNum = {12, 23, 44, 54, 56};

    cout << "Vector : \n";
    for (size_t i = 0; i < maxNum.size(); i++)
    {
        cout << maxNum[i];
        cout << " ";
    }

    cout << endl;

    int max = *max_element(maxNum.begin(), maxNum.end(), [](int a, int b)
                           { return a < b; });

    cout << "EL numero mayor de este vector es:  " << max << endl;
}