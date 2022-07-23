#include <stdio.h>
#include <stdint.h>

uint8_t Stringequal(char chuoi1[],char chuoi2[]){
    int i=0;
    do
    {
        if(chuoi1[i]==chuoi2[i]) i++;
        else return 0;
        if(chuoi1[i]==0&&chuoi2[i]==0) return 1;
    } while (i);
}
 
int main(int argc, char const *argv[])
{   
    char *s1="XIN CHAO BAN";
    char *s2="XIN CHAO BAN";
    printf("%d",Stringequal(s1,s2));

}
