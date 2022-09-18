#include<iostream>
#include<string>
using namespace std;

int main()
{
    cout << "Enter Char : " ;
    char a;
    string input;
    getline(cin,input);
    a=input[0];

    cout << "Enter Sentence : " ;
    getline(cin,input);
    //input

    const int k = input.find_first_of(a);

    input = input.substr(0,k);
    cout << "Modified Sentence : " << input;
}