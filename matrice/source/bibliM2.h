#ifndef _BIBLIM2_H_INCLUDED
#define _BIBLIM2_H_INCLUDED
void addittion(float m1[2][2],float m2[2][2],float r[2][2]);
void soustraction(float m1[2][2],float m2[2][2],float r[2][2]);
void produit(float m1[2][2],float m2[2][2],float r[2][2]);
void transposer(float m1[2][2],float r[2][2]);
float determinant(float m1[2][2]);
float trace(float m1[2][2]);
void inverse(float m1[2][2],float r[2][2]);

#endif