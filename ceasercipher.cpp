#include<iostream>
#include<strings.h>
#include<bits/stdc++.h>
using namespace std;




int main()
{

    cout<<"enter a plain text to be ciphered : "<<endl;
    char str[1000];
        gets(str);
        int n,val;
        cout<<"enter the key:";
        cin>>n;
        int i=0;
        cout<<"the ciphered text is : ";
        while( str[i] != NULL)
        {  // cout<<str[i];
               str[i]= tolower(str[i]);
            if(str[i] == ' ' )
            {
                i++;
                cout<<" ";
                continue;

            }
            val = (int) str[i];
            cout<<(char)(((val + n - 'a') % 26)+97);
            i++;

        }
}
