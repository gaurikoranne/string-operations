/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void removespaces(string& str)
{
    stringstream ss(str);
    string temp;
    str =" ";
    while(getline(ss,temp,' '))
    {
        str+=temp;
    }
    cout<<str;
}
void printwords(string& str){
        string word;
        stringstream s(str);
        std::map<string,int> freq;
        
        while(s >> word)
        {
            freq[word]++;
        cout << word <<endl;
        }
        std::map<string,int>::iterator itr;
        for(itr=freq.begin();itr!=freq.end();itr++)
    {
        cout<<itr->first<<endl;
        cout<<itr->second<<endl;
    }
}
int main()
{
    string str("This is serious is");
    removespaces(str);
    
    return 0;
}
