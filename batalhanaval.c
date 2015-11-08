/**********************************************************
 * Trabalho 3 de Programação de Computadores I - Batalha Naval
 * Curso de Sistemas da Informação
 * Aluno: Alessandra Siciliano Orlando-matrícula:0050013383 Professor: Alex Salgado
 * ********************************************************/
/* OBSERVAÇÃO: Alex quando eu definia a variável 'nome' como 'char' dava erro (segmentation fault)! 
    Resolvi defini-lá como 'int', pois dessa forma o programa roda. */ 
    
# include <stdio.h>
int main()
{
    int nome;
    int i;
    int j; 
    int batalha [5][5]={{0,0,0,1,0},
                        {1,0,0,0,1},
                        {0,0,0,1,1},
                        {1,1,1,0,0},
                        {0,0,0,1,0}};
                     
    
    int pontos=0;
    char continuar;
    printf ("Vamos jogar Batalha Naval ?\n");
    printf ("Diga seu nome:  ");
    scanf ("%d", &nome);
 do 
 {
    printf ("Digite a coordenada de linha:(0 a 4)");
    scanf ("%d",&i);
    
    printf ("Digite a coordenada de coluna:(0 a 4)");
    scanf ("%d",&j);
   
   if (batalha[i][j]==1)
        {
            printf("Bomba!! Você ganhou 1 ponto\n"); 
            pontos++;
        }
    else
        {
            printf("Água !! Que pena !\n");
        }
    printf("Deseja continuar (s/n)?\n");
    scanf(" %c", &continuar);
    
    if (continuar=='n')
        {   
            printf ("Olá %d, você fez: %d pontos !!\n", nome, pontos);
            break;
        }
}
    while (continuar=='s');
 return 0;
}