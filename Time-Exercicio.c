#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(){
    //Armazena em segundos desde 01/01/1970
    time_t agora, novoTempo;
    //Ponteiros para struct com data e hora
    struct tm *infoLocal;
    struct tm *infoGMT;
    char texto [80];

    agora= time(NULL)
    printf("Tempo atual: %ld\n", agora);
    printf("Função ctime: %s", ctime(&agora));
    infoLocal = localtime(&agora);
    printf("Valores detalhados (struct)\n");
    printf("Dia: %d\n", infoLocal ->tm_mday);
    printf("Mes: %d\n", infoLocal ->tm_mon+1);
    printf("Ano: %d\n", infoLocal ->tm_year+1900);
    printf("Minuto: %d\n", infoLocal ->tm_min);
    printf("Segundo: %d\n", infoLocal ->tm_sec);

    printf("asctime: %s", asctime(infoLocal));

    strftime(texto, sizeof(texto), 
    "%d/%m/%Y %H:%M:%D", infoLocal);
    printf("strftime: %s\n", texto);

    double diferenca = diftime(agora, novoTempo);
    printf("diff: %.0f segundos \n", diferenca);

}