#include <stdio.h>

struct file {
  int all[10];
  int max[10];
  int need[10];
  int flag;
};

int main() {
  struct file f[10];
  int fl;
  int i, j, k, p, b, n, r, g, cnt = 0, id, newr;
  int avail[10], seq[10];
  
  printf("Enter number of processes --\n");
  scanf("%d", &n);
  
  printf("Enter number of resources --\n");
  scanf("%d", &r);
  
  for (i = 0; i < n; i++) {
    printf("Enter details for P %d\n", i);
    printf("Enter allocation --\n");
    
    for (j = 0; j < r; j++) {
      scanf("%d", &f[i].all[j]);
    }
    
    printf("Enter max --\n");
    for (j = 0; j < r; j++) {
      scanf("%d", &f[i].max[j]);
    }
    
    f[i].flag = 0;
  }
  
  printf("\nEnter Available Resources --\n");
  for (i = 0; i < r; i++) {
    scanf("%d", &avail[i]);
  }
  
  printf("Enter new request Details --\n");
  printf("Enter pid -- ");
  scanf("%d", &id);
  
  printf("Enter Request for resources --\n");
  for (i = 0; i < r; i++) {
    scanf("%d", &newr);
    f[id].all[i] += newr;
    avail[i] = avail[i] - newr;
  }
  
  for (i = 0; i < r; i++) {
    for (j = 0; j < r; j++) {
      f[i].need[j] = f[i].max[j] - f[i].all[j];
      if (f[i].need[j] < 0)
        f[i].need[j] = 0;
    }
  }
  
  cnt = 0;
  fl = 0;
  
  while (cnt != n) {
    g = 0;
    for (j = 0; j < n; j++) {
      if (f[j].flag == 0) {
        b = 0;
        for (p = 0; p < r; p++) {
          if (avail[p] >= f[j].need[p])
            b = b + 1;
          else {
            b = b - 1;
            break;  // Added a break statement
          }
        }
        
        if (b == r) {
          printf("P%d is visited\n", j);
          seq[fl++] = j;
          f[j].flag = 1;
          
          for (k = 0; k < r; k++)
            avail[k] = avail[k] + f[j].all[k];
          
          cnt = cnt + 1;
          
          printf("(");
          for (k = 0; k < r; k++)
            printf("%3d ", avail[k]);
          
          printf(")\n");
          g = 1;
        }
      }
    }
    
    if (g == 0) {
      printf("Request Not Granted -- Deadlock Occurred\n");
      printf("System is in an unsafe state\n");
      goto y;
    }
  }
  
  printf("\nThe Safe Sequence is -- (");
  for (i = 0; i < fl; i++)
    printf("P%d ", seq[i]);
  
  printf(")\n");
  
y:
  printf("\nProcess\tAllocation\tMax\tNeed\n");
  for (i = 0; i < n; i++) {
    printf("P%d\t\t", i);
    
    for (j = 0; j < r; j++)
      printf("%6d", f[i].all[j]);
    
    for (j = 0; j < r; j++)
      printf("%6d", f[i].max[j]);
    
    for (j = 0; j < r; j++)
      printf("%6d", f[i].need[j]);
    
    printf("\n");
  }
  
  return 0;
}
