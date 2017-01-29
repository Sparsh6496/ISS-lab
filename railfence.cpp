#include<bits/stdc++.h>
using namespace std;

int main()
{
char str[1000];
int key;
cout<<"enter the string to be ciphered :";
cin>>str;

cout<<"enter the key :";
cin>>key;
 
key = key-1;

int len = strlen(str);

int col = ceil(len/(2*key));

int i,j;
for( i =0 ; i<=key ; i++)
{
	for(j=0 ;j<=col;j++)
		{
		  if(i == 0)
			{
				if(str[j*key])
				{
					cout<<str[2*j*key];
				}
				continue;
			}
		else if(i == key){
					if(str[2*key*j + key ])
				{
					cout<<str[2*key*j + key];
				}
			}
		else
			{
				if(str[2*j*key -key +i])
				{
				   cout<<str[2*j*key - key +i];

				}
				if(str[j*2*key -i])
				{
				  cout<<str[j*2*key -i];
				}
			}
		}

}

}
