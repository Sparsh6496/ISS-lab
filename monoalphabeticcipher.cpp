#include<bits/stdc++.h>
using namespace std;

int main()
{
 cout<<"enter a plain text to be ciphered : "<<endl;
    char str[1000];
        gets(str);
        int n,val;
        char hash[26];
        cout<<"enter the key:";
        for(int j = 0;j<25 ;j++)
        {

            cin>>hash[j];

        }
        int i=0;

        while(str[i] != NULL)
        {   str[i]= tolower(str[i]);
            if(str[i] == ' ')
            {
                i++;
                cout<<" ";
                continue;

            }
              val = (int) str[i];
            cout<< hash[val - 97] ;
            i++;

        }

}
