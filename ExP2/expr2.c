#include <stdio.h>
int main(){
    int nota2, nota5, nota10, nota20, nota50, nota100, nota, senha, s, operacao, saque, deposito, saldo,x2,x5,x10,x20,x50,x100;

     printf("Inicializando caixa...\n\n");
    
     do
     {
        printf("Digite a quantidade de notas de 2:\n");
        scanf("%d", &nota2);  
        if(nota2 < 0)
        {
            printf("Quantidade inválida.\n");
        }  
     }
     while(nota2 < 0 );

     do
     {
        printf("Digite a quantidade de notas de 5:\n");
        scanf("%d", &nota5);
        if(nota5 < 0)
        {
          printf("Quantidade inválida.\n");  
        } 
     }
     while(nota5 < 0);
     do
     {
        printf("Digite a quantidade de notas de 10:\n");
        scanf("%d", &nota10);
        if(nota10 < 0)
        {
           printf("Quantidade inválida.\n");   
        }
     }
     while(nota10 < 0);
     do
     {
        printf("Digite a quantidade de notas de 20:\n");
        scanf("%d", &nota20);
        if(nota20 < 0)
        {
           printf("Quantidade inválida.\n");   
        }
     }
     while(nota20 < 0);
     do
     {
        printf("Digite a quantidade de notas de 50:\n");
        scanf("%d", &nota50);
        if(nota50 < 0)
        {
           printf("Quantidade inválida.\n");   
        }
     }
     while(nota50 < 0);
     do
     {
        printf("Digite a quantidade de notas de 100:\n");
        scanf("%d", &nota100);
        if(nota100 < 0)
        {
           printf("Quantidade inválida.\n");   
        }
     }
     while(nota100 < 0);
    
   
     printf("Digite sua senha:\n");//senha de até cinco digitos
     scanf("%d", &senha);
    do{

        printf("Confirme sua senha:\n");//senha de até cinco digitos
        scanf("%d", &s);
         if(senha != s)
           printf("Senhas Diferentes.\n");
       }while(s != senha);

     /*while( senha != senha);
    
        printf("Senhas Diferentes.\n");
        printf("Digite sua senha:\n");
        scanf("%d", &senha);
        printf("Confirme sua senha:\n");
        scanf("%d", &senha);*/   
     while(1)
     {
     do
     {
         printf("Qual Operacao Deseja Fazer?\n\n");
         printf("\n<1>Efetuar Saque\n<2>Efetuar Deposito\n");
         scanf("%d", &operacao);
         if( operacao < 0 || operacao > 4)
         {
            
            printf("Operação Inválida!\n");
       
         }
     }
     while(operacao < 0 || operacao > 4);

     
    switch(operacao){
        
        case 1:/*Saque*/
        
             do
            {
                printf("Efetuar Saque.\n");
                printf("Digite o valor do saque:\n");
                scanf("%d", &saque);
                if( saque < 0)
                {
                    printf("Valor inválido.\n");
                }
            }
            while( saque < 0);

            printf("Digite o tipo de nota:\n");
            scanf("%d", &nota);
                if(nota == 2 || nota == 5 || nota == 10 || nota == 20 || nota == 50 || nota == 100)
                {
                    if(nota == 2 || nota == 5)
                    {
                        if(nota == 2)
                        {
                            nota = saque / 2;
                            if(nota > nota2)
                            {
                                printf("Notas insuficientes.\n");
                                break;
                            }
                            else
                            {
                            printf("Saque efetuado.\n");
                            nota2 = nota2 - nota;
                            break;
                            }

                        }
                        else
                        {
                            nota = saque / 5;
                            if(nota > nota5)
                            {
                            printf("Notas insuficientes.\n");
                            break;
                            }  
                            else
                            {
                            printf("Saque efetuado.\n");
                            nota5 = nota5 - nota;
                            break;
                            }
                        }
                    }
                    if(nota == 10 || nota == 20)
                    {
                        if(nota == 10)
                        {
                            nota = saque / 10;
                            if(nota > nota10)
                            {
                                printf("Notas insuficientes.\n");
                                break;
                            }
                            else
                            {
                            printf("Saque efetuado.\n");
                            nota10 = nota10 - nota;
                            break;
                            }

                        }
                        else
                        {
                            nota = saque / 20;
                            if(nota > nota20)
                            {
                            printf("Notas insuficientes.\n");
                            break;
                            }  
                            else
                            {
                            printf("Saque efetuado.\n");
                            nota20 = nota20 - nota;
                            break;
                            }
                        }

                    }
                    if(nota == 50 || nota == 100)
                    {
                        if(nota == 50)
                        {
                            nota = saque / 50;
                            if(nota > nota50)
                            {
                                printf("Notas insuficientes.\n");
                                break;
                            }
                            else
                            {
                            printf("Saque efetuado.\n");
                            nota50 = nota50 - nota;
                            break;
                            }

                        }
                        else
                        {
                            nota = saque / 100;
                            if(nota > nota100)
                            {
                            printf("Notas insuficientes.\n");
                            break;
                            }  
                            else
                            {
                            printf("Saque efetuado.\n");
                            nota100 = nota100 - nota;
                            break;
                            }
                        }

                    } 
                }
                else
                {
                    printf("Tipo de nota inválidda.\n");
                    break;
                }

           
            break;

       case 2:/*Depósito*/
           
            do
            {
                printf("Digite a quantidade de notas de 2:\n");
                scanf("%d", &x2);  
                if(x2 < 0)
                {
                    printf("Quantidade inválida.\n");
                }  
            }
            while(x2 < 0 );

            do
            {
                printf("Digite a quantidade de notas de 5:\n");
                scanf("%d", &x5);
                if(x5 < 0)
                {
                    printf("Quantidade inválida.\n");  
                } 
            }
            while(x5 < 0);
            do
            {
                printf("Digite a quantidade de notas de 10:\n");
                scanf("%d", &x10);
                if(x10 < 0)
                {
                    printf("Quantidade inválida.\n");   
                }
            }
            while(x10 < 0);
            do
            {
                printf("Digite a quantidade de notas de 20:\n");
                scanf("%d", &x20);
                if(x20 < 0)
                {
                    printf("Quantidade inválida.\n");   
                }
            }
            while(x20 < 0);
            do
            {
                printf("Digite a quantidade de notas de 50:\n");
                scanf("%d", &x50);
                if(x50 < 0)
                {
                    printf("Quantidade inválida.\n");   
                }
            }
            while(x50 < 0);
            do
            {
                printf("Digite a quantidade de notas de 100:\n");
                scanf("%d", &x100);
                if(x100 < 0)
                {
                    printf("Quantidade inválida.\n");   
                }
            }
            while(x100 < 0);
            
                printf("Deposito efetuado.\n");
                nota2 = nota2 + x2;
                nota5 = nota5 + x5;
                nota10 = nota10 + x10;
                nota20 = nota20 + x20;
                nota50 = nota50 + x50;
                nota100 = nota100 + x100;
               
       
             
            break;
        
        case 3:/*Saldo*/
            do
            {
                printf("Digite sua senha:\n");
                scanf("%d",&s);//s= senha
      
                
                if( s != senha ){
                    printf("Senha incorreta\n");    
                    break;      
                }

                else{

                    printf("Quantia de notas de 2:%d\n",nota2);
                    printf("Quantia de notas de 5:%d\n",nota5);
                    printf("Quantia de notas de 10:%d\n",nota10);
                    printf("Quantia de notas de 20:%d\n",nota20);
                    printf("Quantia de notas de 50:%d\n",nota50);
                    printf("Quantia de notas de 100:%d\n",nota100);

            /*saldo=saque+deposito;*/
                   saldo = nota2 * 2 + nota5 * 5 + nota10 * 10 + nota20 * 20 + nota50 * 50 + nota100 * 100;
                   printf("Total :%d\n", saldo);
                   }
            }
            while (s != senha);
            break;

        
        case 4:/*Sair*/
            do
            {
                printf("Digite sua senha:\n");
                scanf("%d",&s);
                if( s != senha)
                {
                    printf("Senha incorreta.\n");
                    break;
                }
                else 
                {
                    printf("Obrigado por utilizar o caixa.\n");         
                }
            }
            while( s != senha);
            return 0;       
        
    }
    }
    return 0;
}

