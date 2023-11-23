#include <stdio.h>

void tim() {
    int so10, so20, so50;
    int tong;
    for (so10 = 0; so10 <= 20; so10++) {
        for (so20 = 0; so20 <= 10; so20++) {
            for (so50 = 0; so50 <= 4; so50++) {
                tong = so10 * 10000 + so20 * 20000 + so50 * 50000;

                if (tong == 200000){
                    printf("phuong an:   %d x 10,000  +  %d x 20,000  +  %d x 50,000 = 200,000\n\n", so10, so20, so50);
                }
            }
        }
    }
}

int main() {
    printf("Cac phuong an co tong la 200,000 la:\n\n");
    tim();

    return 0;
}

