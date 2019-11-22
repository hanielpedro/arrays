#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){


    int i ,t;
    int ops;
    int an;


typedef struct veiculo{

    char marca [10];
    char modelo [10];
    int ano;
    char placa [10];

    }veiculo;

struct veiculo cadastro [10];


   int x;

for(i = 1; i <=10;){

     printf("\n\nCadastramento de carro: \n");
            printf("Digite o numero de uma das opcoes: \n");
            printf("1- Cadastrar veiculos \n");
            printf("2- Listar veiculos \n");
            printf("3- Listar veiculos por ano de fabricacao \n");
            printf("4- Listar veiculos com ano de fabricacao acima de um ano fornecido\n");
            printf("5- Listar os veiculos filtrando-se pelo modelo \n");
            printf("6 - Para sair do programa\n");
            scanf("%d", &ops);


    switch (ops){

case 1:
     fflush(stdin);
     printf("\nInsira a marca do veiculo: ");
     scanf("%s",&cadastro[i].marca);

     printf ("\nInsira o modelo do veiculo: ");
     scanf ("%s", &cadastro[i].modelo);

     printf ("\nInsira o ano do veiculo: ");
     scanf ("%i", &cadastro[i].ano);

      printf ("\nInsira a placa do veiculo: ");
      scanf ("%s", &cadastro[i].placa);

      i++;
      break;

case 2:

     for (t = 1; t <=10; t++) {
       if(t < i) {
            printf("\n\nMarca: %s", cadastro[t].marca);
            printf("\nModelo: %s", cadastro[t].modelo);
            printf("\nAno: %i",  cadastro[t].ano);
            printf("\nPlaca: %s", cadastro[t].placa);

            } else {
                        t = 10;
            }
}
break;
  case 3:
      for(t = 1; t <=10; t++){
        if(t < i){
      printf("\nAno: %i", cadastro[t].ano);
      }
}
break;
   case 4:
       printf("\nDigite ate que o ano de fabricacao vc quer: ");
       scanf("%i",&an);

       for(t = 1; t<=10; t++){
            if(t < i){
        if(an < cadastro[t].ano ){
        printf("\n\nMarca: %s", &cadastro[t].marca);
        printf("\nModelo: %s", &cadastro[t].modelo);
        printf("\nAno: %i", cadastro[t].ano);
        printf("\nPlaca: %s", &cadastro[t].placa);
       }
            }
       }
       break;
   case 5:
       for(t = 1; t <=10; t++){
        if(t < i){
      printf("\nModelo: %s", cadastro[t].modelo);
      }
}
break;
   case 6:
    return 0;


}

}


}









