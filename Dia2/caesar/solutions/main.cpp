#include <cstdio>

using namespace std;

const int MAXN=100000;

int length, key, mint, totes;
char origM[MAXN+5], fakeM[MAXN+5];

char cipher(char c, int k)
{
    c+=k;
    c-='A';
    c%=26;
    c+='A';
    return c;
}

int main()
{
    scanf("%d", &length);
    scanf("%s", origM+1);
    scanf("%s", fakeM+1);

    for(int i=0; i<26; i++)
    {
        mint=0;
        for(int j=1; j<=length; j++)
            if(cipher(origM[j], i)==fakeM[j])
                mint++;
        if(mint>totes)
            totes=mint, key=i;
    }

    printf("%d\n", key);
    for(int i=1; i<=length; i++)
        printf("%c", cipher(origM[i], key));
    printf("\n");
}
