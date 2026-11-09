#include <stdio.h>
void store_Table(int arr[][20], int n, int m, int number);  
int main(){
    int Tables[2][20];
    store_Table(Tables, 0, 10, 2);
    store_Table(Tables, 1, 10, 3);
    for(int i=0; i<20; i++){
        
            printf("%d ", Tables[0][i]);
        }
        printf("\n");
         for(int j=0; j<20; j++){
            printf("%d ", Tables[1][j]);
        }
        printf("\n");
    
    return 0;
}
void store_Table (int arr[][20], int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number*(i+1);
    }
}