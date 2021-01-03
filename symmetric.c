#include <stdio.h>
int main()
{
    //key=3
    int x, key;
    printf("\nPlease choose among following options:\n");
    printf("1 = Encrypt the message.\n");
    printf("2 = Decrypt the message.\n");
    scanf("%d", &x);
    printf("\nPlease enter the key:\t");
    scanf("%d", &key);
    if (key==3){
        int i;
        char str[100];
        printf("\nPlease enter a message:\t");
        scanf("%s", &str);
        switch(x)
        {
        case 1:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] + key;
            printf("\nEncrypted message: %s\n", str);
            break;
        case 2:
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] - key;
            printf("\nDecrypted message: %s\n", str);
            break;
        default:
            printf("\nError\n");
        }
    }
    else printf("\nError\n");
    return 0;
}
