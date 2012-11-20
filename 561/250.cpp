#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class FoxAndVacation 
{
    public:
        int maxCities(int total, vector<int> d);
};

int FoxAndVacation::maxCities(int total, vector<int> d)
{
    sort(d.begin(), d.end());
    int num;

    for (num = 0; num < d.size(); ++num)
    {
        if (total >= d[num])
        {
            total -= d[num];
        }
        else
        {
            break;
        }
    }

    return num;
}
/*
int main()
{
    vector<int> d;
    d.push_back(5);
    d.push_back(6);
    d.push_back(1);
    FoxAndVacation fav;
    cout<<fav.maxCities(5, d)<<endl;
    return 0;
}*/

