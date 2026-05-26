#include <stdio.h>
#include <string.h>
#include "bitwise.h"

// inicia o arquivo virtual com permissao zerada
void inicializar_arquivo(ComputadorArquivo *arq, const char *nome) {
    strcpy(arq->nome, nome);
    arq->permissoes = 0; 
}

// aplica as novas mascaras de bits recebidas
void alterar_permissoes(ComputadorArquivo *arq, unsigned int novas_permissoes) {
    arq->permissoes = novas_permissoes;
}

// decodifica e exibe as permissoes testando bit por bit com o operador e
void exibir_status_chmod(ComputadorArquivo arq) {
}