#include "img.h"
#include <stdlib.h>

MyImage *createMyimage(int width, int height){
	MyImage *img;
	
	img = (MyImage*)malloc(sizeof(MyImage));
	img->width = width;
	img->height = height;
	img->data = (unsigned char *)malloc(sizeof(unsigned char)*3*width*height);
	return img;
}

void freeMyImage(MyImage *img){
     free(img->data);
	 free(img);
}	
unsigned char *getPixel(MyImage *img, int x,int y){
int k;
k = 3*(img->width*y+x);
return img->data+k;
}

void setPixel(MyImage *img,int x,int y,unsigned char r, unsigned char g ,unsigned char b){
	unsigned char *pixel;	
	pixel =getPixel(img,x,y);
	pixel[0]=r;
	pixel[1]=g;
	pixel[2]=b;
}

void saveImage(MyImage *img, char *filename){
	int filesize;
	unsigned char *compressed_data;
	
	filesize = WebPeEncodeRGB(img->data,
							  img->width, img->height, img->width,
							  95,
							  &compressed_data);
							  
web_file =fopen(filename,"wb");
fwrite(compressed_data, sizeof(unsigned char)filesize,webp_file);
fclose(webp_file);

WenFree(compressed data);							  
							  
}
