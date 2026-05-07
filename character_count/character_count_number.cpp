#include<iostream>
using namespace std;
int main()
{
    string text ="EXIM BANK AGRICULTURAL UNIVERSITY";
    int counter[26]={0};

    for(int i=0;text[i];i++)
    {
        counter[text[i]-'A']++;
    }
    for(int i=0;i<=25;i++)
    {
        
        cout<<(char)(i+'A')<<counter[i] <<endl;

    }
    return 0;
}