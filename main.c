#include <stdio.h>
#include "bitwise.h"

int main() {
    ComputadorArquivo meu_trabalho;

    // inicia arquivo sem permissao
    inicializar_arquivo(&meu_trabalho, "trabalho.sh");
    exibir_status_chmod(meu_trabalho);

    // junta as mascaras com ou logico
    unsigned int teste_a = (U_READ | U_WRITE | U_EXEC) | (G_READ | G_EXEC) | (O_READ | O_EXEC);
    alterar_permissoes(&meu_trabalho, teste_a);
    exibir_status_chmod(meu_trabalho);

    // muda para configuracao apenas de leitura e escrita
    unsigned int teste_b = (U_READ | U_WRITE) | (G_READ);
    alterar_permissoes(&meu_trabalho, teste_b);
    exibir_status_chmod(meu_trabalho);

    return 0;
}