#include <stdio.h>


void exercicio1();
void exercicio2();
void exercicio3();

int main(){
    int op;
    
    printf("1- Exercício 1\n");
    printf("2- Exercício 2\n");
    printf("3- Exercício 3\n");
    scanf("%d",&op);
    
    switch(op){
        case 1:
        exercicio1();
        break;
        
        case 2:
        exercicio2();
        break;
        
        case 3:
        exercicio3();
        break;
        
        default:
        printf("Opção inválida.");
        break;
    }
    return 0;
}
    
void exercicio1(){
    int X;
    float Y, cons;
    scanf("%d",&X);
    scanf("%f",&Y);
    
    cons= X/Y;
    
    printf("%.3f km/l\n",cons);
    
}

void exercicio2(){
    int t, ano, mes, dias;
    scanf("%d",&t);
    
    ano=t/365;
    t=t%365;
    
    mes=t/30;
    t=t%30;
    
    dias=t;
    
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dias);
    
}

void exercicio3(){
    int n;
    scanf("%d",&n);
    
    switch(n){
        case 1:
        printf("January\n");
        break;
        case 2:
        printf("February\n");
        break;
        case 3:
        printf("March\n");
        break;
        case 4:
        printf("April\n");
        break;
        case 5:
        printf("May\n");
        break;
        case 6:
        printf("June\n");
        break;
        case 7:
        printf("July\n");
        break;
        case 8:
        printf("August\n");
        break;
        case 9:
        printf("September\n");
        break;
        case 10:
        printf("October\n");
        break;
        case 11:
        printf("November\n");
        break;
        case 12:
        printf("December\n");
        break;
    }
 
}


