#include<stdio.h>

/*struct Funcionario {

    char nome[100], cargo[100];
    int salarioBase = 0;
    int benefi = 0;
    int descontos = 0;

    void ler() {
        printf("Nome Funcionario: ");
        scanf("%[^\n]%*c", nome);
        printf("Cargo: ");
        scanf("%[^\n]%*c", cargo);
        printf("Salario base: ");
        scanf("%d%*c", &salarioBase);
        printf("Beneficio: ");
        scanf("%d%*c", &benefi);
        printf("Descontos: ");
        scanf("%d%*c", &descontos);
    }

    void imprimir() {
        printf("Titulo: %s\n", nome);
        printf("Cargo: %s\n", cargo);
        printf("Salario: %d\n", &salarioBase);
        printf("Salario: %d\n", &benefi);
        printf("Desconto: %d\n", &descontos);
    }
};
*/


struct Loja {

    Loja funcionario[10];
    int quantFun;
    char nome[100], cargo[100];
    int salarioBase = 0;
    int benefi = 0;
    int descontos = 0;
    int salarioL = 0;

    void ler() {
        printf("Nome Funcionario: ");
        scanf("%[^\n]%*c", nome);
        printf("Cargo: ");
        scanf("%[^\n]%*c", cargo);
        printf("Salario base: ");
        scanf("%d%*c", &salarioBase);
        printf("Beneficio: ");
        scanf("%d%*c", &benefi);
        printf("Descontos: ");
        scanf("%d%*c", &descontos);
    }

    void imprimir() {
        printf("Titulo: %s\n", nome);
        printf("Cargo: %s\n", cargo);
        printf("Salario: %d\n", &salarioBase);
        printf("Salario: %d\n", &benefi);
        printf("Desconto: %d\n", &descontos);
        printf("Salario Liquido: %d\n", &salarioL;)
    }


    void lerFuncionario() {
        if (quantFun >= 10) {
            printf("O Máximo de funcionarios dessa impresa eh 10.\n");
            return;
        }
        funcionario[quantFun].ler();
        quantFun++;
    }

    void imprimirTodos() {
        salarioL = salarioBase + benefi - descontos;
        if (quantFun == 0) {
            printf("Funcionarios cheio.\n");
            return;
        }
        for (int i = 0; i < quantFun; i++) {
            funcionario[i].imprimir();
        }
    }

    void mediaLoja(){
        for(int i = 0; i < quantFun; i++){
        mediaLoja = salarioL[i];
        }
    }

    void maisRecebe(){
        printf("\nFuncionario que mais recebe eh: \n");
        funcionario[salarioL].imprimir();
    }

/*

    void imprimirMaiorLivro() {
        if (qtdLivros == 0) {
            printf("Biblioteca vazia.\n");
            return;
        }
        int maiorQtdPaginas = 0, indice = -1;
        for (int i = 0; i < qtdLivros; i++) {
            if (livros[i].numeroPaginas > maiorQtdPaginas) {
                maiorQtdPaginas = livros[i].numeroPaginas;
                indice = i;
            }
        }
        livros[indice].imprimir();
    }
*/
};

int main() {

    Loja f;

    f.ler();
    //f.totalLivros();
    //biblioteca.numPag();
    f.();
    ();
/*
    int opcao;

    do {
        printf("1. Ler livro\n");
        printf("2. Imprimir todos\n");
        printf("3. Imprimir maior\n");
        printf("0. Sair\n");
        scanf("%d%*c", &opcao);
        switch (opcao) {
            case 1:
                b.lerLivro();
                break;
            case 2:
                b.imprimirTodos();
                break;
            case 3:
                b.imprimirMaiorLivro();
                break;
        }
     } while (opcao == 1 || opcao == 2 || opcao == 3);
*/
    return 0;
}
