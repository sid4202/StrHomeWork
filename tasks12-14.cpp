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
    string answer;

    while (itc_find_str(str1, str2) != -1)
    {
        int substr_pos = itc_find_str(str1, str2);

        int str3_index = 0;

        for (int i = 0; i < itc_len(str1); i++)
        {
           if (i >= substr_pos and i <= substr_pos + itc_len(str2) - 1)
           {
               if (str3_index <= itc_len(str3) - 1)
               {
                   answer += str3[str3_index];
                   str3_index++;
               } else {
                   answer += str1[i];
               }
           } else {
               answer += str1[i];
           }
        }
    }

    return answer;
}
