#ifndef __M33_H__
#define __M33_H__
    void  transpose33(float mat_1[3][3], float trans[3][3]);
    void addition33(float mat_1[3][3], float mat_2[3][3], float mat[3][3]);
    void soustraction33(float mat_1[3][3], float mat_2[3][3], float mat[3][3]);
    void multiplication33(float mat_1[][3],float mat_2[3][3], float mat[3][3]);
    void inverse33(float mat[3][3], float f_m[3][3]);
    float determinant33(float mat[3][3]);
    float trace33(float mat[3][3]);
#endif 