#include <stdio.h>
#include <stdlib.h>

int main() {
  // int count = 1;
  // while (count != 0)
  // {
    // system("cls");
    int n_cidades;
    scanf("%d", &n_cidades);

    int dist[n_cidades][n_cidades], i, j;

    for(i=0; i<n_cidades; i++){
      // printf("\n");
      for(j=0; j<n_cidades; j++) {
        dist[i][j] = 0;
        if (j>i) {
        //  printf("Distancia da cidade %d - %d: ", i+1, j+1); 
        scanf("%d", &dist[i][j]);
        }
        else if (j<i){
          dist[i][j] = dist[j][i];
        }
      }
    }

    /*Print da matriz das distancias entre as cidades*/
    // for(i = 0; i < n_cidades; i++){
    //   printf("\n");
    //   for(j = 0; j < n_cidades; j++){
    //       printf("%d ", dist[i][j]);
    //   }
    // }

    int n_rota;
    // printf("\n\nNummero de cidades da rota:");
    scanf("%d", &n_rota);

    int rota[n_rota];
    for(i=0; i<n_rota; i++) {
      // printf("Cidade %d: ", i+1);
      scanf("%d", &rota[i]);
    }

    /*Teste para ver as distancias entre as cidades*/
    // for(i=0;i<n_rota;i++) {
    //   if (n_rota - i > 1)
    //   {
    //     // printf("\n%d", dist[rota[i]][rota[i+1]]);
    //     printf("\nCidade %d: %d", i+1, rota[i]);
    //     printf("\n Distancia entre as cidades %d - %d: %d", rota[i], rota[i+1], dist[rota[i]-1][rota[i+1]-1]);
    //   } else {
    //     printf("\nCidade %d: %d", i+1, rota[i]);
    //     printf("\n Distancia entre as cidades %d - %d: %d", rota[i], rota[0], dist[rota[i]-1][rota[0]-1]);
    //   }
    // }

    int totalDist = 0;
    
    for(i=0; i<n_rota;i++) {
      if(n_rota-i > 1) {
        totalDist += dist[rota[i]-1][rota[i+1]-1];
      }
      else {
        totalDist += dist[rota[i]-1][rota[0]-1];
      }
    }
    // printf("\n\nDistancia total: %d", totalDist);

    float valor_diesel;
    float custo_total;

    // printf("\n\nValor do diesel: ");
    scanf("%f", &valor_diesel);

    custo_total = (totalDist/3.00)*valor_diesel;

    printf("R$%.2f\n", custo_total);

    // int totalDist;
    // for (i = 0; i < n_rota; i++){
    //   totalDist = 0;
    //   if(n_rota-1 == i) {
    //     totalDist += dist[rota[i]][rota[0]];
    //   } else {
    //     totalDist += dist[rota[i]][rota[i+1]];
    //     printf("\n%d", totalDist);
    //   }
    // }

    // printf("\n\nDistancia total: %d", totalDist);
  //   printf("Deseja um novo caso de teste? ");
  //   scanf("%d", &count);
  // }
  
  // printf("\nO programa terminou!");
  
  return 0;
}
