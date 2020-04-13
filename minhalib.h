#ifndef MINHALIB_H
#define MINHALIB_H
#include <conio.h>
#include <unistd.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void mensagem_inicial();

void menu_opcoes();

void linha_cabecalho(int quant);

void mensagem_opcao();

void desenha_retangulo(int linha, int coluna, char letra, char traco);

void caixa_com_texto_centralizado(string &s, char &objeto, int &n);

void ordenameto(int &a, int &b, int &c);

void escrever_vetor(int* p, int quant);

void ler_vetor(int* p, int quant);

void escrever_matriz(int** mat, int* linha, int* coluna);

void ler_matriz(int** mat, int* linha, int* coluna);

void desaloca_matriz(int** mat, int* linha);

void flush();

int** soma_matriz(int** mat, int** mat2, int *linha, int *coluna);

int** cria_matriz(int* linha, int* coluna);

int* cria_vetor(int quant);

int numero_regular(int &num);

int tam_string(char *p);

int lexico(char *p, char *q);

int string_to_int(string &a);

int busca_ocorrencia(char *parametro1, char *parametro2);

double calcula_volume(double raio);

long long int calcula_fatorial(long long int &x);

long long int fibonaci_i(long long int &num);

long long int combinacoes_i(long long int &n, long long int &p);

string reverse_string(string &reference);

string to_lower_case(string &frase);

string to_upper_case(string &frase);

string tirandobranco(string p);

char* soma_numero_gigante(char *p, char *q);

char* cria_vetor_com_barra_zero(int quant);

char* cria_vetor_completando_com_zero(char*p, int quant, int quant2);

char** quebrar_string(char* p, char &simbolo, int &quant);

bool palindromo_comparacao(string &reference1, string &reference2);

#endif // MINHALIB_H
