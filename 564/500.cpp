#include <iostream>
#include <vector>

using namespace std;

class AlternateColors
{
    public:
    string getColor(long long r, long long g, long long b, long long k)
    {
        vector<string> colors;
        colors.push_back("RED");
        colors.push_back("GREEN");
        colors.push_back("BLUE");
        long long sC = 0;//最小的颜色， 0->r, 1->g, 2->b
        long long sV = r;
        if (sV > g)
        {
            sV = g;
            sC = 1;
        }
        if (sV > b)
        {
            sV = b;
            sC = 2;
        }

        
        if (k <= 3*sV)
        {
            long long se = (k-1)%3;
            return colors[se];
        }
        else
        {
            cout<<"two"<<endl;
            long long sV2 = -1;
            long long aN = 0;
            colors.clear();
            r -= sV;
            cout<<r<<endl;
            if (r != 0)
            {
                ++aN;
                sV2 = r;
                colors.push_back("RED");
            }
            g -= sV;
            cout<<g<<endl;
            if (g != 0)
            {
                ++aN;
                if (sV2 == -1)
                {
                    sV2 = g;
                }
                else if (sV2 > g)
                {
                    sV2 = g;
                }
                colors.push_back("GREEN");
            }
            b -= sV;
            cout<<b<<endl;
            
            if (b != 0)
            {
                ++aN;
                if (sV2 == -1)
                {
                    sV2 = b;
                }
                else if (sV2 > b)
                {
                    sV2 = b;
                }
                colors.push_back("BLUE");
            }
            k -= sV;
            if (aN == 1)
            {
                return colors[0];
            }
            else if (k <= 2*sV2)
            {
                long long se2 = (k-1) % 2;
                return colors[se2];
            }
            else
            {
                long long sV3 = r;
                if (sV3 < g)
                {
                    sV3 = g;
                }
                if (sV3 < b)
                {
                    sV3 = b;
                }
                if (sV3 == r)
                {
                    return "RED";
                }
                if (sV3 == g)
                {
                    return "GREEN";
                }
                if (sV3 == b)
                {
                    return "BLUE";
                }
            }
        }
    }
};

int main()
{
    AlternateColors s;
    while (true)
    {
        long long a, g, b, k;
        cin>>a>>g>>b>>k;
        cout<<s.getColor(a, g, b, k)<<endl;
    }
    return 0;
}

