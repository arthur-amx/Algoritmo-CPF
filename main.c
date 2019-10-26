#include <stdio.h>
#include <stdlib.h>

long long int validador_de_cpf(long long int cpfint) {
    
    long long int cpf, nvcpf;
    int dv1, dv2, ndv1, ndv2, sm1=0, sm2=0, digito;
    
    cpf = cpfint/100;
    dv2 = cpfint%10;
    cpfint = cpfint/10;
    dv1 = cpfint%10; 
    
    for(int i=2; i<=10; i++)
    {
        digito = cpf%10;
        sm1 = sm1 + (digito*i);
        cpf = cpf/10;
    }
    
        if(sm1%11<2)
        {
            ndv1 = 0;
        }
        else
        {
            ndv1 = 11-(sm1%11);
        }
    
    if(ndv1 != dv1)
    {
        printf("\nCPF INVALIDO\n");
    }
    else
    {
        nvcpf = cpfint/10;
        
         for(int i=2; i<=11; i++)
        {
        digito = nvcpf%10;
        sm2 = sm2 + (digito*i);
        nvcpf = nvcpf/10;
        }
    
            if(sm2%11<2)
            {
                ndv2 = 0;
            }
            else
            {
                ndv2 = 11-(sm2%11);
            }
        
        if(ndv2 == dv1)
        {
            printf("\nCPF VALIDO\n");
        }
        else
        {
            printf("\nCPF INVALIDO\n");
        }
       
    } 
   
}

int main() {
    
    int num; 
    long long int cpfint; 
    long int cpf;
    
    while((num>3) || (num<1))
    {
        printf("\n-------------MENU-------------\n");
        printf("\n1)Validador de CPF\n");
        printf("2)Gerador de Digito Verificador de CPF\n");
        printf("3)Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &num);
    }
     
        switch ( num )
        {
        case 1:
            system("cls");
            printf("-----------Validador de CPF-----------\n");
            printf("\nInforme um numero de CPF: ");
            scanf("%lli", &cpfint);
            validador_de_cpf(cpfint);    
        break; 
         
        case 2:
            system("cls");
            printf("-----------Gerador de Digito Verificador de CPF-----------\n");
            printf("\nInforme os 9 primeiro numeros do CPF");
            scanf("%li", &cpf);
            //gerador_de_dv(cpfint);    
        break;         
 
        case 3:
            system("cls");
            printf("\nVoce escolheu Sair\n\n");
        break;
        }
    

    return (EXIT_SUCCESS);
}
