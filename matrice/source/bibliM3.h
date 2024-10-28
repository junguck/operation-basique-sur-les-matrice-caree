#ifndef _BIBLIM3_H_INCLUDED
#define _BIBLIM3_H_INCLUDED

void addittionm(float m1[3][3],float m2[3][3],float r[3][3]);
void soustractionm(float m1[3][3],float m2[3][3],float r[3][3]);
void produitm(float m1[3][3],float m2[3][3],float r[3][3]);
void transposerm(float m1[3][3],float r[3][3]);
float determinantm(float m1[3][3]);
float tracem(float m1[3][3]);
void inversem(float m1[3][3],float r[3][3]);

#endif 