#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, t, len1, len2;
    char name1[23], name2[23];
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%s", &name1);
            scanf("%s", &name2);
            len1=strlen(name1);
            len2=strlen(name2);
            if(len1!=len2)
            {
                printf("No\n");
            }
            else
            {
                for(j=0;j<len1;j++)
                {
                    if((name1[j]=='a'||name1[j]=='e'||name1[j]=='i'||name1[j]=='o'||name1[j]=='u') && (name2[j]=='a'||name2[j]=='e'||name2[j]=='i'||name2[j]=='o'||name2[j]=='u'))
                    {
                        continue;
                    }
                    else if(name1[j]==name2[j])
                    {
                        continue;
                    }
                    else
                        break;
                }
                if(len1==j)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
    }
    return 0;
}
