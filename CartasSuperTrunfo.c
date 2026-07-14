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
    float area1 = 0, area2 = 0, pib1 = 0, pib2 = 0, densidade_populacao1 = 0, densidade_populacao2 = 0, pib_capita1 = 0, pib_capita2 = 0, super_poder1 = 0, super_poder2 = 0 ;
    
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
        printf(" °  5- NOVAS HABILIDADES                                                  ° \n");
        printf(" °  6- COMPARAR CARTAS                                                    ° \n");
        printf(" °                                                                        ° \n");
        printf(" °  9- SAIR                                                               ° \n");
        printf(" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° \n\n");     
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
            
          // - - Calculos - -
		  densidade_populacao1 = populacao1 / area1;
          densidade_populacao2 = populacao2 / area2;
		  pib_capita1 = pib1 / populacao1;		
          pib_capita2 = pib2 / populacao2;	
          super_poder1 = populacao1 + area1 + pib1 + num_ponto_turistico1;
          super_poder2 = populacao2 + area2 + pib2 + num_ponto_turistico2;  
		
		}   
        
        if (cont == 2)
        {
            
            system("cls");
            // --- CARTA 1 ---
		    printf("\t               ====================================\n");
            printf("\t                          CARTA 1 \n");
            printf("\t               ====================================\n");
		    printf("\t                Estado : %c           \n", estado1);
            printf("\t                Codigo : %c%s         \n", estado1, codigo1);
            printf("\t                Nome da Cidade : %s   \n", cidade1);
            printf("\t                Populacao : %d        \n", populacao1);
            printf("\t                Area : %.2f Km        \n", area1);
            printf("\t                PIB : %.2f            \n", pib1);
            printf("\t                Pontos Turistico : %d  \n\n\n", num_ponto_turistico1);
              }       
        
        if (cont == 3)
        {
            // --- CARTA 2 ---    
            system("cls");
			printf("\t               ====================================\n");
            printf("\t                          CARTA 2 \n");
            printf("\t               ====================================\n");
            printf("\t                Estado : %c         \n",  estado2);
            printf("\t                Codigo : %c%s        \n", estado2, codigo2);
            printf("\t                Nome da Cidade : %s   \n", cidade2);
            printf("\t                Populacao : %d        \n", populacao2);
            printf("\t                Area : %.2f Km        \n", area2);
            printf("\t                PIB : %.2f             \n",pib2);
            printf("\t                Pontos Turistico : %d \n", num_ponto_turistico2);
		      }           
         
        if (cont == 4)
        {
            // --- CARTA 1 ---
			system("cls");
			printf("\t               ====================================\n");
            printf("\t                          CARTA 1 \n");
            printf("\t               ====================================\n");
            printf("\t                Estado : %c           \n", estado1);
            printf("\t                Codigo : %c%s         \n", estado1, codigo1);
            printf("\t                Nome da Cidade : %s   \n", cidade1);
            printf("\t                Populacao : %d        \n", populacao1);
            printf("\t                Area : %.2f Km        \n", area1);
            printf("\t                PIB : %.2f            \n", pib1);
            printf("\t                Pontos Turistico : %d  \n\n\n", num_ponto_turistico1);
            // --- CARTA 2 ---    
            printf("\t               ====================================\n");
            printf("\t                          CARTA 2 \n");
            printf("\t               ====================================\n");
            printf("\t                Estado : %c         \n",  estado2);
            printf("\t                Codigo : %c%s        \n", estado2, codigo2);
            printf("\t                Nome da Cidade : %s   \n", cidade2);
            printf("\t                Populacao : %d        \n", populacao2);
            printf("\t                Area : %.2f Km        \n", area2);
            printf("\t                PIB : %.2f             \n",pib2);
            printf("\t                Pontos Turistico : %d \n", num_ponto_turistico2);
			}
                
        if (cont == 5)
        {
          system("cls");
		            
          // --- CARTA 1 ---
		    printf("\t               ====================================\n");
            printf("\t                          CARTA 1 \n");
            printf("\t               ====================================\n");
            printf("\t                Super Poder : %.0f POWER      \n",super_poder1);
			printf("\t                Estado : %c           \n", estado1);
            printf("\t                Codigo : %c%s         \n", estado1, codigo1);
            printf("\t                Nome da Cidade : %s   \n", cidade1);
            printf("\t                Populacao : %d        \n", populacao1);
            printf("\t                Area : %.2f Km        \n", area1);
            printf("\t                PIB : %.2f            \n", pib1);
            printf("\t                Pontos Turistico : %d \n", num_ponto_turistico1);
            printf("\t                Densidade populacional : %.2f \n",densidade_populacao1);
			printf("\t                PIP Per Capita : %.2f  \n\n\n",pib_capita1);   
            // --- CARTA 2 ---     
            printf("\t               ====================================\n");
            printf("\t                          CARTA 2 \n");
            printf("\t               ====================================\n");
            printf("\t                Super Poder : %.0f POWER      \n",super_poder2);
			printf("\t                Estado : %c         \n",  estado2);
            printf("\t                Codigo : %c%s        \n", estado2, codigo2);
            printf("\t                Nome da Cidade : %s   \n", cidade2);
            printf("\t                Populacao : %d        \n", populacao2);
            printf("\t                Area : %.2f Km        \n", area2);
            printf("\t                PIB : %.2f             \n",pib2);
            printf("\t                Pontos Turistico : %d \n", num_ponto_turistico2);
		    printf("\t                Densidade populacional : %.2f \n",densidade_populacao2);
			printf("\t                PIP Per Capita : %.2f  \n",pib_capita2);
		     	}
	
	    if (cont == 6)
{
    system("cls");
    
    printf("\t--------------------------------------------------\n");
    printf("\t               RESULTADO DA DISPUTA               \n");
    printf("\t--------------------------------------------------\n\n");

    // =========================================================================
    // GRUPO 1: VITÓRIA PELO SUPER PODER (MAIOR VENCE)
    // =========================================================================
    
    // Carta 1 vence no poder e em todos os outros atributos
    if ((super_poder1 > super_poder2) && (densidade_populacao1 < densidade_populacao2) && (pib_capita1 > pib_capita2))
    {
        printf("\t CARTA 1 VENCEU (CONCURSO ABSOLUTO) \n");
        printf("\t CARTA 1 %.0f POWER VS CARTA 2 %.0f POWER \n", super_poder1, super_poder2);
    }	
    
    // Carta 2 vence no poder e em todos os outros atributos
    if ((super_poder2 > super_poder1) && (densidade_populacao2 < densidade_populacao1) && (pib_capita2 > pib_capita1))
    {
        printf("\t CARTA 2 VENCEU (CONCURSO ABSOLUTO) \n");
        printf("\t CARTA 1 %.0f POWER VS CARTA 2 %.0f POWER \n", super_poder1, super_poder2);
    }	
    
    // Carta 1 tem mais poder, ganha na densidade, mas perde no PIB (Vence por 2x1)
    if ((super_poder1 > super_poder2) && (densidade_populacao1 < densidade_populacao2) && (pib_capita1 < pib_capita2))
    {
        printf("\t CARTA 1 VENCEU (MAIORIA DOS ATRIBUTOS) \n");
        printf("\t CARTA 1 %.0f POWER VS CARTA 2 %.0f POWER \n", super_poder1, super_poder2);
    }	
    
    // Carta 2 tem mais poder, ganha na densidade, mas perde no PIB (Vence por 2x1)
    if ((super_poder2 > super_poder1) && (densidade_populacao2 < densidade_populacao1) && (pib_capita2 < pib_capita1))
    {
        printf("\t CARTA 2 VENCEU (MAIORIA DOS ATRIBUTOS) \n");
        printf("\t CARTA 1 %.0f POWER VS CARTA 2 %.0f POWER \n", super_poder1, super_poder2);
    }	

    // =========================================================================
    // GRUPO 2: CONFLITOS (QUANDO O PODER É MENOR, MAS GANHA EM OUTROS)
    // =========================================================================
    
    // Carta 1 tem MENOS poder, mas ganha na Densidade e no PIB (Vence por 2x1 nos atributos)
    if ((super_poder1 < super_poder2) && (densidade_populacao1 < densidade_populacao2) && (pib_capita1 > pib_capita2))
    {
        printf("\t CARTA 1 VENCEU (GANHOU EM DENSIDADE E PIB) \n");
        printf("\t CARTA 1: %.2f hab/Km VS CARTA 2: %.2f hab/Km \n", densidade_populacao1, densidade_populacao2);
        printf("\t CARTA 1: R$ %.2f VS CARTA 2: R$ %.2f \n", pib_capita1, pib_capita2);
    }	

    // Carta 2 tem MENOS poder, mas ganha na Densidade e no PIB (Vence por 2x1 nos atributos)
    if ((super_poder2 < super_poder1) && (densidade_populacao2 < densidade_populacao1) && (pib_capita2 > pib_capita1))
    {
        printf("\t CARTA 2 VENCEU (GANHOU EM DENSIDADE E PIB) \n");
        printf("\t CARTA 2: %.2f hab/Km VS CARTA 1: %.2f hab/Km \n", densidade_populacao2, densidade_populacao1);
        printf("\t CARTA 2: R$ %.2f VS CARTA 1: R$ %.2f \n", pib_capita2, pib_capita1);
    }

    // =========================================================================
    // GRUPO 3: CASOS DE IGUALDADE (EMPATES E DESEMPATES)
    // =========================================================================
    
    // Empate absoluto (Tudo perfeitamente igual)
    if ((super_poder1 == super_poder2) && (densidade_populacao1 == densidade_populacao2) && (pib_capita1 == pib_capita2)) 
    {
        printf("\t EMPATE TOTAL \n");
        printf("\t CARTA 1 %.0f POWER VS CARTA 2 %.0f POWER \n", super_poder1, super_poder2);
    }
    
    // Empate no poder, mas Carta 1 desempata ganhando na densidade e no PIB
    if ((super_poder1 == super_poder2) && (densidade_populacao1 < densidade_populacao2) && (pib_capita1 > pib_capita2)) 
    {
        printf("\t CARTA 1 VENCEU (CRITÉRIO DE DESEMPATE) \n");
        printf("\t CARTA 1 %.0f POWER VS CARTA 2 %.0f POWER \n", super_poder1, super_poder2);
    }
    
    // Empate no poder, mas Carta 2 desempata ganhando na densidade e no PIB
    if ((super_poder1 == super_poder2) && (densidade_populacao2 < densidade_populacao1) && (pib_capita2 > pib_capita1)) 
    {
        printf("\t CARTA 2 VENCEU (CRITÉRIO DE DESEMPATE) \n");
        printf("\t CARTA 1 %.0f POWER VS CARTA 2 %.0f POWER \n", super_poder1, super_poder2);
    }			
    
    printf("\n\t--------------------------------------------------\n");
    system("pause > nul"); // Segura o resultado na tela de forma limpa
}

	system("pause >nul");
	}
	
	while(cont != 9);    
 return 0;
}
