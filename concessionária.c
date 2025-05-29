#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char nome[50], marca[30], modelo[30], cor[15];
	float valor;
	int ano, id, combus;
} Carro;

Carro carros[10];

int numCarro=0;
int numId=1;

void cadastrarVeiculo();
void listarVeiculos();
void filtrarCombust();
void buscarVeiculo();

int main() {
    setlocale(LC_ALL,"");
	int op;

	do {
		printf("\n-----  Concessionária  -----\n\n");
		printf("1. Cadastrar veículos\n");
		printf("2. Listar veículos\n");
		printf("3. Filtrar por tipo de combustível\n");
		printf("4. Buscar veículo\n");
		printf("0. Sair\n");
		printf("Selecione uma opção: ");
		scanf("%d",&op);

		system("clear");//linux
		//system("cls");windows

		switch(op) {
		case 1:
			cadastrarVeiculo();
			break;

		case 2:
			listarVeiculos();
			break;

		case 3:
			filtrarCombust();
			break;

		case 4:
			buscarVeiculo();
			break;

		case 0:
			printf("\nObrigado!\n");
			break;

		default:
			printf("\nOpção inválida.\n");
			break;
		}
		printf("Enter para continuar ...");
		getchar();
		getchar();
		system("clear");
	} while(op!=0);

	return 0;
}

//" %[^\n]"
void cadastrarVeiculo() {
	printf("\n-----  Novo Veículo  -----\n");
	printf("Marca do veículo: ");
	scanf(" %[^\n]",carros[numCarro].marca);
	printf("Modelo do veículo: ");
	scanf(" %[^\n]",carros[numCarro].modelo);
	printf("Cor: ");
	scanf(" %[^\n]",carros[numCarro].cor);
	printf("Ano: ");
	scanf("%d",&carros[numCarro].ano);
	printf("Valor: ");
	scanf("%f",&carros[numCarro].valor);
	printf("Id do veículo: ");
	scanf("%d",&carros[numCarro].id);
	printf("Tipo de combustível: ");
	scanf(" %d",&carros[numCarro].combus);
	numId++;
	numCarro++;
}

void listarVeiculos() {
	int listaVeiculo=0;
	printf("\n-----  Listar Veículos  -----\n");
	for(int i=0; i<numCarro; i++) {
		printf("Modelo: %s\n",carros[i].modelo);
		printf("Marca: %s\n",carros[i].marca);
		printf("Id: %d\n",carros[i].id);
		printf("Ano: %d\n",carros[i].ano);
		printf("Cor: %s\n",carros[i].cor);
		printf("Valor: %.2f\n",carros[i].valor);
		printf("Combustível: ");
		if(carros[i].combus == 1) printf("Etanol\n");
		else if(carros[i].combus == 2) printf("Gasolina\n");
		else if(carros[i].combus == 3) printf("Flex\n");
		else if(carros[i].combus == 4) printf("Elétrico\n");
		printf("\033[35m");//habilita cor
		printf("---------------------------\n");
		printf("\033[0m");//desabilita cor
	}
}

void filtrarCombust() {
	int c, i;
	printf("\n-----  Filtar por combustível  -----\n");

	do {
		printf("1. Etanol\n");
		printf("2. Gasolina\n");
		printf("3. Flex\n");
		printf("4. Elétrico\n");
		printf("0. Sair\n");
		scanf("%d",&c);

		for(i=0; i<numCarro; i++) {
			if(carros[i].combus == c) {
			    printf("Modelo: %s\n",carros[i].modelo);
                printf("Marca: %s\n",carros[i].marca);
                printf("Id: %d\n",carros[i].id);
                printf("Combustível: ");
                if(carros[i].combus == 1) printf("Etanol\n");
		        else if(carros[i].combus == 2) printf("Gasolina\n");
		        else if(carros[i].combus == 3) printf("Flex\n");
		        else if(carros[i].combus == 4) printf("Elétrico\n");
                printf("\033[35m");//habilita cor
                printf("---------------------------\n");
                printf("\033[0m");//desabilita cor
			}
		}
	}while(c!=0);

}

void buscarVeiculo() {
    int id;
	printf("\n-----  Buscar Veículo  -----\n");

	printf("Id do carro: ");
	scanf("%d",&id);
	getchar();
	system("clear");

	for(int i=0; i<numCarro; i++) {
		if(carros[i].id == id) {
		    printf("\033[35m");//habilita cor
		    printf("Id: %d\n",carros[i].id);
			printf("\033[0m");//desabilita cor
			printf("Modelo: %s\n",carros[i].modelo);
			printf("Marca: %s\n",carros[i].marca);
			printf("Ano: %d\n",carros[i].ano);
		    printf("Cor: %s\n",carros[i].cor);
		    printf("Valor: %.2f\n",carros[i].valor);
		    printf("Combustível: ");
		    if(carros[i].combus == 1) printf("Etanol\n");
		    else if(carros[i].combus == 2) printf("Gasolina\n");
		    else if(carros[i].combus == 3) printf("Flex\n");
		    else if(carros[i].combus == 4) printf("Elétrico\n");
			printf("\033[35m");//habilita cor
			printf("---------------------------\n");
			printf("\033[0m");//desabilita cor
		}
		else if(carros[i].id != id){
	      printf("Veículo de id %d não encontrado.\n",id);
		}
	}

}

