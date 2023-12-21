#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

typedef struct Client {
    int ingresso;
    char data[10];
    char de[20];
    char para[20];
    char tempo[5];
    int banco;
    int idade;
    char nome[50];
} Client;

void ccbuff() {
    while((getchar() != '\n') && !EOF);
}

int main() {
    Client client[44];
    int clienteonbs = 0, i;

    do {
        scanf("%d", &client[clienteonbs].ingresso);

        if (client[clienteonbs].ingresso == -1) break;

        ccbuff();
        scanf("%[^\n]", &client[clienteonbs].data);
        ccbuff();
        scanf("%[^\n]", &client[clienteonbs].de);
        ccbuff();
        scanf("%[^\n]", &client[clienteonbs].para);
        ccbuff();
        scanf("%[^\n]", &client[clienteonbs].tempo);
        ccbuff();
        scanf("%d", &client[clienteonbs].banco);
        ccbuff();
        scanf("%d", &client[clienteonbs].idade);
        ccbuff();
        scanf("%[^\n]", &client[clienteonbs].nome);
        ccbuff();
        clienteonbs++;
    } while(clienteonbs < 44);

    int avgidade = 0;
    for(i=0; i<clienteonbs; i++)
        avgidade += client[i].idade;

    if(clienteonbs != 0) 
        avgidade = avgidade/clienteonbs;

    for(i=0; i<clienteonbs; i++) {
        if ((client[i].idade > avgidade) && ((client[i].banco % 2) == 0)) {
            printf("%s\n", client[i].nome);
        }
    }
    return 0;
}
