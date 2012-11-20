#include <iostream>
#include <string>
#include <vector>
using namespace std;

class TheQuestionsAndAnswersDivOne
{
    public:
        int find(int questions, vector <string> answers);
};

int TheQuestionsAndAnswersDivOne::find(int questions, vector <string> answers)
{
    return 0;
}

int main()
{
    TheQuestionsAndAnswersDivOne one;

    vector <string> answers(100);
    cout<<one.find(0, answers)<<endl;

    return 0;
}

