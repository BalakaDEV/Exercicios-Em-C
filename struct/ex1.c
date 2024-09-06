// Faça um programa que realize o cadastro de contas bancárias com as seguintes informações: número

// da conta, nome do cliente e saldo. O banco permitirá o cadastramento de apenas 15 contas e não po-
// derá haver mais que uma conta com o mesmo número. Crie o menu de opções a seguir.

// Menu de opções:
// 1. Cadastrar contas.
// 2. Visualizar todas as contas de determinado cliente.
// 3. Excluir a conta com menor saldo (supondo a não existência de saldos iguais).
// 4. Sair.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 2

struct conta_corrente {
  int numero;
  char nome_cliente[50];
  float saldo;
};

int main(int argc, char *argv[])
{
  struct conta_corrente contas[N];
  int qtd_contas = 0, opcao = 0, num_conta, i;

  while (opcao != 4) {
    system("clear");
    printf(" ---- BANCO DE LTP ----\n");
    printf("1 - Cadastrar conta\n");
    printf("2 - Visualizar uma determinada conta\n");
    printf("3 - Excluir conta com menor saldo\n");
    printf("4 - Sair\nDigite a opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
      case 1: 
        printf(" --- Cadastro ---\n");
        if (qtd_contas < N) {
          printf("Num. conta: ");
          scanf("%d", &num_conta);
          i = 0;
          while (i < N && 
            contas[i].numero != num_conta) 
            i++;
          if (i == N) {
            contas[qtd_contas].numero = num_conta;
            printf("Cliente: ");
            scanf(" %[^\n]", contas[qtd_contas].nome_cliente);
            printf("Saldo: ");
            scanf("%f", &contas[qtd_contas].saldo);
            qtd_contas++;
          } else {
            printf("Número de conta já existe ...\n");
          }
        } else {
          printf("Limite de contas atingida ...\n");
        }
        break;
      case 2: 
        printf(" --- Visualizar ---\n");
        printf("Numero da conta: ");
        scanf("%d", &num_conta);
        i = 0;
        while (i < N && contas[i].numero != num_conta)
          i++;
        if (i < N) {
          printf("Conta encontrada ... \n");
          printf("Numero: %d\nCliente: %s\nSaldo: %.2f\n",
                 contas[i].numero, contas[i].nome_cliente, 
                 contas[i].saldo);
        } else {
          printf("Conta não encontrada ...\n");
        }
        break;
      case 3: 
        printf("--- Excluir ---\n");
        printf("Procurando conta com menor saldo ...\n");
        int menor = 0;
        for (i = 0; i < N; i++) {
          if (contas[i].saldo < contas[menor].saldo) {
            menor = i;
          }
        }
        for (i = menor; i < N-1; i++) {
          contas[i].numero = contas[i+1].numero;
          contas[i].saldo = contas[i+1].saldo;
          strcpy(contas[i].nome_cliente, contas[i+1].nome_cliente);
        }
        qtd_contas--;
        break;
      case 4:
        printf("Saindo ... tchau ....\n");
        break;
      default:
        printf("Opção inválida.\n");
    }

    printf("Digite qualquer tecla para continuar ...\n");
    system("read");
  }

  return 0;
}

