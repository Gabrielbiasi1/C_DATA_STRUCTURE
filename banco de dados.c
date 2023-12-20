#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct usuario {
	int idade;
	char nome[50];
	char gender;
	char SouC;
	int amigos;
	int fotos;
} usuario;

void ccbuff() {
	while ((getchar() != '\n') && !EOF);
}

usuario rusuario() {
	usuario usuario;

	scanf("%d", &usuario.idade);
	ccbuff();
	scanf("%[^\n]", &usuario.nome);
	ccbuff();
	scanf(" %c", &usuario.gender);
	ccbuff();
	scanf(" %c", &usuario.SouC);
	ccbuff();
	scanf("%d", &usuario.amigos);
	ccbuff();
	scanf("%d", &usuario.fotos);
	ccbuff();

	return usuario;
}

void usuario(usuario usuario) {
	printf("Idade: %d\n", usuario.idade);
	printf("Nome: %s\n", usuario.nome);
	printf("Sexo: %c\n", usuario.gender);
	printf("Estado Civil: %c\n", usuario.SouC);
	printf("Numero de amigos: %d\n", usuario.amigos);
	printf("Numero de fotos: %d", usuario.fotos);
}

int main() {
	usuario *ptrusuario, usuario;
	ptrusuario = &usuario;

	int usuarioQuantity, i=0;
	scanf("%d", &usuarioQuantity);

	usuario *arrayusuario = malloc(usuarioQuantity*sizeof(usuario));

	ccbuff();

	for(i=0; i<usuarioQuantity; i++) 
		arrayusuario[i] = rusuario();

	for(i=0; i<usuarioQuantity; i++) {
		usuario(arrayusuario[i]);
		if (i == usuarioQuantity-1) printf("\n");
		else printf("\n\n");
	}

    return 0;
}