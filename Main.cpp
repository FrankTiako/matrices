#include <iostream>
#include <cmath>

#include "matrice_2x2.h"
#include "matrice_3x3.h"

void recup_m221(float mat[2][2]){
    int i,j;
    std::cout << "la matrice est sous la forme: \n" << "|a b|\n" << "|c d|" << std::endl;;
    for(i=0; i<=1; i++){
        std::cout << std::endl;
        for(j=0; j<=1; j++){
            std::cin >> mat[i][j];
        }
    }
    for(i = 0; i<=1;i++){
        std::cout << "|";
        for(j = 0; j<=1;j++){
            std::cout << mat[i][j] << " ";
        }
        std::cout << "|";
        std::cout<<std::endl;
    }
}

void recup_m222(float mat_122[2][2], float mat_222[2][2]){
    int i,j;
    std::cout << "la matrice 1 est sous la forme: \n" << "|a b|\n" << "|c d|" << std::endl;
    for(i=0; i<=1; i++){
        std::cout << std::endl;
        for(j=0; j<=1; j++){
            std::cin >> mat_122[i][j];
        }
    }
    for(i = 0; i<=1;i++){
        std::cout << "|";
        for(j = 0; j<=1;j++){
            std::cout << mat_122[i][j] << " ";
        }
        std::cout << "|";
        std::cout<<std::endl;
    }
    std::cout << "la matrice 2 est sous la forme: \n" << "|a b|\n" << "|c d|" << std::endl;
    for(i=0; i<=1; i++){
        std::cout << std::endl;
        for(j=0; j<=1; j++){
            std::cin >> mat_222[i][j];
        }
    }
    for(i = 0; i<=1;i++){
        std::cout << "|";
        for(j = 0; j<=1;j++){
            std::cout << mat_222[i][j] << " ";
        }
        std::cout << "|";
        std::cout<<std::endl;
    }
}


void recup_m33(float mat[3][3]){
    int i,j;
    std::cout << "la matrice est sous la forme: \n" << "|a b c|\n" << "|d e f|\n" << "|g h i|" << std::endl;
    for(i=0; i<=2; i++){
        std::cout << std::endl;
        for(j=0; j<=2; j++){
            std::cin >> mat[i][j];
        }
    }
    for(i = 0; i<=2;i++){
        std::cout << "|";
        for(j = 0; j<=2;j++){
            std::cout << mat[i][j] << " ";
        }
        std::cout << "|";
        std::cout<<std::endl;
    }
}

void recup_m332(float mat_1[3][3], float mat_2[3][3]){
    int i,j;
    std::cout << "la matrice 1 est sous la forme: \n" << "|a b c|\n" << "|c d f|\n" << "|g h i|"<< std::endl;
    for(i=0; i<=2; i++){
        std::cout << std::endl;
        for(j=0; j<=2; j++){
            std::cin >> mat_1[i][j];
        }
    }
    for(i = 0; i<=2;i++){
        std::cout << "|";
        for(j = 0; j<=2;j++){
            std::cout << mat_1[i][j] << " ";
        }
        std::cout << "|";
        std::cout<<std::endl;
    }
    std::cout << "la matrice 2 est sous la forme: \n" << "|a b c|\n" << "|d e f|\n" << "|g h i|" << std::endl;
    for(i=0; i<=2; i++){
        std::cout << std::endl;
        for(j=0; j<=2; j++){
            std::cin >> mat_2[i][j];
        }
    }
    for(i = 0; i<=2;i++){
        std::cout << "|";
        for(j = 0; j<=2;j++){
            std::cout << mat_2[i][j] << " ";
        }
        std::cout << "|";
        std::cout<<std::endl;
    }
}




int main(int argc, char** argv){
    float mat[3][3], trans[3][3], mat_1[3][3], mat_2[3][3];
    float mat22[2][2], trans22[2][2], mat_122[2][2], mat_222[2][2], mat_r[2][2];

    float det,t;

    char c,r;
    int i,j;


    std::cout << "Quelle matrice utiliser: "<< " matrice 2x2(a)  /  matrice 3x3(b): " << std::endl;
    std::cin >> c;
    if(c == 'a'){
        std::cout << "quelle operation:" << std::endl;
        std::cout << "addition (a) / soustraction(s) / multiplication(m) / transpose(t) / determinant (d) / trace (c) / inverse(i):" << std::endl;
        std::cin >> r;

        if(r == 'a' || r == 's' || r == 'm'){
            recup_m222(mat_122, mat_222);
            if(r == 'a'){
                addition22(mat_122,mat_222,mat_r);
                std::cout << "L'addition de ces matrices donne: "<< std::endl;
                for(i = 0; i<=1;i++){
                    std::cout << "|";
                    for(j = 0; j<=1;j++){
                        std::cout << mat_r[i][j] << " ";
                    }
                    std::cout << "|";
                    std::cout<<std::endl;
                }

            }else if(r == 's'){
                soustraction22(mat_122,mat_222,mat_r);
                std::cout << "La soustraction de ces matrices donne: " << std::endl;
                    for(i = 0; i<=1;i++){
                        std::cout << "|";
                        for(j = 0; j<=1;j++){
                            std::cout << mat_r[i][j] << " ";
                        }
                        std::cout << "|";
                        std::cout<<std::endl;
                    }

            }else if(r == 'm'){
                multiplication22(mat_122,mat_222,mat_r);
                    std::cout << "La multiplication de ces matrices donne: " << std::endl;
                    for(i = 0; i<=1;i++){
                        std::cout << "|";
                        for(j = 0; j<=1;j++){
                            std::cout << mat_r[i][j] << " ";
                        }
                    std::cout << "|";
                    std::cout<<std::endl;
                }
            }else{
                std::cout << "Vous n'avez pas fait de choix";
            }

        }else if(r == 'd' || r == 'c' || r == 't' || r == 'i'){
            recup_m221(mat22);
            if(r == 't'){
            transpose22(mat22,mat_r);
            std::cout << "La tranposee de cette matrice donne: " << std::endl;
            for(i = 0; i<=1;i++){
                std::cout << "|";
                for(j = 0; j<=1;j++){
                    std::cout << mat_r[i][j] << " ";
                }
            std::cout << "|";
            std::cout<<std::endl;
            }

            }else if(r == 'd'){
                det = determinant22(mat22);
                std::cout << "Le determinant de cette matrice est: " << det;

            }else if(r == 'c'){
                t = trace22(mat22);
                std::cout << "La trace de cette matrice est: " << t;

            }else if(r == 'i'){
                inverse22(mat22,mat_r);
                std::cout << "L'inverse de cette matrice donne: " << std::endl;
                for(i = 0; i<=1;i++){
                    std::cout << "|";
                    for(j = 0; j<=1;j++){
                        std::cout << mat_r[i][j] << " ";
                    }
                std::cout << "|";
                std::cout<<std::endl;
                }
            }else{
                std::cout << "Vous n'avez pas fait de choix";
            }
        }


    }else if( c=='b'){
        std::cout << "quelle operation:" << std::endl;
        std::cout << "addition (a) / soustraction(s) / multiplication(m) / transpose(t) / determinant (d) / trace (c) / inverse(i)" << std::endl;
        std::cin >> r;

        if(r == 'a' || r == 's' || r == 'm'){
            recup_m332(mat_1, mat_2);
            if(r == 'a'){
                addition33(mat_1,mat_2,mat);
                std::cout << "L'addition de ces matrices donne: " << std::endl;
                for(i = 0; i<=2;i++){
                    std::cout << "|";
                    for(j = 0; j<=2;j++){
                        std::cout << mat[i][j] << " ";
                    }
                    std::cout << "|";
                    std::cout<<std::endl;
                }

            }else if(r == 's'){
                soustraction33(mat_1,mat_2,mat);
                std::cout << "La soustraction de ces matrices donne: " << std::endl;
                    for(i = 0; i<=2;i++){
                        std::cout << "|";
                        for(j = 0; j<=2;j++){
                            std::cout << mat[i][j] << " ";
                        }
                        std::cout << "|";
                        std::cout<<std::endl;
                    }

            }else if(r == 'm'){
                multiplication33(mat_1,mat_2,mat);
                    std::cout << "La multiplication de ces matrices donne: " << std::endl;
                    for(i = 0; i<=2;i++){
                        std::cout << "|";
                        for(j = 0; j<=2;j++){
                            std::cout << mat[i][j] << " ";
                        }
                    std::cout << "|";
                    std::cout<<std::endl;
                }
            }else{
                std::cout << "Vous n'avez pas fait de choix";
            }

        }else if(r == 'd' || r == 'c' || r == 't' || r == 'i'){
            recup_m33(mat_1);
            if(r == 't'){
            transpose33(mat_1,trans);
            std::cout << "La tranposee de cette matrice donne: " << std::endl;
            for(i = 0; i<=2;i++){
                std::cout << "|";
                for(j = 0; j<=2;j++){
                    std::cout << trans[i][j] << " ";
                }
            std::cout << "|";
            std::cout<<std::endl;
            }

            }else if(r == 'd'){
                det = determinant33(mat_1);
                std::cout << "Le determinant de cette matrice est: " << det;

            }else if(r == 'c'){
                t = trace33(mat_1);
                std::cout << "La trace de cette matrice est: " <<  t;

            }else if(r == 'i'){
                inverse33(mat_1,mat);
                std::cout << "L'inverse de cette matrice donne: " << std::endl;
                for(i = 0; i<=2;i++){
                    std::cout << "|";
                    for(j = 0; j<=2;j++){
                        std::cout << mat[i][j] << " ";
                    }
                std::cout << "|";
                std::cout<<std::endl;
                }
            }else{
                std::cout << "Vous n'avez pas fait de choix";
            }
    
        }else{
            std::cout << "Vous n'avez pas fait de choix";
        }
    }
}
