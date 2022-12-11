///problem 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int match=0;
    string text;
    string prev;
    string NEW;
    cout<<"Insert the main Text: ";
    getline(cin,text);
    cout<<"Inset the text which has to be delete: ";
    getline(cin,prev);
    int s=prev.size();
    for(int i=0; i<text.size(); i++)
    {
        int success=1;
        for(int j=0; j<s; j++)
        {
            if(text[i+j]==prev[j])
            {
                continue;
            }
            else
            {
                success=0;
                break;
            }
        }
        if(success==1)
        {
            int len=prev.size();
            if(text[i-1]==' ')
            {
                while(len--)
                    text.erase(text.begin()+i);
                match=1;
            }
        }
    }
    if(!match)
        cout<<"No matching found."<<endl;
        cout<<"Final string: "<<text<<endl;
}
