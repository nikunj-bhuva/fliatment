#include<stdio.h>
#include<string.h>

int main()
{

    FIRST QUESTION//

    // char str1[100];
    // char str2[100];

    // printf("enter your str1");
    // scanf("%s",&str1);

    // printf("enter your str2");
    // scanf("%s", &str2);

    // int same=strcmp(str1,str2);

    // if(same==0)
    // {
    //     printf("str1 and str2 is same");
    // }
    // else
    // {
    //     printf("str1 and str2 is not same");
    // }

    //second question//

    // char str3[]="zabxyz";

    // for(int i=5; i>=0; i--)
    // {
    //     printf("%c\n", str3[i]);
    // }

    //third question//

    // char str4[]="xyz";
    // char str5[]="abc ";

    // printf("%s",strcat(str5,str4));

    //forth question//

   char str6[100];
    printf("enter the name of str6");
    scanf("%s",&str6);

    for(int i=0; str6[i]>'\0'; i++)
    {
        printf("%c\n",str6[i]);
    }
    
    return 0;
}