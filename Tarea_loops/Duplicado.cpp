#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicates(vector<int> numbers)
{
    vector<int> uniqueNumbers;

    for (int number : numbers)
    {
        bool isDuplicate = false;

        for (int uniqueNumber : uniqueNumbers)
        {
            if (uniqueNumber == number)
            {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate)
        {
            uniqueNumbers.push_back(number);
        }
    }

    return uniqueNumbers;
}

int main()
{
    vector<int> numbers = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6, 7, 8, 8, 9, 10};
    vector<int> uniqueNumbers = removeDuplicates(numbers);

    cout << "Vector original: ";
    for (int number : numbers)
    {
        cout << number << " ";
    }

    cout << "\nVector sin duplicados: ";
    for (int number : uniqueNumbers)
    {
        cout << number << " ";
    }

    return 0;
}