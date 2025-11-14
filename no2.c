#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[25];
    int nilai[4];
} Nilai;

int main(void) {
    int cntStruct;
    scanf("%d", &cntStruct);
    Nilai mhs[cntStruct]; int idx = 0;
    int cntStructCopy = cntStruct;
    while(cntStructCopy--) {
        scanf("%s", mhs[idx].nama);
        for(int i = 0; i < 4; i++) {
            scanf("%d", &mhs[idx].nilai[i]);
        }
        idx++;
    }

    int cntQuery;
    scanf("%d", &cntQuery);
    while(cntQuery--) {
        char nama[25];
        scanf("%s", nama);
        int targetIdx = -1;
        for(int i = 0; i < cntStruct; i++) {
            if(strcmp(nama, mhs[i].nama) == 0) {
                targetIdx = i;
                break;
            }
        }
        if(targetIdx == -1) {
            printf("Nilai %s tidak ditemukan\n", nama);
            continue;
        } else {
            printf("Nilai %s\n", nama);
            printf("Matematika : %d\n", mhs[targetIdx].nilai[0]);
            printf("IPA : %d\n", mhs[targetIdx].nilai[1]);
            printf("Bahasa Indonesia : %d\n", mhs[targetIdx].nilai[2]);
            printf("Bahasa Inggris : %d\n", mhs[targetIdx].nilai[3]);
        }
    }
}