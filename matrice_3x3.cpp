#include <cmath>
#include <iostream>

#include "matrice_3x3.h"
#include "matrice_2x2.h"


void addition33(float mat_1[3][3],float mat_2[3][3],float mat[3][3]){
    for(int i = 0; i<=2;i++){
        for(int j = 0; j<=2;j++){
            if (i == 2){
                mat[i][j] = mat_1[i][j] + mat_2[0][j];
            }else{
                mat[i][j] = mat_1[i][j] + mat_2[i][j];
            }  
        }
    }
}

void soustraction33(float mat_1[3][3],float mat_2[3][3], float mat[3][3]){
    for(int i = 0; i<=2;i++){
        for(int j = 0; j<=2;j++){
            if (i == 2){
                mat[i][j] = mat_1[i][j] - mat_2[0][j];
            }else{
                mat[i][j] = mat_1[i][j] - mat_2[i][j];
            }  
        }
    }
}

void multiplication33(float mat_1[3][3],float mat_2[3][3], float mat[3][3]){
    int i,j,k;
    for (i=0; i<=2; i++){
        for (j = 0; j <= 2; j++){
            mat[i][j] = 0;
            for(int k = 0; k <=2; k++){
                mat[i][j] += mat_1[i][k] * mat_2[k][j];
            }
        }
        
    }

}

void transpose33(float mat_1[3][3], float trans[3][3]){
    float mat[3][3];
    int i,j;
    for ( i = 0; i <= 2; i++){
        for (j = 0; j <= 2; j++){
            trans[j][i] = mat_1[i][j];
        }
    }
}

float trace33(float mat[3][3]){
    float t = mat[0][0] + mat[1][1] + mat[2][2];
    return t;
}

float determinant33(float mat[3][3]){
    float det = (mat[0][0] * (mat[1][1]* mat[2][2] - mat[1][2]*mat[2][1])) - (mat[0][1] * (mat[1][0]* mat[2][2] - mat[1][2]*mat[2][0])) + (mat[0][2] * (mat[1][0]* mat[2][1] - mat[1][1]*mat[2][0]));
    return det;
}

void inverse33(float mat[3][3], float f_m[3][3]){
    float sous_m1[2][2];
    float sous_m2[2][2];
    float sous_m3[2][2];
    float sous_m4[2][2];
    float sous_m5[2][2];
    float sous_m6[2][2];
    float sous_m7[2][2];
    float sous_m8[2][2];
    float sous_m9[2][2];

    float co_m[3][3];

    float tr_com[3][3];

    float det1, det2, det3, det4, det5, det6, det7, det8, det9;

    
    sous_m1[0][0] = mat[1][1];
    sous_m1[0][1] = mat[1][2];
    sous_m1[1][0] = mat[2][1];
    sous_m1[1][1] = mat[2][2];

    det1 = determinant22(sous_m1);
    co_m[0][0] = det1 * pow(-1,2); 

    sous_m2[0][0] = mat[1][0];
    sous_m2[0][1] = mat[1][2];
    sous_m2[1][0] = mat[2][0];
    sous_m2[1][1] = mat[2][2];

    det2 = determinant22(sous_m2);
    co_m[0][1] = det2 * pow(-1,3); 

    sous_m3[0][0] = mat[1][0];
    sous_m3[0][1] = mat[1][1];
    sous_m3[1][0] = mat[2][0];
    sous_m3[1][1] = mat[2][1];

    det3 = determinant22(sous_m3);
    co_m[0][2] = det3 * pow(-1,4); 
    
    sous_m4[0][0] = mat[0][1];
    sous_m4[0][1] = mat[0][2];
    sous_m4[1][0] = mat[2][1];
    sous_m4[1][1] = mat[2][2];

    det4 = determinant22(sous_m4);
    co_m[1][0] = det4 * pow(-1,3); 

    sous_m5[0][0] = mat[0][0];
    sous_m5[0][1] = mat[0][2];
    sous_m5[1][0] = mat[2][0];
    sous_m5[1][1] = mat[2][2];

    det5 = determinant22(sous_m5);
    co_m[1][1] = det5 * pow(-1,4); 

    sous_m6[0][0] = mat[0][0];
    sous_m6[0][1] = mat[0][1];
    sous_m6[1][0] = mat[2][0];
    sous_m6[1][1] = mat[2][1];

    det6 = determinant22(sous_m6);
    co_m[1][2] = det6 * pow(-1,5);

    sous_m7[0][0] = mat[0][1];
    sous_m7[0][1] = mat[0][2];
    sous_m7[1][0] = mat[1][1];
    sous_m7[1][1] = mat[1][2];

    det7 = determinant22(sous_m7);
    co_m[2][0] = det7 * pow(-1,4);

    sous_m8[0][0] = mat[0][0];
    sous_m8[0][1] = mat[0][2];
    sous_m8[1][0] = mat[1][0];
    sous_m8[1][1] = mat[1][2];

    det8 = determinant22(sous_m8);
    co_m[2][1] = det8 * pow(-1,5);

    sous_m9[0][0] = mat[0][0];
    sous_m9[0][1] = mat[0][1];
    sous_m9[1][0] = mat[1][0];
    sous_m9[1][1] = mat[1][1];

    det9 = determinant22(sous_m9);
    co_m[2][2] = det9 * pow(-1,6);

    float d = determinant33(mat);

    transpose33(co_m,tr_com);

    if(d != 0){
        for (int i = 0; i <= 2; i++){
            for(int j = 0; j<= 2; j++){
                f_m[i][j] = tr_com[i][j] / d;
            }
        }
    }else{
        std::cout << "cette matrice n'a pas d'inverse";
    }
}