#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Enter Char : " << endl;
    char a;
    string input;
    getline(cin,input);
    a=input[0];

    cout << "Enter Sentence : " << endl;
    getline(cin,input);
    //input

    cout << "Modified Sentence : " ;
    int i=0;
    while(i<input.size())
    {
        if(input[i] != a)
        {
            cout << input[i];
        }
        else
        {
            i = input.size();
        }
        i++;
    }
}
