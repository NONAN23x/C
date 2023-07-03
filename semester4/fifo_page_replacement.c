#include <stdio.h>

int main() {
    int i, j, k, f,pf=0, count=0, rs[25], m[10],n;
    printf("\nEnter the lenght for reference string: ");
    scanf("%d", &n);
    printf("\nEnter the reference String: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &rs[i]);
    printf("\nEnter no of frames: ");
    scanf("%d", &f);
    for (i=0;i<f;i++)
        m[i] =- 1;
    printf("\nThe Page replacement Process is \n");
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < count; k++)
        {
            if(m[k]==rs[i])
            break;
        }
        if (k==f)
        {
            m[count++]=rs[i];
            pf++;
        }
        for(j=0;j<f;j++)
            printf("\t%d", m[j]);
        if(k==f)
            printf("\tPF No. %d", pf);
        printf("\n");
        if(count==f)
            count = 0;
    }
    printf("\nThe number of Page Faults using FIFO are %d", pf);
   
}