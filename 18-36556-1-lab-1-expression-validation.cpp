#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "a=b+c-d*e/f+6-d*3+=.20";
    //cin>>s;
    //string s = "a=b+c";

    int n = s.length();

    int countTotalAssignment = 0;
    int error = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '=' && s[i + 1] != '\0' && s[i + 1] != '.')
        {
            countTotalAssignment++;
        }
    }

    if (countTotalAssignment == 1)
    {

        for (int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {
                if (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/' && s[i] != '%' && s[i] != '=.')
                {

                    if ((int(s[i]) >= int('a') && int(s[i]) <= int('z')) ||
                        (int(s[i]) >= int('A') && int(s[i]) <= int('Z')) ||
                        (int(s[i]) == int('_')))
                    {
                    }
                    else
                    {
                        int j = i;
                        while (s[j + 1] != '\0' && (s[j + 1] != '+' && s[j + 1] != '-' && s[j + 1] != '*' && s[j + 1] != '/' && s[j + 1] != '%' && s[j + 1] != '=.'))
                        {
                            if (
                                (int(s[j + 1]) >= int('a') && int(s[j + 1]) <= int('z')) ||
                                (int(s[j + 1]) >= int('A') && int(s[j + 1]) <= int('Z')) ||
                                (int(s[j + 1]) == int('_')))
                            {
                                cout << s[j] << s[j + 1] << " "
                                     << " is Invalid Expression" << endl;
                                error++;
                                break;
                            }
                            else
                            {
                            }
                            j++;
                        }
                    }
                }

                else
                {
                    cout << "Invalid Expression";
                    error++;
                    break;
                }
            }

            else
            {
            }
        }

        if (error == 0)
        {
            cout << "No Error" << endl;
        }
    }

    else
    {
        if (countTotalAssignment > 1)
        {
            cout << "More than 2 assignment operator";
        }
        else
        {
            cout << "No assignment operator";
        }
    }
}
