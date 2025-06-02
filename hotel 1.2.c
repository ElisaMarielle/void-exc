//hotel

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//struct hotel
typedef struct{
    char nome[40], cpf[15], rg[15], tel[15], email[30], dtnasc[12];
} Cadastro;

//struct hospedes
typedef struct {
    int quarto;
} Hospede;

typedef struct{
    int numpess, dias;
    float total;
} ChI;

typedef struct{
    char cartao[25], dtvenc[12], nseg[3];
} Cartao;


//----------------------------------------

Cadastro geral[10];
int numCad=0; //contador de cadastro

ChI reg[10];
int Reg=0;

Cartao cd[10];
int Card=0;

Hospede hosp[50];
int numCI=0; //contador do quarto

void fazerCad();
void regQuarto();
void fazerPag();
//void solicServ();
//void fazerPed();

int main(){
    setlocale(LC_ALL,"");
    int menu, op;
    
    do{
        printf("\n1. Menu inicial \n");
        printf("2. Sobre o hotel\n");
        printf("0. Sair\n");
        scanf("%d",&menu);
        
        switch(menu){
            case 1:
             printf("\033[35m");
             printf("\n  Bem vindo ao Hotel Perky! \n");
             printf("\033[0m");
             printf("\n   Em que podemos ajudar? \n");
             printf("\nSelecione uma opção: \n");
             printf("\n1. Fazer Check-In\n");
             printf("2. Solicitar serviço de quarto\n");
             printf("3. Fazer pedido\n");
             printf("0. Sair\n");
             printf(" ");
             scanf("%d",&op);
             getchar();
             system("clear");
             
              switch(op){
                case 1:
                  regQuarto();
                  break;
                case 2:
                  //void solicServ();
                  break;
                case 3:
                  //void fazerPed();
                  break;
                case 0:
                  printf("\nSaindo. . .\n");
                  break;
                default:
                  printf("\nOpção inválida.\n");
                  break;
              }
             
            case 2:
            
            case 0:
            
            default:
        }
        
        printf("Enter para continuar.");
        getchar();
        getchar();
        system("clear");
        
    }while(menu!=0);
    
    return 0;
}

void fazerCad(){
    printf("\033[35m");
    printf("\n  --- Check-In --- \n");
    printf("\033[0m");
    
    printf("Digite seu nome completo: ");
    scanf(" %[^\n]",geral[numCad].nome);
    printf("Digite sua data de nascimento: ");
    scanf(" %[^\n]",geral[numCad].dtnasc);
    printf("Digite seu cpf: ");
    scanf(" %[^\n]",geral[numCad].cpf);
    printf("Digite seu rg: ");
    scanf(" %[^\n]",geral[numCad].rg);
    printf("Digite seu número de telefone: ");
    scanf(" %[^\n]",geral[numCad].tel);
    printf("Digite seu e-mail: ");
    scanf(" %[^\n]",geral[numCad].email);
    
    printf("\nCadastro feito com sucesso.\n");
    
    numCad++;
    
}

void fazerPag(){
    int pg;
    
    printf("1. Cartão de Débito\n");
    printf("2. Cartão de Crédito\n");
    printf("0. Sair\n");
    printf(" ");
    scanf("%d",&pg);
    
    switch(pg){
        case 1:
          printf("Digite o número do cartão: ");
          scanf(" %[^\n]",cd[Card].cartao);
          printf("Digite a data de vencimento: ");
          scanf(" %[^\n]",cd[Card].dtvenc);
          printf("Digite o número de segurança: ");
          scanf(" %[^\n]",cd[Card].nseg);
          
          printf("\nPagamento feito com sucesso.\n");
          break;
        case 2:
          printf("Digite o número do cartão: ");
          scanf(" %[^\n]",cd[Card].cartao);
          printf("Digite a data de vencimento: ");
          scanf(" %[^\n]",cd[Card].dtvenc);
          printf("Digite o número de segurança: ");
          scanf(" %[^\n]",cd[Card].nseg);
          
          printf("Pagamento feito com sucesso.\n");
          break;
        case 0:
          printf("Compra cancelada. Tente novamente em outro momento.\n");
          break;
        default:
          printf("\nOpção inválida.\n");
          break;
    }
}

void regQuarto(){
    int q, i;
    float total;
    
    fazerCad();
    
    printf("Quantas pessoas irão se hospedar?: ");
    scanf("%d",&reg[Reg].numpess);
    
    //do{
      //  printf("\033[31m");
        //printf("\nInválido.\n");
        //printf("\033[0m");
    //}while(reg[i].numpess<=0 && reg[i].numpess==0);
    
    printf("Quandos dias de hospedagem?: ");
    scanf("%d",&reg[Reg].dias);
    
    //do{
     //   printf("\033[31m");
     //   printf("\nInválido.\n");
     //   printf("\033[0m");
    //}while(reg[i].dias<=0 && reg[i].dias==0);
    
    
    printf("\n --- Escolha um quarto: --- \n");
    printf("1- Cama de solteiro com banheiro e televisão - $80 Reais\n");
    printf("2- Cama de casal com banheiro e televisão - $100 Reais\n");
    printf("3- 1 cama de casal, 1 cama de solteiro, com banheiro, televisão e frigobar - $250 Reais\n");
    printf("4- 1 cama de casal, 1 beliche, 1 cama de solteiro, com banheiro, televisão e frigobar - $400 Reais\n");
    printf(" ");
    scanf("%d",&q);
    getchar();
    system("clear");
    
    switch(q){
        case 1:
          printf("Você escolheu a primeira opção: Quarto para uma pessoa.\n");
          
          total=80*reg[Reg].dias;
          
          printf("Total: $ %.2f Reais\n",total);
          printf("Pressione enter para continuar e fazer o pagamento.\n");
          getchar();
          getchar();
          system("clear");
          
          fazerPag();
          
          printf("\nNúmero do quarto: %d",hosp[numCI].quarto+ 1);
          numCI++;
          
          break;
        case 2:
          printf("Você escolheu a segunda opção: Quarto para duas pessoas.\n");
          
          reg[Reg].total=100*reg[i].dias;
          
          printf("Total: $ %.2f Reais\n",reg[Reg].total);
          printf("Pressione enter para continuar e fazer o pagamento.\n");
          getchar();
          getchar();
          system("clear");
          fazerPag();
          
          printf("\nNúmero do quarto: %d",hosp[numCI].quarto+ 1);
          numCI++;
          
          break;
        case 3:
          printf("Você escolheu a terceira opção: Quarto para três pessoas.\n");
          
          reg[Reg].total=250*reg[i].dias;
          
          printf("Total: $ %.2f Reais\n",reg[Reg].total);
          printf("Pressione enter para continuar e fazer o pagamento.\n");
          getchar();
          getchar();
          system("clear");
          fazerPag();
          
          printf("\nNúmero do quarto: %d",hosp[numCI].quarto+ 1);
          numCI++;
          
          break;
        
        case 4:
          printf("Você escolheu a primeira opção: Quarto para até cinco pessoas.\n");
          
          reg[Reg].total=400*reg[i].dias;
          
          printf("Total: $ %.2f Reais\n",reg[Reg].total);
          printf("Pressione enter para continuar e fazer o pagamento.\n");
          getchar();
          getchar();
          system("clear");
          fazerPag();
          
          printf("\nNúmero do quarto: %d",hosp[numCI].quarto+ 1);
          numCI++;
          
          break;
        
        default:
          printf("\nOpção inválida.\n");
          break;
    }
    
    Reg++;
    
}


void solicServ(){
    printf("\033[35m");
    printf("\n  --- Check-In --- \n");
    printf("\033[0m");
    
    int sv;
    
    printf("1. Limpeza\n");
    printf("2. Lavanderia\n");
    printf("3. Camareira\n");
    printf("4. Produtos de higiene\n");]
    printf(" ");
    scanf("%d",&sv);
    
    switch(sv){
        case 1:
        
        case 2:
        
        case 3:
        
        case 4:
    }
}







