#include <iostream>
#include <string>
using namespace std;

class FauxPalindromes
{
    public:
        bool isP(string word)
        {
            int left, right;
            int len = word.length();
            if (len % 2 == 0)
            {
                right = len / 2;
                left = right-1;
            }
            else
            {
                right = left = len / 2;
            }
            
            while (left >= 0)
            {
                if (word[right] != word[left])
                {
                    return false;
                }

                --left;
                ++right;
            }


            return true;
        }

        string Fauxit(string word)
        {
            string ret;
            ret += word[0];

            for (int i = 1; i < word.length(); ++i)
            {
                if (word[i] != word[i-1])
                {
                    ret += word[i];
                }
            }

            return ret;
        }

        string classifyIt(string word)
        {
            if (isP(word) == true)
            {
                return "PALINDROME";
            } 
            else
            {
                word = Fauxit(word);
                if (isP(word) == true)
                {
                    return "FAUX";
                }
                else
                {
                    return "NOT EVEN FAUX";
                }
            }
                    
            return "NOT EVEN FAUX";
        }
};

int main()
{
    string str;
    FauxPalindromes s;
    while (cin>>str)
    {
        cout<<s.classifyIt(str)<<endl;
    }
    return 0;
}
