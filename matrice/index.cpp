#include<stdio.h>
#include "source/bibliM2.h"
#include "source/bibliM3.h"
//les premieres matrices
float M2p[2][2];
float M3p[3][3];
//les deuxiemes matrices
float M2d[2][2];
float M3d[3][3];
//les resultats
float M2r[2][2];
float M3r[3][3];
//varriable entieres 
int a;

int main(){
printf("[1] matrice carre d'ordre 2\n");
printf("[2] matrice carre d'ordre 3\n");
printf("[0] pour ne rien faire\n");
scanf("%d",&a);
switch(a){
case 1:{/*la sasie des elements des deux matrices*/
        printf("saisir les elements de la matrice1\n");
        //matrice 1
        printf("|a b|\n");
        printf("|c d|\n");
        printf("saisir a\n");
        scanf("%f",&M2p[0][0]);
        printf("saisir b\n");
        scanf("%f",&M2p[0][1]);
        printf("saisir c\n");
        scanf("%f",&M2p[1][0]);
        printf("saisir d\n");
        scanf("%f",&M2p[1][1]);
        printf("saisir les elements de la matrice2\n");
        //matrice 2
        printf("|a b|\n");
        printf("|c d|\n");
        printf("saisir a\n");
        scanf("%f",&M2d[0][0]);
        printf("saisir b\n");
        scanf("%f",&M2d[0][1]);
        printf("saisir c\n");
        scanf("%f",&M2d[1][0]);
        printf("saisir d\n");
        scanf("%f",&M2d[1][1]);
        //affichage des resultats
                printf("les resultats sont:\n");
              addittion(M2p,M2d,M2r);  
        printf("l'addition est \n");
        printf("|%f %f|\n",M2r[0][0],M2r[0][1]);
        printf("|%f %f|\n",M2r[1][0],M2r[1][1]);
                printf("le produit est \n");
               produit(M2p,M2d,M2r);  
        printf("|%f %f|\n",M2r[0][0],M2r[0][1]);
        printf("|%f %f|\n",M2r[1][0],M2r[1][1]);
                printf("la soustraction est \n");
                 soustraction(M2p,M2d,M2r);
        printf("|%f %f|\n",M2r[0][0],M2r[0][1]);
        printf("|%f %f|\n",M2r[1][0],M2r[1][1]);
                printf("la transposer de la matrice1 est \n");
                 transposer(M2p,M2r);
        printf("|%f %f|\n",M2r[0][0],M2r[0][1]);
        printf("|%f %f|\n",M2r[1][0],M2r[1][1]);
                printf("la transposer de la matrice2 est \n");
                 transposer(M2d,M2r);
        printf("|%f %f|\n",M2r[0][0],M2r[0][1]);
        printf("|%f %f|\n",M2r[1][0],M2r[1][1]);
                printf("l'inverse de la matrice1 est \n");
                inverse(M2p,M2r);
        printf("|%f %f|\n",M2r[0][0],M2r[0][1]);
        printf("|%f %f|\n",M2r[1][0],M2r[1][1]);
                printf("l'inverse de la matrice2 est \n");
                inverse(M2d,M2r);
        printf("|%f %f|\n",M2r[0][0],M2r[0][1]);
        printf("|%f %f|\n",M2r[1][0],M2r[1][1]);
        float det1=determinant(M2p);
        float det2=determinant(M2d);
        float trace1=trace(M2p);
        float trace2=trace(M2d);
                printf("le determinant de la matrice1  est: %f ;et pour la matrice2 est :%f\n",det1,det2);
                printf("la trace de la matrice1 est:%f;et pour la matrice2 est :%f\n",trace1,trace2);
    break;
}
case 2:{/*la sasie des elements des deux matrices*/
     printf("saisir les elements de la matrice1\n");
     //matrice 1
        printf("|a c b|\n");
        printf("|d e f|\n");
        printf("|g h i|\n");
        printf("saisir a\n");
        scanf("%f",&M2p[0][0]);
        printf("saisir b\n");
        scanf("%f",&M2p[0][1]);
        printf("saisir c\n");
        scanf("%f",&M2p[0][2]);
        printf("saisir d\n");
        scanf("%f",&M2p[1][0]);
        printf("saisir e\n");
        scanf("%f",&M2p[1][1]);
        printf("saisir f\n");
        scanf("%f",&M2p[1][2]);
        printf("saisir g\n");
        scanf("%f",&M2p[2][0]);
        printf("saisir h\n");
        scanf("%f",&M2p[2][1]);
        printf("saisir i\n");
        scanf("%f",&M2p[2][2]);
        printf("saisir les elements de la matriceé\n");
    //matrice 2
        printf("|a c b|\n");
        printf("|d e f|\n");
        printf("|g h i|\n");
        printf("saisir a\n");
        scanf("%f",&M2d[0][0]);
        printf("saisir b\n");
        scanf("%f",&M2d[0][1]);
        printf("saisir c\n");
        scanf("%f",&M2d[0][2]);
        printf("saisir d\n");
        scanf("%f",&M2d[1][0]);
        printf("saisir e\n");
        scanf("%f",&M2d[1][1]);
        printf("saisir f\n");
        scanf("%f",&M2d[1][2]);
        printf("saisir g\n");
        scanf("%f",&M2d[2][0]);
        printf("saisir h\n");
        scanf("%f",&M2d[2][1]);
        printf("saisir i\n");
        scanf("%f",&M2d[2][2]);
 //affichage des resultats
                printf("les resultats sont:\n");
        printf("l'addition est \n");
        addittionm(M3p,M3d,M3r);
        printf("|%f %f %f|\n",M3r[0][0],M3r[0][1],M3r[0][2]);
        printf("|%f %f %f|\n",M3r[1][0],M3r[1][1],M3r[1][2]);
        printf("|%f %f %f|\n",M3r[2][0],M3r[2][1],M3r[2][2]);
                printf("le produit est \n");
        produitm(M3p,M3d,M3r);
       printf("|%f %f %f|\n",M3r[0][0],M3r[0][1],M3r[0][2]);
        printf("|%f %f %f|\n",M3r[1][0],M3r[1][1],M3r[1][2]);
        printf("|%f %f %f|\n",M3r[2][0],M3r[2][1],M3r[2][2]);
                printf("la soustraction est \n");
                soustractionm(M3p,M3d,M3r);
       printf("|%f %f %f|\n",M3r[0][0],M3r[0][1],M3r[0][2]);
        printf("|%f %f %f|\n",M3r[1][0],M3r[1][1],M3r[1][2]);
        printf("|%f %f %f|\n",M3r[2][0],M3r[2][1],M3r[2][2]);
                printf("la transposer de la matrice 1  est \n");
        transposerm(M3p,M3r);
       printf("|%f %f %f|\n",M3r[0][0],M3r[0][1],M3r[0][2]);
        printf("|%f %f %f|\n",M3r[1][0],M3r[1][1],M3r[1][2]);
        printf("|%f %f %f|\n",M3r[2][0],M3r[2][1],M3r[2][2]);
        printf("la transposer de la matrice 2  est \n");
        transposerm(M3d,M3r);
       printf("|%f %f %f|\n",M3r[0][0],M3r[0][1],M3r[0][2]);
        printf("|%f %f %f|\n",M3r[1][0],M3r[1][1],M3r[1][2]);
        printf("|%f %f %f|\n",M3r[2][0],M3r[2][1],M3r[2][2]);
                printf("l'inverse de la matrice1 est \n");
                inversem(M3p,M3r);
        printf("|%f %f %f|\n",M3r[0][0],M3r[0][1],M3r[0][2]);
        printf("|%f %f %f|\n",M3r[1][0],M3r[1][1],M3r[1][2]);
        printf("|%f %f %f|\n",M3r[2][0],M3r[2][1],M3r[2][2]);
         printf("l'inverse de la matrice2 est \n");
         inversem(M3d,M3r);
        printf("|%f %f %f|\n",M3r[0][0],M3r[0][1],M3r[0][2]);
        printf("|%f %f %f|\n",M3r[1][0],M3r[1][1],M3r[1][2]);
        printf("|%f %f %f|\n",M3r[2][0],M3r[2][1],M3r[2][2]);
        float det1=determinantm(M3p);
        float det2=determinantm(M3d);
                float trace1=tracem(M3p);
                float trace2=tracem(M3d);
                printf("le determinant de la matrice1 est: %f;et le determinant de la matrice2 est :%f\n",det1,det2);
                printf("le trace de la matrice1 est : %f;la trace de la matrice2 est %f:\n",trace1,trace2);
    break;
}
case 0:{
    printf("merci aurevoir");
}
}

return 0;
}