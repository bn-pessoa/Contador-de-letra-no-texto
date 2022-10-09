//Beatriz do Nascimento Pessoa - 24161970
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
    int i, cont[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char ch[200], alfabeto[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char resp='s';

   do {
    /*Testa se o valor digitado é um caractere usado para pausar, nao considerando o enter, de acordo
    com o valor retornado pela função fgetch e contabiliza apenas as letras digitadas. A função fgetc(stdin)
    retorna o caractere atualmente apontado pelo indicador de posição do vetor "lendo" o teclado. Logo, apenas
    se digitar o caractere ] se torna verdade a condição e é possível parar o programa.*/
    printf("\nDigite um texto e pressione ] se quiser finalizar:\n");
    for (i=0; i<=200; i++){
        ch[i] = fgetc(stdin);
        if (ch[i]==']')
           break;

    if (ch[i]=='a'||ch[i]=='A')
        cont[0]++;
    if (ch[i]=='b'||ch[i]=='B')
        cont[1]++;
    if (ch[i]=='c'||ch[i]=='C')
        cont[2]++;
    if (ch[i]=='d'||ch[i]=='D')
        cont[3]++;
    if (ch[i]=='e'||ch[i]=='E')
        cont[4]++;
    if (ch[i]=='f'||ch[i]=='F')
        cont[5]++;
    if (ch[i]=='g'||ch[i]=='G')
        cont[6]++;
    if (ch[i]=='h'||ch[i]=='H')
        cont[7]++;
    if (ch[i]=='i'||ch[i]=='I')
        cont[8]++;
    if (ch[i]=='j'||ch[i]=='J')
        cont[9]++;
    if (ch[i]=='k'||ch[i]=='K')
        cont[10]++;
    if (ch[i]=='l'||ch[i]=='L')
        cont[11]++;
    if (ch[i]=='m'||ch[i]=='M')
        cont[12]++;
    if (ch[i]=='n'||ch[i]=='N')
        cont[13]++;
    if (ch[i]=='o'||ch[i]=='O')
        cont[14]++;
    if (ch[i]=='p'||ch[i]=='P')
        cont[15]++;
    if (ch[i]=='q'||ch[i]=='Q')
        cont[16]++;
    if (ch[i]=='r'||ch[i]=='R')
        cont[17]++;
    if (ch[i]=='s'||ch[i]=='S')
        cont[18]++;
    if (ch[i]=='t'||ch[i]=='T')
        cont[19]++;
    if (ch[i]=='u'||ch[i]=='U')
        cont[20]++;
    if (ch[i]=='v'||ch[i]=='V')
        cont[21]++;
    if (ch[i]=='w'||ch[i]=='W')
        cont[22]++;
    if (ch[i]=='x'||ch[i]=='X')
        cont[23]++;
    if (ch[i]=='y'||ch[i]=='Y')
        cont[24]++;
    if (ch[i]=='z'||ch[i]=='Z')
        cont[25]++;}

    printf("\n+-----+--------+--------+\n");
    printf("  LETRAS  ||  VEZES \n ");
    for (i=0; i<26; i++){
    printf("     %c   ||     %d\n ", alfabeto[i], cont[i]);}
    printf("+-----+--------+--------+\n");

    printf("Deseja continuar? (s ou n)\n");
    resp = getche();
    fflush(stdin);

    }while(resp!='n');
    /*Repete o loop até que n caracteres sejam inseridos. Para quaisquer
    outros caracteres inseridos, exceto 'n', o loop continua.*/
        return 0;
}
