#include <iostream>
using namespace std;

int generateRandomNumber()
{
    return rand() % 100;
}

int main()
{
    srand(time(0));
    int randomNumber = generateRandomNumber();
    int input;

    do
    {
        cout << "Please enter a number: ";
        cin >> input;

        if (input < randomNumber)
        {
            cout << "Please enter a higher number. " << endl;
        }
        else if (input > randomNumber)
        {
            cout << "Please enter a lower number. " << endl;
        }
        else
        {
            cout << "You guessed the number " << endl;
        }
    } while (input != randomNumber);
}