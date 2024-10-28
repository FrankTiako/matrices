#ifndef __M22_H__
#define __M22_H__
    void transpose22(float mat[2][2],float mat_r[2][2]);
    void addition22(float mat_122[2][2], float mat_2[2][2],float mat_r[2][2]);
    void soustraction22(float mat_122[2][2], float mat_222[2][2],float mat_r[2][2]);
    void multiplication22(float mat_122[2][2], float mat_222[2][2],float mat_r[2][2]);
    void inverse22(float mat[2][2],float mat_r[2][2]);
    float determinant22(float mat[2][2]);
    float trace22(float mat[2][2]);
#endif
