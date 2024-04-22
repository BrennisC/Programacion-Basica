#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> numb = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int threshold = 3;

    for_each(numb.begin(), numb.end(), [&](int num)
             {
        if(num > threshold){
            cout << num << endl;
        } });

    return 0;
}