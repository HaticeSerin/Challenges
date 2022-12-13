//Print a lengthy statement using a loop.

//Bir döngü kullanarak şu cümleyi yazdırın.
// cümle : Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'


#include <stdio.h>
#include <string.h>
int main() {
    char sentence[500]="Basarinin onundeki butun ayak baglarindan kurtulmalisin. Butun akrabaya, ese ve dosta hoscakal demeyi goze almalisiniz.'Your only limit is you'";
    int length,i;

    length = strlen(sentence);

    for( i=0;i<length;i++){
    printf("%c",sentence[i]);
    }
    return 0;
 }
// output= Başarının önündeki bütün ayak bağlarından kurtulmalısın.  Bütün akrabaya, eşe ve dosta hoşçakal demeyi göze almalısın. 'Your only limit is you.'

