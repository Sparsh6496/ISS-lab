#include<bits/stdc++.h>
using namespace std;



int main()
{

pair <char,int> str[1000];
cout<<"enter the key :";

char key[26];
cin>>key;

char str1[1000];
cout<<"enter the string to be ciphered: ";
cin>>str1;

int len = strlen(str1);
int i=0;
int lenkey =strlen(key);

int n = ceil(len / lenkey);

int r = lenkey - (len%lenkey);
 
for(i=0;i<r;i++)
{
str1[len + i] = '*';

}

cout<<str1;

}
