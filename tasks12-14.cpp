#include <iostream>
#include <string>
#include "str_easy.h"


string itc_cmp_str(string str1, string str2, int num)
{
    string result;
    int first_len = itc_len(str1);

    for (int i = 0; i < itc_len(str1); i++)
      {
        if (i == num)
        {
          for (int j = 0; j < itc_len(str2); j++)
            {
              result += str2[j];
            }
        }
        result += str1[i];
      }
  return itc_slice_str(result, 0, first_len - 1);
}

int itc_find_str(string str1, string str2)
{
    for (int i = 0; i < itc_len(str1) - itc_len(str2) + 1; i++)
    {
        if (itc_slice_str(str1, i, i + itc_len(str2) - 1) == str2)
        {
            return i;
        }
    }
    return -1;
}

string itc_three_str(string str1, string str2, string str3)
{
    string answer = "";

    if (itc_find_str(str1, str2) == -1)
        return str1;

    while (itc_find_str(str1, str2) != -1)
    {
        int substr_pos = itc_find_str(str1, str2);

        for (int i = 0; i < substr_pos; i++)
        {
            answer += str1[i];
        }

        answer += str3;

        if (substr_pos + itc_len(str2) > itc_len(str1) - 1)
            break;

        str1 = itc_slice_str(str1, substr_pos + itc_len(str2), itc_len(str1) - 1);
    }

    if (itc_find_str(str1, str2) == - 1)
    {
        for (int i = 0; i < itc_len(str1); i++)
        {
            answer += str1[i];
        }
    }

    return answer;
}

int itc_max_char_on_end(string str)
{
  int max_char_on_end = 0;
  int n = itc_len(str);

  int current_digits_in_row = 0;

  for(int i = 1; i < n; i++)
    {
      if (str[i] >= '0' and str[i] <= '9')
        {
          current_digits_in_row++;
          if (current_digits_in_row > max_char_on_end)
            max_char_on_end = current_digits_in_row;
        }
      else
        current_digits_in_row = 0;
    }

  return max_char_on_end;
}
