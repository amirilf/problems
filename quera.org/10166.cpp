#include <iostream>

using namespace std;

int main()
{

    char keyvoon_list[6] = {'3', '3', '1', '1', '2', '2'};
    char nezam_list[3] = {'1', '2', '3'};
    char shirfarhad_list[4] = {'2', '1', '2', '3'};

    int scores[3] = {0, 0, 0};
    string names[3] = {"keyvoon", "nezam", "shir farhad"};

    int n;
    cin >> n;

    string results;
    cin >> results;

    for (int i = 0; i < n; i++)
    {
        if (results[i] == keyvoon_list[i % 6])
            scores[0]++;
        if (results[i] == nezam_list[i % 3])
            scores[1]++;
        if (results[i] == shirfarhad_list[i % 4])
            scores[2]++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (scores[i] < scores[j])
            {
                // swaping scores (sorting)
                int tmp_int = scores[i];
                scores[i] = scores[j];
                scores[j] = tmp_int;

                // swaping related guys with those scores
                string tmp_str = names[i];
                names[i] = names[j];
                names[j] = tmp_str;
            }
        }
    }

    // biggest score since we sorted it before
    cout << scores[0] << endl;

    // first item is always right
    cout << names[0] << endl;

    // maybe other guys are the same
    for (int i = 1; scores[i] == scores[i - 1] && i < 3; i++)
        cout << names[i] << endl;

    return 0;
}
