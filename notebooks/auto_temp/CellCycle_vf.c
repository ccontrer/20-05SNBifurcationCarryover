/*  Vector field and other functions for Auto continuer.
   This code was automatically generated by PyDSTool, but may be modified by hand. */

#include "auto_f2c.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "autovfield.h"
#include "auto_c.h"

double *gICs;
double **gBds;
double globalt0;

static double pi = 3.1415926535897931;


/* Variable, parameter, and input definitions: */ 
#define J3	p_[0]
#define J4	p_[1]
#define J5	p_[2]
#define k1	p_[3]
#define k2p	p_[4]
#define k2pp	p_[5]
#define k3p	p_[6]
#define k3pp	p_[7]
#define k4	p_[8]
#define k5p	p_[9]
#define k5pp	p_[50]
#define k6	p_[51]
#define m	p_[52]
#define n	p_[53]
#define _T	p_[10]
#define A	Y_[0]
#define P	Y_[1]
#define Y	Y_[2]


int heav(double x_, double *p_, double *wk_, double *xv_);
double __rhs_if(int cond_, double e1_, double e2_, double *p_, double *wk_, double *xv_);
double __maxof2(double e1_, double e2_, double *p_, double *wk_, double *xv_);
double __minof2(double e1_, double e2_, double *p_, double *wk_, double *xv_);
double __maxof3(double e1_, double e2_, double e3_, double *p_, double *wk_, double *xv_);
double __minof3(double e1_, double e2_, double e3_, double *p_, double *wk_, double *xv_);
double __maxof4(double e1_, double e2_, double e3_, double e4_, double *p_, double *wk_, double *xv_);
double __minof4(double e1_, double e2_, double e3_, double e4_, double *p_, double *wk_, double *xv_);
double initcond(char *varname, double *p_, double *wk_, double *xv_);
int getindex(char *name, double *p_, double *wk_, double *xv_);
double globalindepvar(double t, double *p_, double *wk_, double *xv_);
double getbound(char *name, int which_bd, double *p_, double *wk_, double *xv_);

void auxvars(unsigned, unsigned, double, double*, double*, double*, unsigned, double*, unsigned, double*);
void jacobian(unsigned, unsigned, double, double*, double*, double**, unsigned, double*, unsigned, double*);
void jacobianParam(unsigned, unsigned, double, double*, double*, double**, unsigned, double*, unsigned, double*);
int N_AUXVARS = 0;


void vfieldfunc(unsigned n_, unsigned np_, double t, double *Y_, double *p_, double *f_, unsigned wkn_, double *wk_, unsigned xvn_, double *xv_){

f_[0] = k5p+k5pp*pow((m*Y/J5),n)/(1+pow((m*Y/J5),n))-k6*A;
f_[1] = (k3p+k3pp*A)*(1-P)/(J3+1-P)-k4*m*Y*P/(J4+P);
f_[2] = k1-(k2p+k2pp*P)*Y;

}




int heav(double x_, double *p_, double *wk_, double *xv_) {
  if (x_>0.0) {return 1;} else {return 0;}
}


double __rhs_if(int cond_, double e1_, double e2_, double *p_, double *wk_, double *xv_) {
  if (cond_) {return e1_;} else {return e2_;};
}


double __maxof2(double e1_, double e2_, double *p_, double *wk_, double *xv_) {
if (e1_ > e2_) {return e1_;} else {return e2_;};
}


double __minof2(double e1_, double e2_, double *p_, double *wk_, double *xv_) {
if (e1_ < e2_) {return e1_;} else {return e2_;};
}


double __maxof3(double e1_, double e2_, double e3_, double *p_, double *wk_, double *xv_) {
double temp_;
if (e1_ > e2_) {temp_ = e1_;} else {temp_ = e2_;};
if (e3_ > temp_) {return e3_;} else {return temp_;};
}


double __minof3(double e1_, double e2_, double e3_, double *p_, double *wk_, double *xv_) {
double temp_;
if (e1_ < e2_) {temp_ = e1_;} else {temp_ = e2_;};
if (e3_ < temp_) {return e3_;} else {return temp_;};
}


double __maxof4(double e1_, double e2_, double e3_, double e4_, double *p_, double *wk_, double *xv_) {
double temp_;
if (e1_ > e2_) {temp_ = e1_;} else {temp_ = e2_;};
if (e3_ > temp_) {temp_ = e3_;};
if (e4_ > temp_) {return e4_;} else {return temp_;};
}


double __minof4(double e1_, double e2_, double e3_, double e4_, double *p_, double *wk_, double *xv_) {
double temp_;
if (e1_ < e2_) {temp_ = e1_;} else {temp_ = e2_;};
if (e3_ < temp_) {temp_ = e3_;};
if (e4_ < temp_) {return e4_;} else {return temp_;};
}


double initcond(char *varname, double *p_, double *wk_, double *xv_) {

  if (strcmp(varname, "A")==0)
	return gICs[0];
  else if (strcmp(varname, "P")==0)
	return gICs[1];
  else if (strcmp(varname, "Y")==0)
	return gICs[2];
  else {
	fprintf(stderr, "Invalid variable name %s for initcond call\n", varname);
	return 0.0/0.0;
	}
}


int getindex(char *name, double *p_, double *wk_, double *xv_) {

  if (strcmp(name, "A")==0)
	return 0;
  else if (strcmp(name, "P")==0)
	return 1;
  else if (strcmp(name, "Y")==0)
	return 2;
  else if (strcmp(name, "J3")==0)
	return 3;
  else if (strcmp(name, "J4")==0)
	return 4;
  else if (strcmp(name, "J5")==0)
	return 5;
  else if (strcmp(name, "k1")==0)
	return 6;
  else if (strcmp(name, "k2p")==0)
	return 7;
  else if (strcmp(name, "k2pp")==0)
	return 8;
  else if (strcmp(name, "k3p")==0)
	return 9;
  else if (strcmp(name, "k3pp")==0)
	return 10;
  else if (strcmp(name, "k4")==0)
	return 11;
  else if (strcmp(name, "k5p")==0)
	return 12;
  else if (strcmp(name, "k5pp")==0)
	return 13;
  else if (strcmp(name, "k6")==0)
	return 14;
  else if (strcmp(name, "m")==0)
	return 15;
  else if (strcmp(name, "n")==0)
	return 16;
  else {
	fprintf(stderr, "Invalid name %s for getindex call\n", name);
	return 0.0/0.0;
	}
}


double globalindepvar(double t, double *p_, double *wk_, double *xv_) {
  return globalt0+t;
}


double getbound(char *name, int which_bd, double *p_, double *wk_, double *xv_) {
  return gBds[which_bd][getindex(name, p_, wk_, xv_)];
}

void auxvars(unsigned n_, unsigned np_, double t, double *Y_, double *p_, double *f_, unsigned wkn_, double *wk_, unsigned xvn_, double *xv_){


}


void jacobian(unsigned n_, unsigned np_, double t, double *Y_, double *p_, double **f_, unsigned wkn_, double *wk_, unsigned xvn_, double *xv_) {
}

void jacobianParam(unsigned n_, unsigned np_, double t, double *Y_, double *p_, double **f_, unsigned wkn_, double *wk_, unsigned xvn_, double *xv_) {
}
