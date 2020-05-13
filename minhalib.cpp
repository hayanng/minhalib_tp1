#include <minhalib.h>

void menu_opcoes()
{
    cout << " ___________________________________________________________" << endl;
    cout << "|                                                           |" << endl;
    cout << "|                  ---- MENU DE OPCOES ----                 |" << endl;
    cout << "|                                                           |" << endl;
    cout << "|    [01] Lista 1A Questao 5     [11] Lista 2A Questao 1    |" << endl;
    cout << "|    [02] Lista 1B Questao 2     [12] Lista 2A Questao 3    |" << endl;
    cout << "|    [03] Lista 1B Questao 6     [13] Lista 2A Questao 4    |" << endl;
    cout << "|    [04] Lista 1B Questao 8     [14] Lista 2B Questao 1    |" << endl;
    cout << "|    [05] Lista 1B Questao 9     [15] Lista 2B Questao 3    |" << endl;
    cout << "|    [06] Lista 1B Questao 10    [16] Lista 2B Questao 4    |" << endl;
    cout << "|    [07] Lista 1C Questao 3     [17] Lista 2B Questao 5    |" << endl;
    cout << "|    [08] Lista 1C Questao 5     [18] Lista 2B Questao 6    |" << endl;
    cout << "|    [09] Lista 1C Questao 6     [19] Lista 2C Questao 4    |" << endl;
    cout << "|    [10] Lista 1C Questao 7     [20] Lista 2D Questao 6    |" << endl;
    cout << "|                                                           |" << endl;
    cout << "|    [0] Fechar Programa                                    |" << endl;
    cout << "|___________________________________________________________|" << endl;
    cout << "\n  >> Escolha a funcao: ";
}

void mensagem_inicial()
{   
    cout << " ____________________________________________________" << endl;
    cout << "|\t        /     \\     /      \\                 |" << endl;
    cout << "|\t       / \\    )\\___/(     / \\                |" << endl;
    cout << "|\t      /   \\  (_\\   /_)   /   \\               |" << endl;
    cout << "|\t ____/_____\\__\\@   @/___/_____\\____          |" << endl;
    cout << "|\t|             |\\,,,/|              |         |" << endl;
    cout << "|\t|              \\VVV/               |         |" << endl;
    cout << "|\t|    ----FUNCOES BY HAYANN----     |         |" << endl;
    cout << "|\t|              -TP1-               |         |" << endl;
    cout << "|\t|__________________________________|         |" << endl;
    cout << "|\t |    /\\ /      \\  \\       \\ /\\    |         |" << endl;
    cout << "|\t |  /   V        )  )       V   \\  |         |" << endl;
    cout << "|\t |/     ^       /  /        ^     \\|         |" << endl;
    cout << "|\t \\              \\ /                /         |" << endl;
    cout << "|\t                 Z                           |" << endl;
    cout << "|____________________________________________________|" << endl;
    cout << "|                                                    |";
    cout << "\n|\t      PRESS SPACE TO CONTINUE...             |" << endl;
    cout << "|____________________________________________________|";
    while (getch() != ' ');
    system("cls");
}

void linha_cabecalho(int quant)
{
    for (int i = 0; i < quant; i++)
    {
        cout << "_";
    }
    cout << endl;
}

void mensagem_opcao()
{
    cout << "\npress 1 para executar novamente...  \npress 0 para voltar ao menu inicial...";
}

void desenha_retangulo(int linha, int coluna, char letra, char traco)
{
    for (int i=0; i<linha; i++)
    {
        cout << "\t";
        for (int j=0; j<coluna; j++)
        {
            if (i==0 || i==linha-1)
                cout << letra;
            else
            {
                if (j==0 || j==coluna-1)
                    cout << letra;
                else
                    cout << traco;
            }
        }
        cout<<endl;
    }
}

void caixa_com_texto_centralizado(string &s, char &objeto, int &n)
{
    int diferenca, tam, cont=0;
    tam = s.size();
    diferenca = (n - tam)/2;

    for (int i = 0; i < 3; i++)
    {
        cout << "\t";
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == 2)
            {
                cout << objeto;
            }
            else
            {
                if (j>0 && j<n-1)
                {
                    if (diferenca>0)
                    {
                        if (j==diferenca && cont<tam)
                        {
                            cout << s[cont];
                            cont++;
                            diferenca++;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                    else
                    {
                        if (cont<n-2)
                        {
                            cout << s[cont];
                            cont++;
                        }
                        else
                        {
                            cout << " ";
                        }
                    }
                }
                else
                {
                    cout << objeto;
                }
            }
        }
        cout <<  endl;
    }
}

void ordenameto(int &a, int &b, int &c)
{
    int aux;

    if (a > b || a > c)
    {
        if (a>b)
        {
            aux = a;
            a = b;
            b = aux;
        }
        if (a>c)
        {
            aux = a;
            a = c;
            c = aux;
        }
    }
    if (b>c)
    {
        aux = c;
        c = b;
        b = aux;
    }
}

void escrever_vetor(int* p, int quant)
{
    for (int i = 0; i < quant; i++)
    {
        printf("p[%d] == %d\n", i, p[i]);
    }
}

void ler_vetor(int* p, int quant)
{
    for (int i = 0; i < quant; i++)
    {
        cout << "leia p[" << i << "] = ";
        cin >> p[i];
    }
}

void escrever_matriz(int** mat, int* linha, int* coluna)
{
    for (int i = 0; i < *linha; i++)
    {
        for (int j = 0; j < *coluna; j++)
        {
            if (mat[i][j] < 10)
            {
                cout << "   " << mat[i][j];
            }
            else
            {
                if (mat[i][j] >= 10 && mat[i][j] < 99)
                {
                    cout << "  " << mat[i][j];
                }
                else
                {
                    if (mat[i][j] >= 100 && mat[i][j] < 999)
                    {
                        cout << " " << mat[i][j];
                    }
                }
            }
        }
        cout << endl;
    }
}

void ler_matriz(int** mat, int* linha, int* coluna)
{
    for (int i = 0; i < *linha; i++)
    {
        for (int j = 0; j < *coluna; j++)
        {
            cout << "[" << i << "][" << j << "] = ";
            cin >> mat[i][j];
        }
    }
}

void desaloca_matriz(int** mat, int* linha)
{
    for (int i = 0; i < *linha; i++)
    {
        delete mat[i];
    }
}

double calcula_volume(double raio)
{
    double v;
    v=(((4.0)*(3.14))/(3.0))*(raio*raio*raio);
    return v;
}

long long int calcula_fatorial(long long int &x)
{
    long long int y=1;
    for (int i = 2; i <= x; i++)
    {
        y*=i;
    }
    return y;
}

long long int fibonaci_i(long long int &num)
{
    long long int passado = 0, presente = 1, futuro = 0;

    if (num > 1)
    {
        for (int i = 2; i <= num; i++)
        {
            futuro = passado + presente;
            passado = presente;
            presente = futuro;
        }
    }
    else
    {
        if (num==1)
        {
            futuro = 1;
        }
    }
    return futuro;
}

int numero_regular(int &num)
{
    int divisor = 2, cont = 0, result;
    while (num>1)
    {
        if (num%divisor==0)
        {
            num/=divisor;
            if (divisor == 4 || divisor > 5)
            {
                cont++;
            }
        }
        else
        {
            divisor++;
        }
    }
    if (cont==0)
        result = 1;
    else
        result = 0;

    return result;
}

int tam_string(char *p)
{
    int cont = 0;

    for (int i = 0; p[i]!=0; i++)
    {
        cont++;
    }

    return cont;
}

int lexico(char *p, char *q)
{
    int result, i, tam, tama = tam_string(p), tamb = tam_string(q);

    if (tama>=tamb)
    {
        tam = tama;
    }
    else
    {
        tam = tamb;
    }

    for (i = 0; i < tam && p[i]==q[i]; i++);

    if (i == tam)
    {
        result = 0;
    }
    else
    {
        if (p[i] < q[i])
        {
            result = -1;
        }
        else
        {
            result = 1;
        }
    }
    return result;
}

int string_to_int(string &a)
{
    int number = 0, potencia = 1;

    a = reverse_string(a);

    for (int i = 0; i < (int)a.length(); i++)
    {
        number += ((int)a[i]-48)*potencia;
        potencia *= 10;
    }

    return number;
}

int busca_ocorrencia(char *parametro1, char *parametro2)
{
    int tam = tam_string(parametro1);
    int tam2 = tam_string(parametro2);
    int cont, i;

    for (i = 0; i < tam && cont != tam2; i++)
    {
        cont = 0;
        for (int j = 0; j < tam2 && parametro1[i+j] == parametro2[cont]; j++)
        {
            if (parametro1[i+j] == parametro2[cont])
            {
                cont++;
            }
        }
    }
    return i-1;
}

int* cria_vetor(int quant)
{
    int *p = new int[quant];

    for (int i = 0; i < quant; i++)
    {
        p[i] = 0;
    }

    return p;
}

int** cria_matriz(int* linha, int* coluna)
{
    int** mat = new int*[*linha];

    for (int i = 0; i < *linha; i++)
    {
        mat[i] = new int[*coluna];
        for (int j = 0; j < *coluna; j++)
        {
            mat[i][j] = 0;
        }
    }
    return mat;
}

int** soma_matriz(int** mat, int** mat2, int *linha, int *coluna)
{
    int** mat3 = cria_matriz(linha, coluna);

    for (int i = 0; i < *linha; i++)
    {
        for(int j = 0; j < *coluna; j++)
        {
            mat3[i][j] = mat[i][j] + mat2[i][j];
        }
    }
    return mat3;
}

long long int combinacoes_i(long long int &n, long long int &p)
{
    long long int result, a, b, c;
    a = calcula_fatorial(n);
    b = calcula_fatorial(p);
    c = n-p;
    c = calcula_fatorial(c);
    result = a/(b*c);
    return result;
}

string reverse_string(string &reference)
{
    string result;
    int tam = reference.size();
    for (int i = 0; i < tam; i++)
    {
        result+=reference[tam-i-1];
    }
    return result;
}

string to_lower_case(string &frase)
{
    int tam = frase.size(), qualquer;
    string result;

    for (int i = 0; i < tam; i++)
    {
        qualquer = frase[i];
        if (qualquer >= 65 && qualquer <= 90)
        {
            result+=frase[i]+32;
        }
        else
            result+=frase[i];
    }
    return result;
}

string to_upper_case(string &frase)
{
    int tam = frase.size(), qualquer;
    string result;

    for (int i = 0; i < tam; i++)
    {
        qualquer = frase[i];
        if (qualquer >= 97 && qualquer <= 122)
        {
            result+=frase[i]-32;
        }
        else
            result+=frase[i];
    }
    return result;
}

string tirandobranco(string p)
{
    string result;
    int i;
    for (i = 0; i < (int)p.size() && p[i]==' '; i++);
    for (int j = i; j < (int)p.size(); j++)
    {
        result += p[j];
    }

    result = reverse_string(result);

    string result2;

    for (i = 0; i < (int)result.size() && result[i]==' '; i++);
    for (int j = i; j < (int)result.size(); j++)
    {
        result2 += result[j];
    }

    result2 = reverse_string(result2);

    return result2;
}

char* soma_numero_gigante(char *p, char *q)
{
    int tam1 = tam_string(p);
    int tam2 = tam_string(q);
    int somador = 0, sobe1 = 0;
    int expo = 10, valint1 = 0, valint2 = 0;
    int i;
    char* string2;
    if (tam1 > tam2)
    {
        string2 = cria_vetor_completando_com_zero(q, tam1, tam2);
        char* soma = cria_vetor_com_barra_zero(tam1);
        int tam = tam1;
        for (i = 0; i < tam1; i++)
        {
            somador = ((int)p[tam1-1-i]-48) + ((int)string2[tam1-1-i]-48) + sobe1;
            if (somador > 9)
            {
                soma[tam-1] = ((char)somador%10)+48;
                sobe1 = 1;
                tam--;
            }
            else
            {
                soma[tam-1] = (char)somador+48;
                sobe1 = 0;
                tam--;
            }
        }
        return soma;
    }
    else
    {
        if (tam1 < tam2)
        {
            string2 = cria_vetor_completando_com_zero(p, tam2, tam1);
            char* soma = cria_vetor_com_barra_zero(tam2);
            int tam = tam2;
            for (i = 0; i < tam2; i++)
            {
                somador = ((int)string2[tam2-1-i]-48) + ((int)q[tam2-1-i]-48) + sobe1;
                if (somador > 9)
                {
                    soma[tam-1] = ((char)somador%10)+48;
                    sobe1 = 1;
                    tam--;
                }
                else
                {
                    soma[tam-1] = (char)somador+48;
                    sobe1 = 0;
                    tam--;
                }
            }
            return soma;
        }
        else
        {
            for (i = 0; i < 2; i++)
            {
                valint1 += ((int)p[i]-48)*expo;
                valint2 += ((int)q[i]-48)*expo;
                expo/=10;
            }
            if (tam1==tam2 && valint1+valint2 < 100)
            {
                char* soma = cria_vetor_com_barra_zero(tam1);
                int tam = tam1;
                for (i = 0; i < tam1; i++)
                {
                    somador = ((int)p[tam1-1-i]-48) + ((int)q[tam2-1-i]-48) + sobe1;
                    if (somador > 9)
                    {
                        soma[tam-1] = ((char)somador%10)+48;
                        sobe1 = 1;
                        tam--;
                    }
                    else
                    {
                        soma[tam-1] = (char)somador+48;
                        sobe1 = 0;
                        tam--;
                    }
                }
                return soma;
            }
            else
            {
                int tam = tam1+1;
                char* soma = cria_vetor_com_barra_zero(tam);

                for (i = 0; i < tam1; i++)
                {
                    somador = ((int)p[tam1-1-i]-48) + ((int)q[tam2-1-i]-48) + sobe1;
                    if (somador > 9)
                    {
                        soma[tam-1] = ((char)somador%10)+48;
                        sobe1 = 1;
                        tam--;
                    }
                    else
                    {
                        soma[tam-1] = (char)somador+48;
                        sobe1 = 0;
                        tam--;
                    }
                }
                soma[0] = '1';
                return soma;
            }
        }
    }
}

char* cria_vetor_com_barra_zero(int quant)
{
    char *p = new char[quant];

    for (int i = 0; i < quant; i++)
    {
        p[i] = '0';
    }
    p[quant] = '\0';

    return p;
}

char* cria_vetor_completando_com_zero(char*p, int quant, int quant2)
{
    char* q = new char[quant];

    for (int i = 0; i < quant; i++)
    {
        if (quant2 > 0)
        {
            q[quant-i-1] = p[quant2-1];
            quant2--;
        }
        else
        {
            q[quant-i-1] = '0';
        }
    }
    q[quant] = '\0';
    return q;
}

char** quebrar_string(char* p, char &simbolo, int &quant)
{
    int tam = tam_string(p);
    int i,j = 0;
    int cont = 0;
    quant = 0;

    //saber quantidade de subvetores de strings
    for (i = 0; i < tam; i++)
    {
        if (p[i]==simbolo)
        {
            quant++;
        }
    }
    if (i == tam)
    {
        quant++;
    }
    //saber tamanho de cada subvetor de string.
    int tamsubstr[quant];
    for (i = 0; i < tam; i++)
    {
        cont++;
        if (p[i]==simbolo)
        {
            tamsubstr[j] = cont;
            cont = 0;
            j++;
        }
    }
    if (i == tam)
    {
        tamsubstr[j] = cont + 1;
    }

    //partir para os ponteiros para preencher os subvetores de strings
    char** vet = new char*[quant];
    cont = 0;
    for (i = 0; i < quant; i++)
    {
        char* v = new char[tamsubstr[i]];

        for (j = 0; j < tamsubstr[i] && p[cont + j] != simbolo; j++)
        {
            v[j] = p[cont + j];
        }
        cont += tamsubstr[i];
        v[j] = 0;

        vet[i] = v;
    }

    return vet;
}

bool palindromo_comparacao(string &reference1, string &reference2)
{
    bool result = true;
    int tam = reference1.size();
    for (int i = 0; i < tam; i++)
    {
        if (reference1[i] != reference2[i])
        {
            result = false;
            i = tam;
        }
    }
    return result;
}
