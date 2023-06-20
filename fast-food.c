#include <stdio.h>


int main() {  
    char nomedocliente [10];
    int hotdog,ham,cheese,refri,fritas;
    int vHot = 100 , vHam = 130 , vCheese = 150 , vRefri = 100 , vFritas = 80, pagar, total;
    float temp;

    printf("\n---------FAST FOOD POWER GUIDO----------\n\n");

    printf("Qual e o seu nome?  ");
    scanf("%s", nomedocliente);

    printf("\n\nOla %s,  seja bem vindo, digite abaixo a quantidade desejada de cada item:  ", nomedocliente);

    temp = vHot/100.0;
    printf("\nQuantidade de Hotdog (R$%0.2f): ", temp);
    scanf("%d", &hotdog);
    temp = (vHot * hotdog)/100.0;
    printf("Valor: R$%0.2f", temp);

    temp = vHam/100.0;
    printf("\nQuantidade de Hamburgueres (R$%0.2f): ", temp);
    scanf("%d", &ham);
    temp = (vHam * ham)/100.0;
    printf("Valor: R$%0.2f", temp);

    temp = vCheese/100.0;
    printf("\nQuantidade de CheeseBurgers (R$%0.2f): ", temp);
    scanf("%d", &cheese);
    temp = (vCheese * cheese)/100.0;
    printf("Valor: R$%0.2f", temp);


    temp = vRefri/100.0;
    printf("\nQuantidade de Refrigerantes (R$%0.2f): ", temp);
    scanf("%d", &refri);
    temp = (vRefri *refri)/100.0;
    printf("Valor: R$%0.2f", temp);

    temp = vFritas/100.0;
    printf("\nQuantidade de Batatas Fritas (R$%0.2f): ", temp);
    scanf("%d", &fritas); 
    temp = (vFritas * fritas)/100.0;
    printf("Valor: R$%0.2f", temp);


    total = (vHot * hotdog + vHam * ham + vCheese * cheese + vRefri * refri + vFritas * fritas);

    temp= (total/100.0);
    printf("\nTotal a Pagar: R$%0.2f", temp);


    printf("\nInforme Quanto voce vai Pagar: ");
    scanf("%d", &pagar);

    if (pagar > total)
    {
        float troco = (pagar - total)/100.0;
        printf("Seu troco sera: R$%0.2f, Obrigado pela preferencia, Volte Sempre", troco);
    }else if (pagar < total)
    {
        printf("Desculpe, esta Faltando Dinheiro  ):");
    }else if (pagar == total)
    {   
         printf("Obrigado pela preferencia, Volte Sempre");
    } 
    
    return 0;
}