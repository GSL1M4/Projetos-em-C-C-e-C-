#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese");
float nota1, nota2, nota3, nota4, media;

printf("Digite a primeira nota:\n");
scanf("%f", &nota1);
printf("Digite a primeira nota:\n");
scanf("%f", &nota2);
printf("Digite a primeira nota:\n");
scanf("%f", &nota3);
printf("Digite a primeira nota:\n");
scanf("%f", &nota4);

media = nota1 + nota2 + nota3 + nota4;
media = media / 4;

if(media >= 7)
  printf("O Aluno esta aprovado! A m�dia �: %.1f \n",      media);
  else if(media > 4 && media <7)
    printf("O Aluno esta em recupera��o! A m�dia �: %.1f     \n", media);
  else if(media < 4)
    printf("O Aluno esta reprovado! A m�dia �: %.1f \n",     media);

  
}
