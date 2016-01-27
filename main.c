#include <stdio.h>
#include <stdlib.h>

int main() {
    int mem[100];
    int ir = 0, pc = 0, acc = 0, opR = 0, opC = 0, ic = 0;
    int i = 0, num, counter = 0;
    FILE *m4;
    if((m4 = fopen("/home/tsayler/ClionProjects/m4.c/m4out.txt", "r")) !=NULL) {
    while (fscanf(m4, "%d", &num) == 1) {
        mem[i] = num;
        i++;
        counter++;
    }
    fclose(m4);

    } else {
        printf("Error opening file\n");
    }

    for(i = 0; i < counter; i++) {
        printf("Value stored: %d\n", mem[i]);
    }
    printf("i: %d\n", i);

    while(ic < i ) {
        opC = (mem[counter])/100;
        opR = (mem[ic])/1000;
        printf("opC: %d\n", opC);
        switch (opC) {
            //stop
            case 0:
                printf("ACC 0: %d\n", acc);
                exit(0);
                //LD
            case 1:
                acc = mem[i-1];
                printf("ACC 1: %d\n", acc);
                i--;
                //STO
            case 2:
                printf("ACC 2: %d\n", acc);
                //add
            case 3:
                printf("ACC 3: %d\n", acc);
                //sub
            case 4:
                printf("ACC 4: %d\n", acc);
                //mpy
            case 5:
                printf("ACC 5: %d\n", acc);
                //div
            case 6:
                printf("ACC 6: %d\n", acc);
                //in
            case 7:
                printf("ACC 7: %d\n", acc);
                //out
            case 8:
                printf("ACC 8: %d\n", acc);
                //br
            case 9:
                printf("ACC 9: %d\n", acc);
                //bz
            case 10:
                printf("ACC 10: %d\n", acc);
                //BGTR
            case 11:
                printf("ACC 11: %d\n", acc);
                //default
            default:
                printf("ACC d: %d\n", acc);
                exit(99);
        }
    }

    return 0;
}
