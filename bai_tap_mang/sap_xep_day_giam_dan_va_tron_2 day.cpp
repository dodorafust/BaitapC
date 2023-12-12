#include <stdio.h>

void nhapDay(int a[], int n) {
    printf("Nhap day so!\n");
    for (int i = 0; i < n; ++i) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void inDay(int a[], int n) {
    printf("Day so: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapXepGiamDan(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


void tronHaiDay(int a1[], int n1, int a2[], int n2, int a3[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a1[i] < a2[j]) {
            a3[k++] = a1[i++];
        } else {
            a3[k++] = a2[j++];
        }
    }

    while (i < n1) {
        a3[k++] = a1[i++];
    }

    while (j < n2) {
        a3[k++] = a2[j++];
    }
}

int main() {
    int n1, n2;
    printf("Nhap so luong phan tu cua day 1: ");
    scanf("%d", &n1);
    int a1[n1];
    nhapDay(a1, n1);

    printf("Nhap so luong phan tu cua day 2: ");
    scanf("%d", &n2);
    int a2[n2];
    nhapDay(a2, n2);

    printf("Day 1: ");
    inDay(a1, n1);

    printf("Day 2: ");
    inDay(a2, n2);

    sapXepGiamDan(a1, n1);

    sapXepGiamDan(a2, n2);

    printf("Day 1 sau khi sap xep giam dan: ");
    inDay(a1, n1);

    printf("Day 2 sau khi sap xep giam dan: ");
    inDay(a2, n2);

    int a3[n1 + n2];
    tronHaiDay(a1, n1, a2, n2, a3);

    printf("Day sau khi tron hai day: ");
    inDay(a3, n1 + n2);
    sapXepGiamDan(a3, n1 + n2);
    inDay(a3, n1 + n2);

    return 0;
}
