#include <iostream>
using namespace std;

int main()
{
    char input[200], output[100];
    int i, j = 0, count = 0;

    cout << "Enter Stuffed Bit Stream: ";
    cin >> input;

    for(i = 0; input[i] != '\0'; i++)
    {
        output[j] = input[i];
        j++;

        if(input[i] == '1')
        {
            count++;

            if(count == 5)
            {
                i++;          
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }

    output[j] = '\0';

    cout << "Stuffed Bit Stream : " << input << endl;
    cout << "Original Bit Stream: " << output << endl;

    return 0;
}