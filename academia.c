#include<stdio.h>
#include<string.h>
#include<locale.h>

typedef struct User {
    char nome[50];
    int senha;
    char estado;
} User;

void ccbuff() {
    while((getchar() != '\n') && !EOF);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    User cli[100];
    int senha[100], ccli = 0, countPassword = 0, i;

    do {
        scanf("%[^\n]", &cli[ccli].nome);
        
        if((strcmp(cli[ccli].nome, "SAIR") == 0)) break;

        scanf("%d", &cli[ccli].senha);
        scanf(" %c", &cli[ccli].estado);
        ccli++;
        ccbuff();
    } while(ccli < 100);

    do {
        scanf("%d", &senha[countPassword]);

        if(senha[countPassword] == -1)
            break;
        else
            countPassword++;
    } while(countPassword < 100);

    for(i=0; i<countPassword; i++) {
        if ((cli[i].senha == senha[i]) && (cli[i].estado == 'P')) {
            printf("%s, seja bem-vindo(a)!\n", cli[i].nome);
        }

        if((cli[i].senha == senha[i]) && (cli[i].estado == 'F')) {
            printf("N�o est� esquecendo de algo, %s? Procure a recep��o!\n", cli[i].nome);
        }

        if((cli[i].senha != senha[i])) {
            printf("Seja bem-vindo(a)! Procure a recep��o!\n");
        }
    }

    return 0;
}
