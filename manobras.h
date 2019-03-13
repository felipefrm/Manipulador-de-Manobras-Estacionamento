#include "entradaSaida.h"
#ifndef MANOBRAS
#define MANOBRAS

int verificaColisaoParede(int i);
int verificaSaidaZ(Auto *veiculo, int qtdVeiculos);
struct timeval contaTempoRelogio();
void contaTempoProcessador(double *utime, double *stime);
void apagaPosAnterior(Auto veiculo, int **mapa);
int movimentaVeiculo(Auto *veiculo, int **mapa, Movimento manobra, int id);
int realizaManobra(int qtdVeiculos, Auto *veiculo, Movimento manobra, int **mapa);

#endif
