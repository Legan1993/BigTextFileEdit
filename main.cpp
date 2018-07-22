#define lenline 64

#include<cstdio>
#include<cstring>

int main()
{
    char line[lenline];
    char chrFind[] = {"FindMe\n"};
    FILE * h;
    h = fopen("TextFile.txt", "r");
    if (h==NULL)
    {
        printf("Error open file!");
        return 1;
    }

    for (unsigned long long int i=0; fgets(line,lenline,h); i++)
    {
        if (strcmp(line,chrFind) == 0)
        {
            printf("Find! %lld %s\n", i, line);
        }
    }

    return 0;
}
