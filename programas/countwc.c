#include <stdio.h>

#define IN 1    //inside a word
#define OUT 0   //outside a word

//count lines, words and characters in input
int main(){
    int n1, c, nw, nc, state;

    state = OUT;
    n1 = 0;
    nw = nc = 0;
    while((c = getchar())!= EOF){
        ++nc;
        if (c == '\n')
        ++n1;
        if (c == ' '||c == '\n'||c == 't')
            state = OUT;
        else (state == OUT);{
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d", n1, nw, nc);
}
