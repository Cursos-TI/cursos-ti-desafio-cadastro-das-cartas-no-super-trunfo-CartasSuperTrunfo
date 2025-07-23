#include <stdio.h>

// First card
char state, code_card[4], city_name[100];
int population, number_of_tourist_attractions;
float area, gdp; // GDP means Gross Domestic Product, which translates to PIB in Portuguese
float pop_density, gdp_per_capita, results; // New Required Variables for Calculations, for "Nivel Aventureiro"

// Second card
char state_2, code_card_2[4], city_name_2[100];
int population_2, number_of_tourist_attractions_2;
float area_2, gdp_2;
float pop_density_2, gdp_per_capita_2, results_2; // New Required Variables for Calculations, for "Nivel Aventureiro"

int main() {
    printf("Let's create the first card of the game Super Trunfo!\n");
    printf("Follow the instructions below.\n");
    printf("Type the state (A-H): ");
    scanf(" %c", &state);
    printf("\nType the code of the card. The code must be 3 characters long: ");
    scanf("%s", code_card);
    printf("\nType the name of the city: ");
    scanf("%s", city_name);
    printf("\nType the population of the city: ");
    scanf("%i", &population);
    printf("\nType the number of tourist attractions: ");
    scanf("%i", &number_of_tourist_attractions);
    printf("Type the area of the city: ");
    scanf("%f", &area);
    printf("Type the GDP of the city: ");
    scanf("%f", &gdp);

    printf("\n\nNow, let's create the second card of the game Super Trunfo.\n");
    printf("Type the state (A-H): ");
    scanf(" %c", &state_2);
    printf("\nType the code of the card. Remember that it must be 3 characters long: ");
    scanf("%s", code_card_2);
    printf("\nType the name of the city: ");
    scanf("%s", city_name_2);
    printf("\nType the population of the city: ");
    scanf("%i", &population_2);
    printf("\nType the number of tourist attractions: ");
    scanf("%i", &number_of_tourist_attractions_2);
    printf("Type the area of the city: ");
    scanf("%f", &area_2);
    printf("Type the GDP of the city: ");
    scanf("%f", &gdp_2);

    // Calculating Population Density and GDP per Capita for both cards
    pop_density = (float)population / area;
    gdp_per_capita = (float)gdp / population;
    pop_density_2 = (float)population_2 / area_2;
    gdp_per_capita_2 = (float)gdp_2 / population_2;

    printf("\nCard 1:\n");
    printf("State: %c\n", state);
    printf("Code: %s\n", code_card);
    printf("City: %s\n", city_name);
    printf("Population: %d\n", population);
    printf("Tourist Attractions: %d\n", number_of_tourist_attractions);
    printf("Area: %.3f\n", area);
    printf("GDP: %.2f\n", gdp);
    printf("Population Density: %.2f\n", pop_density);
    printf("GDP per Capita: %.2f\n", gdp_per_capita);

    printf("\n\nCard 2:\n");
    printf("State: %c\n", state_2);
    printf("Code: %s\n", code_card_2);
    printf("City: %s\n", city_name_2);
    printf("Population: %d\n", population_2);
    printf("Tourist Attractions: %d\n", number_of_tourist_attractions_2);
    printf("Area: %.3f\n", area_2);
    printf("GDP: %.2f\n", gdp_2);
    printf("Population Density: %.2f\n", pop_density_2);
    printf("GDP per Capita: %.2f\n", gdp_per_capita_2);    

    return 0;
}