#include <minhalib.h>
#include <opcoesmenu.h>

using namespace std;

int main()
{
    int lll = 50;
    int x;
    int opcao = 10000;

    mensagem_inicial();

    menu_opcoes();
    cin >> x;
    while (x!=0)
    {
        switch (x)
        {
            case 1:
                opcao_desenha_retangulo(opcao, lll);
                break;
            case 2:
                opcao_calcula_volume_esfera(opcao, lll);
                break;
            case 3:
                opcao_calcula_fatorial(opcao, lll);
                break;
            case 4:
                opcao_termo_fibonacci(opcao, lll);
                break;
            case 5:
                opcao_numero_regular(opcao, lll);
                break;
            case 6:
                opcao_combinacoes(opcao, lll);
                break;
            case 7:
                opcao_string_palindromo(opcao, lll);
                break;
            case 8:
                opcao_to_lower_case(opcao, lll);
                break;
            case 9:
                opcao_to_upper_case(opcao, lll);
                break;
            case 10:
                opcao_caixa_com_texto_centralizado(opcao, lll);
                break;
            case 11:
                opcao_ordenamento(opcao, lll);
                break;
            case 12:
                opcao_tam_string(opcao, lll);
                break;
            case 13:
                opcao_analise_lexicografica(opcao, lll);
                break;
            case 14:
                opcao_numerostring_to_numeroint(opcao, lll);
                break;
            case 15:
                opcao_tirando_branco(opcao, lll);
                break;
            case 16:
                opcao_quebra_string(opcao, lll);
                break;
            case 17:
                opcao_busca_ocorrencia(opcao, lll);
                break;
            case 18:
                opcao_soma_numero_gigante(opcao,lll);
                break;
            case 19:
                opcao_cria_leia_escreva_vetor(opcao, lll);
                break;
            case 20:
                opcao_soma_matriz(opcao, lll);
                break;
            default:
                opcao_default();
                break;
        }
        opcao = 1;
        system("cls");
        menu_opcoes();
        cin >> x;
    }

    mensagem_final_despedida();
    linha_cabecalho(lll);
    getch();

    return 0;
}
