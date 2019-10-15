#include<stdio.h>
#include<string.h>

int a,i,len,key,en;
char c,b,msg[200],enc[200],dec[200];

void encrypt();
void decrypt();

int main()
{
    //int a,i,len,key,en;
    //char c,b,msg[200],enc[200],dec[200];
    int choice;

    printf("Enter your key:\n");
    scanf("%d",&key);

    printf("\nEnter your message in small letters:\n");
    scanf("%s",msg);

    printf("To encrypt press 1\nTo decrypt press 2\n");
    scanf("%d",&choice);
    switch(choice)
    {
         case 1:
             encrypt();
             break;
         case 2:
             decrypt();

    }



}

void encrypt()
{
    len=strlen(msg);
    for(i=0;i<len;i++)
    {
        c=msg[i];
        a=c-96;
        en=(a+key)%26;
        enc[i]=en+96;

    }

   printf("\nYour encrypted message is:\n");
        printf("%s",enc);
}

void decrypt()
{
    len=strlen(msg);
    for(i=0;i<len;i++)
    {
        c=msg[i];
        a=c-96;
        en=(a-key)%26;
        enc[i]=en+96;

    }

   printf("\nYour encrypted message is:\n");
        printf("%s",enc);
}
