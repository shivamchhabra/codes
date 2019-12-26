#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void chars(int i, char enpass[60])
{
    switch(i)
    {
        case 1:
        strcat(enpass, "!");
        break;
        case 2:
        strcat(enpass, "@");
        break;
        case 3:
        strcat(enpass, "#");
        break;
        case 4:
        strcat(enpass, "$");
        break;
        case 5:
        strcat(enpass, "%");
        break;
        case 6:
        strcat(enpass, "^");
        break;
        case 7:
        strcat(enpass, "&");
        break;
        case 8:
        strcat(enpass, "*");
        break;
        case 9:
        strcat(enpass, "(");
        break;
        case 0:
        strcat(enpass, ")");
        break;
    }
}
void encryption(char pass[20])
{
    int i=0;
    char enpass[60]="";
    while(pass[i]!='\0')
    {
        int en=pass[i++];
        int i,j,k;
       if (en>=100)
       {
         i=en/100;
         en=en%100;
       }
       else
        {
        i=0;
       }
      if(en>=10)
       {
         j=en/10;
         en=en%10;
       }
       else
       {
           j=0;
       }
       k=en;

      chars(i, enpass);
      chars(j, enpass);
      chars(k, enpass);

    }
    printf("Your Encrypted password is\n%s\n", enpass);
    strcpy(pass, enpass);

}
int dechars(char ch)
{
    switch(ch)
    {
     case '!':
        return 1;
        break;
     case '@':
        return 2;
        break;
     case '#':
        return 3;
        break;
     case '$':
        return 4;
        break;
     case '%':
        return 5;
        break;
     case '^':
        return 6;
        break;
     case '&':
        return 7;
        break;
     case '*':
        return 8;
        break;
     case '(':
        return 9;
        break;
     case ')':
        return 0;
        break;

    }

}
void decription(char enpass[60])
{
    char depass[60]="";
    int l=0;
    while(enpass[l]!='\0')
    {

       int i=dechars(enpass[l++]);
       int j=dechars(enpass[l++]);
       int k=dechars(enpass[l++]);
       int itoc=k;
       itoc=i*100+j*10+k;
       char ch=itoc;
       strncat(depass, &ch,1);
    }
    printf("decoded password is %s\n", depass);



}




int main()
{
    int j,k;
    char pass[60]="", id[20],ch='s';
    printf("Enter your Id\n");
    scanf("%s", & id);
    printf("Enter your password\n");
    scanf("%s", & pass);
    //printf("\nid:%s pass:%s\n", id, pass);
    encryption(pass);
    decription(pass);



}
