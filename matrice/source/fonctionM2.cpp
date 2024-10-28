#include "../source/bibliM2.h"
void addittion(float m1[2][2],float m2[2][2],float r[2][2]){
    r[0][0]=m1[0][0]+m2[0][0];
    r[0][1]=m1[0][1]+m2[0][1];
    r[1][0]=m1[1][0]+m2[1][0];
    r[1][1]=m1[1][1]+m2[1][1];
}
void soustraction(float m1[2][2],float m2[2][2],float r[2][2]){
    r[0][0]=m1[0][0]-m2[0][0];
    r[0][1]=m1[0][1]-m2[0][1];
    r[1][0]=m1[1][0]-m2[1][0];
    r[1][1]=m1[1][1]-m2[1][1];
}
void produit(float m1[2][2],float m2[2][2],float r[2][2]){
    r[0][0]=(m1[0][0]*m2[0][0])+(m1[0][0]*m2[0][1]);
    r[0][1]=(m1[0][1]*m2[0][0])+(m1[0][1]*m2[0][1]);
    r[1][0]=(m1[1][0]*m2[1][0])+(m1[1][0]*m2[1][1]);
    r[1][1]=(m1[1][1]*m2[1][0])+(m1[1][1]*m2[1][1]);
}
void transposer(float m1[2][2],float r[2][2]){
    r[0][0]=m1[1][0];
    r[0][1]=m1[0][0];
    r[1][0]=m1[1][1];
    r[1][1]=m1[0][1];
}
float determinant(float m1[2][2]){
int i=0;
i=(m1[0][0]*m1[1][1])-(m1[0][1]*m1[1][0]);
return i;
}
float trace(float m1[2][2]){
int i;
i=m1[0][0]+m1[1][1];
return i;
}
void inverse(float m1[2][2],float r[2][2]){
int i=determinant(m1);
m1[0][0]=-1*m1[0][0];
m1[1][1]=-1*m1[1][1];
transposer(m1,r);
r[0][0]*=1/i;
r[0][1]*=1/i;
r[1][0]*=1/i;
r[1][1]*=1/i;
}