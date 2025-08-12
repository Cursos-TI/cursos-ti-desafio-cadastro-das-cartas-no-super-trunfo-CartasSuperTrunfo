#include <stdio.h>
#include <ctype.h>

typedef struct
{
    char code[4];
    int population;
    double area;
    double pib;
    int pontos_turisticos;
    double densidade;
    double pib_per_capita;
    double super_poder;
} Carta;

char read_state()
{
    char state;
    do
    {
        printf("Estado (A-H): ");
        scanf(" %c", &state);
        state = toupper(state);
        if (state < 'A' || state > 'H')
        {
            printf("Estado inválido. Deve ser de A a H.\n");
        }
    } while (state < 'A' || state > 'H');
    return state;
}

int read_city_number()
{
    int city;
    do
    {
        printf("Número da cidade (1-4): ");
        scanf("%d", &city);
        if (city < 1 || city > 4)
        {
            printf("Número inválido. Deve ser entre 1 e 4.\n");
        }
    } while (city < 1 || city > 4);
    return city;
}

int read_population()
{
    int pop;
    do
    {
        printf("População: ");
        scanf("%d", &pop);
        if (pop <= 0)
        {
            printf("A população deve ser um número positivo.\n");
        }
    } while (pop <= 0);
    return pop;
}

double read_area()
{
    double area;
    do
    {
        printf("Área: ");
        scanf("%lf", &area);
        if (area <= 0)
        {
            printf("A área deve ser um número positivo.\n");
        }
    } while (area <= 0);
    return area;
}

double read_pib()
{
    double pib;
    do
    {
        printf("PIB: ");
        scanf("%lf", &pib);
        if (pib < 0)
        {
            printf("O PIB não pode ser negativo.\n");
        }
    } while (pib < 0);
    return pib;
}

int read_pontos()
{
    int pontos;
    do
    {
        printf("Pontos turísticos: ");
        scanf("%d", &pontos);
        if (pontos < 0)
        {
            printf("Os pontos turísticos não podem ser negativos.\n");
        }
    } while (pontos < 0);
    return pontos;
}

Carta read_card()
{
    Carta c;

    char state = read_state();
    int city_num = read_city_number();
    sprintf(c.code, "%c%02d", state, city_num);

    c.population = read_population();
    c.area = read_area();
    c.pib = read_pib();
    c.pontos_turisticos = read_pontos();

    c.densidade = (double)c.population / c.area;
    c.pib_per_capita = c.pib / (double)c.population;

    c.super_poder = (double)c.population + c.area + c.pib + (double)c.pontos_turisticos + c.densidade + c.pib_per_capita;

    return c;
}

void compare_properties(Carta c1, Carta c2)
{
    const char *properties[] = {
        "População",
        "Área",
        "PIB",
        "Pontos Turísticos",
        "Densidade Populacional",
        "PIB per Capita",
        "Super Poder"};
    const int num_properties = 7;

    for (int i = 0; i < num_properties; i++)
    {
        const char *prop_name = properties[i];
        double c1_val, c2_val;
        int is_density = 0;

        switch (i)
        {
        case 0:
            c1_val = c1.population;
            c2_val = c2.population;
            break;
        case 1:
            c1_val = c1.area;
            c2_val = c2.area;
            break;
        case 2:
            c1_val = c1.pib;
            c2_val = c2.pib;
            break;
        case 3:
            c1_val = c1.pontos_turisticos;
            c2_val = c2.pontos_turisticos;
            break;
        case 4:
            c1_val = c1.densidade;
            c2_val = c2.densidade;
            is_density = 1;
            break;
        case 5:
            c1_val = c1.pib_per_capita;
            c2_val = c2.pib_per_capita;
            break;
        case 6:
            c1_val = c1.super_poder;
            c2_val = c2.super_poder;
            break;
        default:
            c1_val = 0;
            c2_val = 0;
            break;
        }

        const char *winner;
        if (is_density)
        {
            if (c1_val < c2_val)
            {
                winner = c1.code;
            }
            else if (c2_val < c1_val)
            {
                winner = c2.code;
            }
            else
            {
                winner = "Empate";
            }
        }
        else
        {
            if (c1_val > c2_val)
            {
                winner = c1.code;
            }
            else if (c2_val > c1_val)
            {
                winner = c2.code;
            }
            else
            {
                winner = "Empate";
            }
        }

        printf("%s:\n", prop_name);
        printf("Carta %s: ", c1.code);
        if (i == 0 || i == 3)
        {
            printf("%d\n", (int)c1_val);
        }
        else
        {
            printf("%.2f\n", c1_val);
        }
        printf("Carta %s: ", c2.code);
        if (i == 0 || i == 3)
        {
            printf("%d\n", (int)c2_val);
        }
        else
        {
            printf("%.2f\n", c2_val);
        }
        printf("Vencedor: %s\n\n", winner);
    }
}

int main()
{
    printf("=== Cadastro da Primeira Carta ===\n");
    Carta carta1 = read_card();

    printf("\n=== Cadastro da Segunda Carta ===\n");
    Carta carta2 = read_card();

    printf("\n=== Resultado das Comparações ===\n");
    compare_properties(carta1, carta2);

    return 0;
}