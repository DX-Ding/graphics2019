#pragma once
#define GLUT_DISABLE_ATEXIT_HACK  
#include "GL/GLUT.H"  
void loadTex(int i, char *filename, GLuint* texture);
void loadTex_alpha(int i, char *filename, GLuint* texture);
