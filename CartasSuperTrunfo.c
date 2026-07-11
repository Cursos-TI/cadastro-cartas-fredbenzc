// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    system("color 1E");

    int cont = 0;
    
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    int populacao1 = 0, populacao2 = 0, num_ponto_turistico1 = 0, num_ponto_turistico2 = 0;
    float area1 = 0, area2 = 0, pib1 = 0, pib2 = 0;
    
    // Inicializando as strings para evitar lixo de memória na tela
    cidade1[0] = '\0'; cidade2[0] = '\0';
    codigo1[0] = '\0'; codigo2[0] = '\0';
    estado1 = ' '; estado2 = ' ';

    do {
        system("cls");
        
        printf(" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° \n");
        printf(" °                                                                        ° \n");
        printf(" °                            SUPER TRUNFO                                ° \n");
        printf(" °                                                                        ° \n");
        printf(" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°  \n\n");
        printf(" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° \n");
        printf(" °  1- CRIAR CARTA                                                        ° \n");
        printf(" °  2- MOSTRAR CARTA 1                                                    ° \n");
        printf(" °  3- MOSTRAR CARTA 2                                                    ° \n");
        printf(" °  4- MOSTRAR TODAS CARTAS                                               ° \n");
        printf(" °                                                                        ° \n");
        printf(" °  6- SAIR                                                               ° \n");
        printf(" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°  \n\n");     
        printf("   \\> ");
        scanf("%d", &cont);
         
        if (cont == 1)
        {
            system("cls");
            // --- CARTA 1 ---     
            printf(" Digite o Nome da cidade 1 => ");
            scanf("%s", cidade1);
            
            printf(" Digite o estado da 1 (Apenas 1 letra, ex: A) => ");
            scanf(" %c", &estado1);
            
            printf(" Digite o Codigo da Carta 1 (ex: 01) => ");
            scanf("%s", codigo1);             
            
            printf(" Digite a Populacao da cidade 1 => ");
            scanf("%d", &populacao1);
            
            printf(" Digite a Area da cidade 1 => ");
            scanf("%f", &area1);
            
            printf(" Digite o PIB da cidade 1 => ");
            scanf("%f", &pib1);
            
            printf(" Digite a Qts de pontos turisticos da cidade 1 => ");
            scanf("%d", &num_ponto_turistico1);
            
            system("cls");
            
            // --- CARTA 2 ---
            printf(" Digite o Nome da cidade 2 => ");
            scanf("%s", cidade2);
            
            printf(" Digite o estado da 2 (Apenas 1 letra, ex: B) => ");
            scanf(" %c", &estado2);
            
            printf(" Digite o Codigo da Carta 2 (ex: 02) => ");
            scanf("%s", codigo2);             
            
            printf(" Digite a Populacao da cidade 2 => ");
            scanf("%d", &populacao2);
            
            printf(" Digite a Area da cidade 2 => ");
            scanf("%f", &area2);
            
            printf(" Digite o PIB da cidade 2 => ");
            scanf("%f", &pib2);
            
            printf(" Digite a Qts de pontos turisticos da cidade 2 => ");
            scanf("%d", &num_ponto_turistico2);
        }   
        
        if (cont == 2)
        {
            system("cls");
            printf("\t CARTA 1 \n");
            printf("\t Estado : %c \n", estado1);
            printf("\t Codigo : %c%s \n", estado1, codigo1);
            printf("\t Nome da Cidade : %s \n", cidade1);
            printf("\t Populacao : %d \n", populacao1);
            printf("\t Area : %.2f Km \n", area1);
            printf("\t PIB : %.2f \n", pib1);
            printf("\t Pontos Turistico : %d \n", num_ponto_turistico1);
            system("pause > nul"); 
        }       
        
        if (cont == 3)
        {
            system("cls");
            printf("\t CARTA 2 \n");
            printf("\t Estado : %c \n", estado2);
            printf("\t Codigo : %c%s \n", estado2, codigo2);
            printf("\t Nome da Cidade : %s \n", cidade2);
            printf("\t Populacao : %d \n", populacao2);
            printf("\t Area : %.2f Km \n", area2);
            printf("\t PIB : %.2f \n", pib2);
            printf("\t Pontos Turistico : %d \n", num_ponto_turistico2);
            system("pause > nul");     
        }           
         
        if (cont == 4)
        {
            system("cls");
            printf("\t               CARTA 1                                CARTA 2 \n\n");
            printf("\t                Estado : %c                            Estado : %c          \n", estado1, estado2);
            printf("\t                Codigo : %c%s                          Codigo : %c%s         \n", estado1, codigo1, estado2, codigo2);
            printf("\t                Nome da Cidade : %s                    Nome da Cidade : %s    \n", cidade1, cidade2);
            printf("\t                Populacao : %d                         Populacao : %d         \n", populacao1, populacao2);
            printf("\t                Area : %.2f Km                         Area : %.2f Km          \n", area1, area2);
            printf("\t                PIB : %.2f                             PIB  : %.2f              \n", pib1, pib2);
            printf("\t                Pontos Turistico : %d                  Pontos Turistico : %d     \n", num_ponto_turistico1, num_ponto_turistico2);
            system("pause > nul");      
        }
                
    } while(cont != 6);    
    
    return 0;
}
