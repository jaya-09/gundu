

#include<stdio.h>
#include<string.h>
int main()
{
    char ch,arr[100],flag[100]=" ",temp[100]=" ";
    int counter=0,j=0,i=0;
    printf("enter the bit string:");
    scanf("%s",arr);
    strcat(flag,"-01111110-");
    
    if(strlen(arr)<5)
    {
        strcat(arr,flag);
        strcat(flag,arr);
        printf("the bits after stuffing  %s",flag);
    }
    
    
    else
    {
        while((ch=arr[j])!='\0')
        {
            if(ch=='1') ++counter;
            else counter=0;
            temp[i++]=ch;
            if(counter==5)
            {
                temp[i++]='0';
                counter=0;
            }
            j++;
        }
        temp[i]='\0';
        strcat(temp,flag);
        strcat(flag,temp);
        printf("The bits after stuffing %s",flag);
    }
    return 0;
}
