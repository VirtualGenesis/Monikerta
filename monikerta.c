#include <stdio.h>

int main() {
    int kok1= 0;
    int kok2 = 0;

    printf("Anna kokonaisluku 1 > ");
    scanf("%d", &kok1);

    printf("Anna kokonaisluku 2 > ");
    scanf("%d", &kok2);

    if( kok1 == 0 || kok2 == 0)
        printf("Luku %d on luvun %d monikerta.", kok1, kok2);

    else if(kok1 % kok2 == 0 )
        printf("Luku %d on luvun %d monikerta.", kok1, kok2);

    else
        printf("Luku %d ei ole luvun %d monikerta.", kok1, kok2);


    return 0;
}
