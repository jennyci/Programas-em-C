#include <stdio.h>
    int main () 
{
        int two,five,ten,twenty,fifty,hundred,pw,aux,num; 
        //numeros = quantidade das notas; pw = password; aux = variavel auxiliar; num = valor do saque;

        printf("\nAtualizando arquivos do sistema...\nPreparando interface...\nInicializando caixa...\n");

//definindo quantidade de notas

        do
        {
            printf("\nQuantidade de notas de 2: ");
            scanf("%d", &two);
                if(two < 0)
                    printf("QUANTIDADE INVALIDA!\n");
        } while(two < 0);

        do
        {
            printf("Quantidade de notas de 5: ");
            scanf("%d", &five);
                if(five < 0)
                    printf("QUANTIDADE INVALIDA!\n\n");
        } while(five < 0);

        do
        {
            printf("Quantidade de notas de 10: ");
            scanf("%d", &ten);
                if(ten < 0)
                    printf("QUANTIDADE INVALIDA!\n\n");
        } while(ten < 0);

        do
        {
            printf("Quantidade de notas de 20: ");
            scanf("%d", &twenty);
                if(twenty < 0)
                    printf("QUANTIDADE INVALIDA!\n\n");
        } while(twenty < 0);

        do
        {
            printf("Quantidade de notas de 50: ");
            scanf("%d", &fifty);
                if(fifty < 0)
                    printf("QUANTIDADE INVALIDA!\n\n");
        } while(fifty < 0);

        do
        {
            printf("Quantidade de notas de 100: ");
            scanf("%d", &hundred);
                if(hundred < 0)
                    printf("QUANTIDADE INVALIDA!\n\n");
        } while(hundred < 0);

//registro da senha

        printf("\nDigite uma senha numerica: ");
        scanf("%d", &pw);
            do
            {
                printf("Confirme a senha: ");
                scanf("%d", &aux);
                    if(aux != pw)
                        printf("SENHA INCORRETA!\n");
            } while(aux != pw);

        printf("\nRealizando criptografia dos dados...\nSalvando configuracoes de interface...\nContando notas...\n");
        printf("\nCAIXA INICIALIZADO!\n");

//fim das configurações (funcionario)
//inicio das funções de caixa (usuario)
        
        do
        {
            do //seleção das opções
            {
                printf("\nBem vindo!\nO que deseja?\n1 - Saque\n2 - Deposito\nDigite uma opcao: ");
                scanf("%d", &aux);
                    if(aux < 1 || aux > 4)
                        printf("OPCAO INVALIDA\n");
            } while (aux < 1 || aux > 4);

                switch(aux)
                {
    //SAQUE
                    case 1:
                        do
                        {
                            printf("\nValor do saque: ");
                            scanf("%d", &num);
                                if(num < 0)
                                    printf("VALOR INVALIDO\n");
                        } while(num < 0);

                        do
                        {
                            //verify if balance is sufficient
                            aux = two * 2 + five * 5 + ten * 10 + twenty * 20 + fifty * 50 + hundred * 100;
                            if(num > aux)
                            {
                                printf("SALDO INSUFICIENTE!\n");
                                break;
                            }
                            else
                            {
                                if(num % 2 != 0 || num % 5 != 0 || num % 10 != 0 || num % 20 != 0 || num % 50 != 0 || num % 100 != 0)
                                    break;

                            }


                            printf("Digite o tipo de nota: ");
                            scanf("%d", &aux);

                                //calculos para contagem das notas
                                if(aux == 2 || aux == 5 || aux == 10 || aux == 20 || aux == 50 || aux == 100)
                                {
                                    if(aux == 2 || aux == 5)
                                    {
                                        if(aux == 2)
                                        {
                                            aux = num / 2;
                                                if(aux > two)
                                                {
                                                    printf("NOTAS INSUFICIENTES\n"); 
                                                    break;
                                                }
                                                else
                                                {
                                                    printf("\nSAQUE EFETUADO COM SUCESSO\n");
                                                    two = two - aux;
                                                    break;
                                                }
                                        }
                                        else
                                        {
                                            aux = num / 5;
                                                if(aux > five)
                                                {
                                                    printf("NOTAS INSUFICIENTES\n"); 
                                                    break;
                                                }
                                                else
                                                {
                                                    printf("\nSAQUE EFETUADO COM SUCESSO\n");
                                                    five = five - aux;
                                                    break;
                                                }
                                        }

                                    }
                                    if(aux == 10 || aux == 20)
                                    {
                                        if(aux == 10)
                                        {
                                            aux = num / 10;
                                                if(aux > ten)
                                                {
                                                    printf("NOTAS INSUFICIENTES\n"); 
                                                    break;
                                                }
                                                else
                                                {
                                                    printf("\nSAQUE EFETUADO COM SUCESSO\n");
                                                    ten = ten - aux;
                                                    break;
                                                }
                                        }
                                        else
                                        {
                                            aux = num / 20;
                                                if(aux > twenty)
                                                {
                                                    printf("NOTAS INSUFICIENTES\n"); 
                                                    break;
                                                }
                                                else
                                                {
                                                    printf("\nSAQUE EFETUADO COM SUCESSO\n");
                                                    twenty = twenty - aux;
                                                    break;
                                                }
                                        }

                                    }
                                    if(aux == 50 || aux == 100)
                                    {
                                        if(aux == 50)
                                        {
                                            aux = num / 50;
                                                if(aux > fifty)
                                                {
                                                    printf("NOTAS INSUFICIENTES\n"); 
                                                    break;
                                                }
                                                else
                                                {
                                                    printf("\nSAQUE EFETUADO COM SUCESSO\n");
                                                    fifty = fifty - aux; 
                                                    break;
                                                }                                   
                                        }
                                        else
                                        {
                                            aux = num / 100;
                                                if(aux > hundred)
                                                {
                                                    printf("NOTAS INSUFICIENTES\n"); 
                                                    break;
                                                }
                                                else
                                                {
                                                    printf("\nSAQUE EFETUADO COM SUCESSO\n");
                                                    hundred = hundred - aux;
                                                    break;
                                                }
                                        }
                                    }
                                }
                                else
                                {
                                    printf("TIPO DE NOTA INVALIDO\n");
                                }  
                        } while(1 < 2);

                        break;

    //DEPOSITO
                    case 2:

                            printf("\nDigite abaixo a quantidade de notas que deseja depositar.\n");

                            //atualização da quantidade de notas 
                            do
                            {
                            printf("Notas de 2: ");
                            scanf("%d", &aux);
                                if(aux < 0)
                                    printf("QUANTIDADE INVALIDA\n");
                                else
                                    two = two + aux;
                            } while(aux < 0);

                            do
                            {
                                printf("Notas de 5: ");
                                scanf("%d", &aux);
                                    if(aux < 0)
                                        printf("QUANTIDADE INVALIDA\n");
                                    else
                                        five = five + aux;
                            } while(aux < 0);

                            do
                            {
                                printf("Notas de 10: ");
                                scanf("%d", &aux);
                                    if(aux < 0)
                                        printf("QUANTIDADE INVALIDA\n");
                                    else
                                        ten = ten + aux;
                            } while(aux < 0);

                            do
                            {
                                printf("Notas de 20: ");
                                scanf("%d", &aux);
                                    if(aux < 0)
                                        printf("QUANTIDADE INVALIDA\n");    
                                    else
                                        twenty = twenty + aux;                                    
                            } while(aux < 0);

                            do
                            {
                                printf("Notas de 50: ");
                                scanf("%d", &aux);
                                    if(aux < 0)
                                        printf("QUANTIDADE INVALIDA\n");
                                    else
                                        fifty = fifty + aux;
                            } while(aux < 0);

                            do
                            {
                                printf("Notas de 100: ");
                                scanf("%d", &aux);
                                    if(aux < 0)
                                        printf("QUANTIDADE INVALIDA\n");
                                    else
                                        hundred = hundred + aux;
                            } while(aux < 0);

                            printf("\nDeposito realizado com sucesso!\n");
                            
                            break;

    //CONSULTA DE NOTAS/SALDO
                    case 3:
                        printf("\nDigite sua senha para continuar: ");
                        scanf("%d", &aux);
                            if(aux != pw)
                                printf("SENHA INVALIDA\n");
                            else
                            {                                
                                printf("\nContando notas...\n");

                                aux = two * 2 + five * 5 + ten * 10 + twenty * 20 + fifty * 50 + hundred * 100; //calculo do saldo

                                printf("\nNotas de 2: %d\nNotas de 5: %d\nNotas de 10: %d\nNotas de 20: %d\nNotas de 50: %d\nNotas de 100: %d\n", two,five,ten,twenty,fifty,hundred);
                                printf("TOTAL: %d Reais\n", aux);
                            }
                        break;

    //SAIR/DESLIGAR CAIXA
                    case 4:
                        printf("\nDigite sua senha para continuar: ");
                        scanf("%d", &aux);
                            if(aux != pw)
                                printf("SENHA INVALIDA\n");
                            else
                            {
                                aux = -1;
                                printf("\nEfetuando logoff...\nFinalizando caixa...\n\n");
                            }
                        break;
                } // <-- fechamento switch
        } while(aux != -1);

    return 0;
}