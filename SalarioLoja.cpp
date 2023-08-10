#include <stdio.h>
#include <stdlib.h>

struct Funcionario {
    char nome[100], cargo[100];
    float salarioBase;
    float benefi;
    float descontos;
    float salarioLiquido;

    void ler() {
        printf("Nome Funcionario: ");
        scanf("%[^\n]%*c", nome);
        printf("Cargo: ");
        scanf("%[^\n]%*c", cargo);
        printf("Salario base: R$");
        scanf("%f%*c", &salarioBase);
        printf("Beneficio: ");
        scanf("%f%*c", &benefi);
        printf("Descontos: ");
        scanf("%f%*c", &descontos);

        salarioLiquido = salarioBase + benefi - descontos;
    }

    void imprimir() {
        printf("Nome: %s\n", nome);
        printf("Cargo: %s\n", cargo);
        printf("Salario base: %.2f\n", salarioBase);
        printf("Beneficio: %.2f\n", benefi);
        printf("Descontos: %.2f\n", descontos);
        printf("Salario Liquido: %.2f\n\n", salarioLiquido);
    }
};

struct Loja{
    struct Funcionario funcionarios[10];
    int quant;

    void ler(){
        printf("Digite a quantidade de funcionarios: ");
        scanf("%d%*c", &quant);
        if(quant > 10){
            printf("Desculpe o limite de funcionarios eh 10");
            exit(1);
        }

        for (int i = 0; i < quant; i++){
            funcionarios[i].ler();
        }
    }

    void imprimirTotaFuncionarios(){
        printf("\nTotal de Funcionarios: %d\n", quant);
        for(int i = 0; i < quant; i++){
            funcionarios[i].imprimir();
        }
    }

    void calcularMedia(){
        float somaSalarios = 0;
        for(int i = 0; i < quant; i++){
            somaSalarios += funcionarios[i].salarioLiquido;
        }
        float media = somaSalarios / quant;
        printf("Media dos Salarios da Loja: %.2f\n", media);
    }

    void encontrarMaiorSalario(){
        int funMaiorSalario = 0;
        float maiorSalario = funcionarios[0].salarioLiquido;

        for(int i = 1; i < quant; i++){
            if(funcionarios[i].salarioLiquido > maiorSalario){
                maiorSalario = funcionarios[i].salarioLiquido;
                funMaiorSalario = i;
            }
        }

        printf("\nFuncionario com maior Salario:\n");
        funcionarios[funMaiorSalario].imprimir();
    }
};

int main(){
    Loja l;
    l.ler();
    l.imprimirTotaFuncionarios();
    l.calcularMedia();
    l.encontrarMaiorSalario();

    return 0;
}
