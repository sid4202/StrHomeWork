#include <iostream>
#include <string>

using namespace std;

string itc_hello_str(string name)
{
    return "Hello, " + name + '\0';
}

long long itc_len(string str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}


void itc_print_copy_str(string str, int number)
{
    for (int i = 0; i < number; i++)
    {
        cout << str << endl;
    }
}

void itc_first_end_three(string str)
{
    long long len = itc_len(str);

    if(len > 5)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << str[i];
        }
        for (long long i = len - 3; i < len; i++)
        {
            cout << str[i];
        }
    } else {
        for (int i = 0; i < len; i++)
        {
            cout << str[0];
        }
    }
}


int itc_count_char_in_str(char ch, string str)
{
    long long len = itc_len(str);
    int answer = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            answer++;
        } else {
            break;
        }
    }

    return answer;
}

