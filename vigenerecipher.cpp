#include<bits/stdc++.h>
using namespace std;

int main()
{
    char key[100] ,plain_text[10000] , enc_text[10000];
    cout<<"enter the key";
    gets(key);
    cout<<"enter the plain text u want to encrypt";
    gets(plain_text);
    int len = strlen(key);
    int text_len = strlen(plain_text);
    int key_ascii=0,plain_text_ascii = 0,enc_text_ascii = 0;
    int i = 0;
    while(i < text_len)
    {
        key_ascii = (int) key[i % len] - 97;
        plain_text_ascii = (int) plain_text[i] -97;
        enc_text_ascii = (key_ascii + plain_text_ascii) % 26;
        cout<< (char) (enc_text_ascii + 97);
        i++;
    }
}
