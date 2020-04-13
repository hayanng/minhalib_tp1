#include <opcoesmenu.h>
#include <minhalib.h>

void opcao_desenha_retangulo(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 5 DA LISTA 1-A ---        " << endl;
        cout << "    FUNCAO DESENHA RETANGULO COM PREENCHIMENTO" << endl;
        linha_cabecalho(lll);

        int linha, coluna;
        char letra, traco;

        cout << "\n  >> INSIRA A QUANTIDADE DE LINHAS: ";
        cin >> linha;
        cout << "\n  >> INSIRA A QUANTIDADE DE COLUNAS: ";
        cin >> coluna;
        cout << "\n  >> INSIRA O CHAR DAS LATERAIS: ";
        cin >> letra;
        cout << "\n  >> INSIRA O CHAR DE PREENCHIMENTO: ";
        cin >> traco;

        linha_cabecalho(lll);
        cout << "\n";
        desenha_retangulo(linha, coluna, letra, traco);

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_calcula_volume_esfera(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 2 DA LISTA 1-B ---        " << endl;
        cout << "   CALCULAR O VOLUME DA ESFERA A PARTIR DO RAIO" << endl;
        linha_cabecalho(lll);

        double raio,volum;
        cout << "\n  >> INSIRA O RAIO DA ESFERA: ";
        cin >> raio;
        cout << "\n  >> VOLUME DA ESFERA = ";
        volum = calcula_volume(raio);
        cout << fixed << setprecision(2) << volum << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_calcula_fatorial(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 6 DA LISTA 1-B ---        " << endl;
        cout << "         CALCULAR O FATORIAL DE UM NUMERO" << endl;
        linha_cabecalho(lll);

        long long int fat,result;

        cout << "\n  >> DIGITE O NUMERO FATORIAL: ";
        cin >> fat;
        cout << "\n  >> FATORIAL = ";
        result = calcula_fatorial(fat);
        cout << result << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_termo_fibonacci(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 6 DA LISTA 1-B ---        " << endl;
        cout << "     IDENTIFICAR O I-ESIMO TERMO DE FIBONACCI" << endl;
        linha_cabecalho(lll);

        long long int num, result;
        cout << "\n  >> INSIRA A I-ESIMA POSICAO: ";
        cin >> num;
        result = fibonaci_i(num);
        cout << "\n  >> TERMO NA I-ESIMA POSICAO = " << result << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_numero_regular(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 9 DA LISTA 1-B ---        " << endl;
        cout << "         VERIFIQUE SE O NUMERO EH REGULAR" << endl;
        linha_cabecalho(lll);

        int num, result;
        cout << "\n  >> INSIRA O NUMERO: ";
        cin >> num;

        result = numero_regular(num);

        if (result == 1)
        {
            cout << "\n  >> NUMERO REGULAR" << endl;
        }
        else
            cout << "\n  >> NUMERO NAO REGULAR" << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_combinacoes(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n         --- QUESTAO 10 DA LISTA 1-B ---        " << endl;
        cout << " CALCULAR O NUMERO DE COMBINACOES DE 2 ELEMENTOS" << endl;
        linha_cabecalho(lll);

        long long int ns, ps, result;
        cout << "\n  >> INSIRA N: ";
        cin >> ns;
        cout << "\n  >> INSIRA P: ";
        cin >> ps;
        result = combinacoes_i(ns, ps);

        cout << "\n  >> COMBINACOES = " << result << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_string_palindromo(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 3 DA LISTA 1-C ---        " << endl;
        cout << "        VERIFICAR STRING PALINDROMO OU NAO" << endl;
        linha_cabecalho(lll);

        bool resultado;
        string palin,result;
        cout << "\n  >> DIGITE A STRING: ";
        cin >> palin;

        result = reverse_string(palin);
        resultado = palindromo_comparacao(palin, result);

        if (resultado == true)
            cout << "\n  >> STRING PALINDROMO" << endl;
        else
            cout << "\n  >> STRING NAO PALINDROMO" << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_to_lower_case(int &opcao, int &lll)
{
    cin.ignore();
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 5 DA LISTA 1-C ---        " << endl;
        cout << "                  TO LOWER CASE" << endl;
        linha_cabecalho(lll);

        string original, depois;

        cout << "\n  >> DIGITE A STRING: ";
        getline(cin, original);
        depois = to_lower_case(original);
        cout << "\n  >> RESULTADO = " << depois << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_to_upper_case(int &opcao, int &lll)
{
    cin.ignore();
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 6 DA LISTA 1-C ---        " << endl;
        cout << "                  TO UPPER CASE" << endl;
        linha_cabecalho(lll);

        string original, depois;

        cout << "\n  >> DIGITE A STRING: ";
        getline(cin, original);

        depois = to_upper_case(original);
        cout << "\n  >> RESULTADO = " << depois << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_caixa_com_texto_centralizado(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 7 DA LISTA 1-C ---        " << endl;
        cout << "           CAIXA COM TEXTO CENTRALIZADO" << endl;
        linha_cabecalho(lll);

        string caixa_centralizado;
        char objeto;
        int n;

        cout << "\n  >> DIGITE O TEXTO: ";
        cin.ignore();
        getline(cin, caixa_centralizado);
        cout << "\n  >> LATERAL DA CAIXA: ";
        cin >> objeto;
        cout << "\n  >> COMPRIMENTO DA CAIXA: ";
        cin >> n;
        cout << endl;
        linha_cabecalho(lll);
        cout << "\n";
        caixa_com_texto_centralizado(caixa_centralizado, objeto, n);

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_ordenamento(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 1 DA LISTA 2-A ---        " << endl;
        cout << "      ORDENANDO 3 NUMEROS DO MENOR PRO MAIOR" << endl;
        linha_cabecalho(lll);

        int a,b,c;
        cout << "\n  >> VARIAVEL A: ";
        cin >> a;
        cout << "\n  >> VARIAVEL B: ";
        cin >> b;
        cout << "\n  >> VARIAVEL C: ";
        cin >> c;

        ordenameto(a, b, c);

        cout << "\n\n  >> MENOR: " << a << endl;
        cout << "\n  >> MEDIO: " << b << endl;
        cout << "\n  >> MAIOR: " << c << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_tam_string(int &opcao, int &lll)
{
    cin.ignore();
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 1 DA LISTA 2-A ---        " << endl;
        cout << "         TAMANHO DA STRING (VETOR DE CHAR)" << endl;
        linha_cabecalho(lll);

        int tam;
        char c[100];

        cout << "\n  >> DIGITE STRING: ";
        cin.getline(c, 100);

        tam = tam_string(c);
        cout << "\n  >> TAMANHO DA STRING = " << tam << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_analise_lexicografica(int &opcao, int &lll)
{
    cin.ignore();
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 4 DA LISTA 2-A ---        " << endl;
        cout << "              ANALISE LEXICOGRAFICA" << endl;
        linha_cabecalho(lll);

        int result;
        char a[100], b[100];

        cout << "\n  >> DIGITE STRING A: ";
        gets(a);

        cout << "\n  >> DIGITE STRING B: ";
        gets(b);

        result = lexico(a, b);

        if (result == 1)
        {
            cout << "\n  >> STRING 'A' POSTERIOR!" << endl;
        }
        else
        {
            if (result == -1)
            {
                cout << "\n  >> STRING 'B' POSTERIOR" << endl;
            }
            else
            {
                if (result == 0)
                {
                    cout << "\n  >> STRINGS IGUAIS" << endl;
                }
            }
        }

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_numerostring_to_numeroint(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 1 DA LISTA 2-B ---        " << endl;
        cout << "     CONVERSAO NUMERO(string) para NUMERO(int)" << endl;
        linha_cabecalho(lll);

        string tring;
        int number;

        cout << "\n  >> NUMERO (STRING): ";
        cin >> tring;

        number = string_to_int(tring);

        cout << "\n  >> NUMERO (INT): " << number << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_tirando_branco(int &opcao, int &lll)
{
    cin.ignore();
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 3 DA LISTA 2-B ---        " << endl;
        cout << "              FUNCAO TIRANDO BRANCO" << endl;
        linha_cabecalho(lll);

        string str;

        cout << "\n  >> DIGITE A STRING: ";
        getline(cin, str);

        str = tirandobranco(str);

        cout << "\n  >> STRING SEM BRANCO: " << str << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_quebra_string(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 4 DA LISTA 2-B ---        " << endl;
        cout << "              FUNCAO QUEBRA STRING" << endl;
        linha_cabecalho(lll);

        char str[100], simbolo;
        int quant;

        char** vet;

        cout << "\n  >> DIGITE A STRING: ";
        cin.ignore();
        cin.getline(str, 100);
        cout << "\n  >> DIGITE O SIMBOL: ";

        cin >> simbolo;

        vet = quebrar_string(str, simbolo, quant);
        cout << "\n  >> quantidade substrings = " << quant << endl;
        cout << "\n";
        for (int i = 0; i < quant; i++)
        {
            cout << "  >> STRING " << i + 1 << ": " << vet[i] << endl;
        }

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_busca_ocorrencia(int &opcao, int &lll)
{
    cin.ignore();
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 5 DA LISTA 2-B ---        " << endl;
        cout << "             FUNCAO BUSCA OCORRENCIA" << endl;
        linha_cabecalho(lll);

        char str1[100], str2[100];
        int pos;

        cout << "\n  >> DIGITE A PRIMEIRA STRING: ";
        cin.getline(str1, 100);

        cout << "\n  >> DIGITE A SEGUNDA STRING: ";
        cin.getline(str2, 100);

        pos = busca_ocorrencia(str1, str2);

        cout << "\n  >> POSICAO DA OCORRENCIA: " << pos << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_soma_numero_gigante(int &opcao, int &lll)
{
    cin.ignore();
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 5 DA LISTA 2-B ---        " << endl;
        cout << "             SOMA DE NUMEROS GIGANTES" << endl;
        linha_cabecalho(lll);

        char str1[100], str2[100];

        cout << "\n  >> NUMERO 1: ";
        cin.getline(str1, 100);

        cout << "\n  >> NUMERO 2: ";
        cin.getline(str2, 100);

        char* soma = soma_numero_gigante(str1, str2);
        int tamsoma = tam_string(soma);
        cout << "\n  >> RESULTADO = ";
        for (int i = 0; i < tamsoma ; i++)
        {
            cout << soma[i];
        }
        cout << endl;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_cria_leia_escreva_vetor(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 5 DA LISTA 2-B ---        " << endl;
        cout << "        FUNCAO CRIA, LEIA E ESCREVA O VETOR" << endl;
        linha_cabecalho(lll);

        int quant;

        cout << "\n  >> QUANTIDADE DE POSICOES DO VETOR: ";
        cin >> quant;

        int* vet = cria_vetor(quant);

        cout << "\n";
        ler_vetor(vet, quant);

        linha_cabecalho(lll);
        cout << "\n";
        escrever_vetor(vet, quant);

        delete vet;

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_soma_matriz(int &opcao, int &lll)
{
    while (opcao!=48)
    {
        system("cls");
        linha_cabecalho(lll);
        cout << "\n          --- QUESTAO 5 DA LISTA 2-B ---        " << endl;
        cout << "                  SOMA DE MATRIZ" << endl;
        linha_cabecalho(lll);

        int linha,coluna;

        cout << "\n  >> QUANTIDADE DE LINHAS: ";
        cin >> linha;

        cout << "\n  >> QUANTIDADE DE COLUNAS: ";
        cin >> coluna;
        cout << "\n  >> LER MATRIZ 1:\n";
        int** matriz = cria_matriz(&linha, &coluna);
        ler_matriz(matriz, &linha, &coluna);
        cout << "\n  >> LER MATRIZ 2:\n";
        int** matriz2 = cria_matriz(&linha, &coluna);
        ler_matriz(matriz2, &linha, &coluna);

        int** matrizsoma = soma_matriz(matriz, matriz2, &linha, &coluna);

        linha_cabecalho(lll);
        cout << "\n  >> MATRIZ RESULTANTE:\n";
        escrever_matriz(matrizsoma, &linha, &coluna);

        desaloca_matriz(matriz, &linha);
        desaloca_matriz(matriz2, &linha);
        desaloca_matriz(matrizsoma, &linha);

        linha_cabecalho(lll);
        mensagem_opcao();
        opcao = getch();
    }
}

void opcao_default()
{
    cout << "\n  >>";
    usleep(200000);
    cout << " nao,";
    usleep(200000);
    cout << " nao,";
    usleep(200000);
    cout << " nao.." << endl;
    usleep(500000);
    cout << "\n  >> OPCAO INVALIDA!!!" << endl;
    usleep(1000000);
}

void mensagem_final_despedida()
{
    string mensagemfinal1 = "Programa sendo finalizado...";
    string mensagemfinal2 = "Obrigado pelo uso!";
    string mensagemfinal_nome_trabalho = "\t---- TRABALHO \x22MINHA LIB\x22 ----";
    string mensagemfinal_nome_faculdade = "PONTIFICIA UNIVERSIDADE CATOLICA DE GOIAS";
    string mensagemfinal_nome_disciplina = "DISCIPLINA: TECNICAS DE PROGRAMACAO I / CMP-1048";
    string mensagemfinal_nome_professor = "PROFESSOR: MAX";
    string mensagemfinal_nome_aluno = "ALUNO: HAYANN GONCALVES";

    cout << "\n  >> ";
    for (int i = 0; i < (int)mensagemfinal1.size(); i++)
    {
        cout << mensagemfinal1[i];
        usleep(40000);
    }

    usleep(500000);

    cout << "\n\n  >> ";
    for (int i = 0; i < (int)mensagemfinal2.size(); i++)
    {
        cout << mensagemfinal2[i];
        usleep(40000);
    }
    usleep(2500000);
    system("cls");

    linha_cabecalho(50);
    cout << "\n";
    for (int i = 0; i < (int)mensagemfinal_nome_trabalho.size(); i++)
    {
        cout << mensagemfinal_nome_trabalho[i];
        usleep(40000);
    }
    cout << endl;
    linha_cabecalho(50);

    cout << "\n  >> ";
    for (int i = 0; i < (int)mensagemfinal_nome_faculdade.size(); i++)
    {
        cout << mensagemfinal_nome_faculdade[i];
        usleep(40000);
    }
    cout << endl;

    cout << "\n  >> ";
    for (int i = 0; i < (int)mensagemfinal_nome_disciplina.size(); i++)
    {
        cout << mensagemfinal_nome_disciplina[i];
        usleep(40000);
    }
    cout << endl;

    cout << "\n  >> ";
    for (int i = 0; i < (int)mensagemfinal_nome_professor.size(); i++)
    {
        cout << mensagemfinal_nome_professor[i];
        usleep(40000);
    }

    cout << endl;
    cout << "\n  >> ";
    for (int i = 0; i < (int)mensagemfinal_nome_aluno.size(); i++)
    {
        cout << mensagemfinal_nome_aluno[i];
        usleep(40000);
    }
    cout << endl;
}
