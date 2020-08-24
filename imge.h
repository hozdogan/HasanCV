#pragma once
#ifndef  __IMGE_H__
#define __IMGE_H__
#include <windows.h>

BYTE* LoadBMP(int% width, int% height, long% size, LPCTSTR bmpfile);
bool  SaveBMP(BYTE* Buffer, int width, int height, long paddedsize, LPCTSTR bmpfile);
BYTE* ConvertBMPToIntensity(BYTE* Buffer, int width, int height);
BYTE* ConvertIntensityToBMP(BYTE* Buffer, int width, int height, long% newsize);
BYTE* DrawShape(BYTE* Buffer, int width, int height, int x, int y, int w_size, int h_size);
BYTE* Crop(BYTE* Buffer, int buffer_width, int Box_w, int Box_h, int x, int y);
BYTE* BinaryImage(BYTE* Buffer, int Width, int Height, int);
int D2_K_Mean_Clustering(BYTE* Buffer, int Width, int Height);
BYTE* RGBScale(BYTE* Buffer, int width, int height, long newsize);
BYTE* Dilation(BYTE* Buffer, int Width, int Height, BYTE* Mask, int m_w, int m_h);
BYTE* Erosion(BYTE* Buffer, int Width, int Height, BYTE* Mask, int m_w, int m_h);
BYTE* MirrorImage(BYTE* Buffer, long size);
BYTE* MULTID_K_Means_Clustering(BYTE* Buffer, int Width, int Height, int Tnumber);
BYTE* MultD_K_Means_Clustering(BYTE* Buffer, int Width, int Height, int Tnumber);
BYTE* Boundary(BYTE* Buffer, BYTE* DBuffer, int Width, int Height);
BYTE* CCL(BYTE* Buffer, int Width, int Height);
BYTE* CCLColoring(BYTE* Buffer, BYTE* CBuffer, int Width, int Height);
int CounterObject(BYTE* Buffer, int Width, int Height);
double* Convolution(BYTE* Buffer, int Width, int Height, double* Mask, int m_w, int m_h);
BYTE* Convolution(BYTE* Buffer, int Width, int Height, BYTE* Mask, int m_w, int m_h);
double* edgeimage(double* buffer, double* buffer2, int maxvalue, int w_new, int h_new);//normalization
double* gradient(double* buffer, double* buffer2, int width, int height);
double* nms(double* edge, double* angle, int width, int height);//türev yonunde baktýk 
double* histerize_threshold(double* Buffer, int Width, int Height);
double* binaryedge(double* buffer, double* angle, int width, int height);//kenar yönünde baktýk

//2 Yýl Sonra ..d
BYTE** Max_Pooling1D(BYTE**, int);
BYTE findMax(BYTE*, int);
BYTE** Digital_ZOOM(BYTE**,int,int,int);
BYTE** Digital_ZOOM_2(BYTE**, int, int);
#endif // ! __IMGE_H__
