#ifndef _img_h
#define _img_h
#include <stdlib.h>
#include <stdio.h>

typedef struct _MyImage {
	int width;
	int height;
    unsigned char *data;
}MyImage;

MyImage *createMyImage(int width, int height)
void freeMyImage(MyImage *img);
void setPixel(MyImage *img);
unsigned char *getPixel (MyImage *img,int x, int y);
void sePixel(MyImage *img,int x,int y, unsigned char r,unsigned char g,unsigned char b);

void fillcolor(MyImage *img, unsigned char r, unsigned char g,unsigned char b);

	int x ,y ;
	
	for(y=0;y<img->height;y++){
		for(x=0;x<img->width;x++){
			setPixel(img,x,y,r,g,b);
		}
	}
#endif	
