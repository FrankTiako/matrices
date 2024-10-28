#include "matrice_2x2.h"



void addition22(float mat_122[2][2], float mat_222[2][2], float mat_r[2][2]){
    int i,j;
    for(i = 0; i<=1;i++){
        for(j = 0; j<=1;j++){
            mat_r[i][j] = mat_122[i][j] + mat_222[i][j];
        }
    }
}

void soustraction22(float mat_122[2][2], float mat_222[2][2], float mat_r[2][2]){
    int i,j;
    for(i = 0; i<=1;i++){
        for(j = 0; j<=1;j++){
            mat_r[i][j] = mat_122[i][j] - mat_222[i][j];
        }
    }
}

void multiplication22(float mat_122[2][2], float mat_222[2][2], float mat_r[2][2]){
    int i,j;
    for(i = 0; i<=1;i++){
        for(j = 0; j<=1;j++){
            if(i==0){
                if(j == 0){
                    mat_r[i][j] = mat_122[i][j]*mat_222[i][j] + mat_122[i][j+1]*mat_222[i+1][j];
                }
                if(j == 1){
                mat_r[i][j] = mat_122[i][j-1]*mat_222[i][j] + mat_122[i][j]*mat_222[i+1][j];
            }
            }

            if(i == 1){
                if(j == 0){
                    mat_r[i][j] = mat_122[i][j]*mat_222[i-1][j] + mat_122[i][j+1]*mat_222[i][j];
                }
                if(j == 1){
                    mat_r[i][j] = mat_122[i][j-1]*mat_222[i][j+1] + mat_122[i][j]*mat_222[i][j];
                }

            }
        }
    }
}

void transpose22(float mat[2][2],float mat_r[2][2]){
    float t = mat[1][0];
    mat[1][0] = mat[0][1];
    mat[0][1] = t;
    for(int i = 0; i<= 1; i++){
        for(int j = 0; j<= 1; j++){
            mat_r[i][j] = mat[i][j];
        }
    }
}

void inverse22(float mat[2][2],float mat_r[2][2]){
    float d = determinant22(mat);
    for(int i = 0; i<=1;i++){
        for(int j = 0; j<=1;j++){
           mat_r[i][j] = (1/d) * mat[i][j];
        }
    }
}

float trace22(float mat[2][2]){
    float t = mat[0][0] + mat[1][1];
    return t;
}

float determinant22(float mat[2][2]){
    float d = (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]);
    return d;
}

