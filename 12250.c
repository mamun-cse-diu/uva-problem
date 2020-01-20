#include<stdio.h>
#include<string.h>
int main()
{
    char i[20],str1[20];
    int j=1;
    while(1){
        scanf("%s",&i);
        if(strcmp(i,"#")==0){
            break;
        }
        else if(strcmp(i,"HELLO")==0){
            printf("Case %d: ENGLISH\n",j);
        }
        else if(strcmp(i,"HOLA")==0){
            printf("Case %d: SPANISH\n",j);
        }
        else if(strcmp(i,"HALLO")==0){
            printf("Case %d: GERMAN\n",j);
        }
        else if(strcmp(i,"BONJOUR")==0){
            printf("Case %d: FRENCH\n",j);
        }
        else if(strcmp(i,"CIAO")==0){
            printf("Case %d: ITALIAN\n",j);
        }
        else if(strcmp(i,"ZDRAVSTVUJTE")==0){
            printf("Case %d: RUSSIAN\n",j);
        }
        else{
            printf("Case %d: UNKNOWN\n",j);
        }
    j++;

    }
    return 0;
}
