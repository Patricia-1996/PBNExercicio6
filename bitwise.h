#ifndef BITWISE_H
#define BITWISE_H

// mascaras de bits para o dono leitura escrita e execucao
#define U_READ    (1 << 8) 
#define U_WRITE   (1 << 7) 
#define U_EXEC    (1 << 6) 

// mascaras de bits para o grupo leitura escrita e execucao
#define G_READ    (1 << 5) 
#define G_WRITE   (1 << 4) 
#define G_EXEC    (1 << 3) 

// mascaras de bits para outros leitura escrita e execucao
#define O_READ    (1 << 2) 
#define O_WRITE   (1 << 1) 
#define O_EXEC    (1 << 0)