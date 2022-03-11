#ifndef _img_h
#define _img_h

typedef struct _MyImage {
	int width;
	int height;
    unsigned char *data;
}MyImage;

MyImage *createMyImage(int width, int height);
void freeMyImage(MyImage *img);

#endif	