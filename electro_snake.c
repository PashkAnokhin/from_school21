#include <stdio.h>
#include <stdlib.h>

int input(int *matrix, int n, int m);
void output(int *matrix, int n, int m);
void bubble_sort(int *a, int n);
void horizontal_sort(int *a, int *res, int n, int m);


int main() {
    int n;
    int m;
    int err = 0;

    if(scanf("%d", &n) != 1 || n < 1) err = 1;
    if(scanf("%d", &m) != 1 || m < 1) err = 1;
   
    int *matrix = malloc(n * m * sizeof(int*));
    int *result = malloc(n * m * sizeof(int*));
    if (matrix == NULL) err = 1;
    

    if (err == 0)

    {
    err+= input(matrix, n, m);
    horizontal_sort(matrix, result, n, m);
    printf("_______\n");
    output(result, n, m);
    free (matrix);
    free (result); 
    }

    if (err == 1) printf("n/a");
    return 0;
    
}


int input(int *matrix, int n, int m){
    int err = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++){
        if(scanf("%d", (matrix + i*m + j)) == 0) err = 1; 
               }
        
        }
return err;

}
void output(int *matrix, int n, int m){
    
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
        printf("%d ", *(matrix + i*m + j));}  printf("\n"); }
        
}

void bubble_sort(int *a, int n) {
    int max;
    for (int j = n - 1; j > 0; j--) {
        for (int *p = a, i = 0; i < j; i++)
            if (*(p + i) > *(p + i + 1)) {
                max = *(p + i);
                *(p + i) = *(p + i + 1);
                *(p + i + 1) = max;
            }
    }
}

void horizontal_sort(int *a, int *res, int x, int y) {
    int i;
    int j = 0;
    int j2 = 0;
    int k = 1;
    bubble_sort(a, x*y);

    for(i = 0; i < x; i++) {
        for(j = 0; j < y; j2 = j2 + k, j++) {
            *(res + i*y + j2) = *(a + i*y + j);
           //  j2 = j2 + k;
           //  j++;
        }  j2 = j2 - k; k = -k;
                    
    }
}




