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

    int i=0;
    while(i<input.size())
    {
        if(input[i] == a)
        {
            input = input.substr(0,i);
            cout << "Modified Sentence : " << input;
            break;
        }
        i++;
    }

    cout << "Modified Sentence : " << input;
}