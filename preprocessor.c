#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 200

int main() {

    FILE* fp = fopen("sourcecode.txt","r");
    if(fp<0){
        printf("Error opening sourcecode\n");
        exit(0);
    }
    FILE* f = fopen("pre_sc.txt","w");
    if(f<0){
        printf("Error opening empty file\n");
        exit(0);
    }
    printf("Files opened correctly\n");

    char buf[max];

    char t[2] = "%";
    char* token;

    while(fgets(buf, max, fp)){
        if(buf[0]==t[0]){
            continue;
        }
        token = strtok(buf, t);
        int i=0;
        while(token[i]!='\0'){
            if(token[i]!='\t' && token[i]!='\r' && token[i]!='\n' && token[i]!=' ')
                fputc(token[i], f);
            i++;
        }
    }

    fclose(fp);
    fclose(f);

    return 0;
}