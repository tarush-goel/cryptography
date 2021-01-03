#include <stdio.h>
int main()
{
    //public key=2, private key=5
    int x, pukey, prkey;
    printf("\nPlease choose among following options:\n");
    printf("1 = Encrypt the message.\n");
    printf("2 = Decrypt the message.\n");
    scanf("%d", &x);
    switch(x)
    {
    case 1:
        printf("\nPlease enter the public key:\t");
        scanf("%d", &pukey);
        if (pukey==2){
            int i;
            char str[100];
            printf("\nPlease enter a message:\t");
            scanf("%s", &str);
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] + (pukey*5);
            printf("\nEncrypted message: %s\n", str);
            break;
        }
        else {
            printf("\nError\n");
            break;
        }
    case 2:
        printf("\nPlease enter the private key:\t");
        scanf("%d", &prkey);
        if (prkey==5){
            int i;
            char str[100];
            printf("\nPlease enter a message:\t");
            scanf("%s", &str);
            for(i = 0; (i < 100 && str[i] != '\0'); i++)
                str[i] = str[i] - (prkey*2);
            printf("\nDecrypted message: %s\n", str);
            break;
        }
        else {
            printf("\nError\n");
            break;
        }
    default:
        printf("\nError\n");
    }
    return 0;
}
