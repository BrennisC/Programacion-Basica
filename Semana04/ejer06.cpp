#include <iostream>
using namespace std;
int main()
{
    int n1, n2, op, answer;
    do
    {
        cout << "Input you numbers";
        cin >> n1, n2;

        answer = n1 + n2;
        cout << "The sun of " << n1 << " + " << n2 << answer << endl;

        cout << "Do you ";
        cin >> op;
        
    } while (op == 's');
    cout << "see you soon!!";

    return 0;
}