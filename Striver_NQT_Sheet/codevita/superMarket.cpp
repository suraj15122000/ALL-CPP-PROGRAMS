#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int m;

    cin >> n >> m;

    vector<pair<int, int>> bags;     
    vector<pair<int, int>> customers;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        customers.push_back(make_pair(x, y));
    }

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        bags.push_back(make_pair(x, y));
    }

    int count = 0;

    vector<int> alreadyServed;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((find(alreadyServed.begin(), alreadyServed.end(), j) != alreadyServed.end()))
            {
                continue;
            }
            if (bags[j].first >= customers[i].first && bags[j].second < customers[i].second)
            {
                count++;
                bags.erase(bags.begin() + j);
                customers.erase(customers.begin() + i);
                alreadyServed.push_back(j);
                break;
            }
        }
    }

    cout << count << endl;
}