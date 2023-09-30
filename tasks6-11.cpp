#include <iostream>
#include <string>
#include "str_easy.h"

string itc_even_place(string str)
{
    string result = "";

    long long len = itc_len(str);

    if (len == 1)
        return "-1";

    for (int i = 0; i < len; i++)
    {
        if ((i + 1) % 2 == 0)
            result += str[i];
    }

    return result + '\0';
}

double itc_percent_lower_uppercase(string str)
{
    long long len = itc_len(str);
    double upper = 0;
    double lower = 0;


    for (int i = 0; i < len; i++)
    {
        if ((int(str[i]) >= 65) && (int(str[i]) <= 90))
        {
            upper++;
        }

        if ((int(str[i]) >= 97) && (int(str[i]) <= 122))
        {
            lower++;
        }
    }

    return upper / lower;
}

string itc_reverse_str(string str)
{
    long long len = itc_len(str);
    string answer;

    for (long long i = len - 1; i >= 0; i--)
    {
        answer += str[i];
    }

    return answer + '\0';
}

string itc_slice_str(string str, int start, int end)
{
    long long len = itc_len(str);
    string answer;

    if (start > end)
    {
        return str;
    }

    if (end > len - 1)
    {
        end = len - 1;
    }

    for (int i = start; i <= end; i++)
    {
        answer += str[i];
    }

    return answer + '\0';
}

bool itc_equal_reverse(string str)
{
    return (str + '\0' == itc_reverse_str(str));
}