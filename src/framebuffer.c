#include "framebuffer.h"

void clearScreen(Framebuffer *frame, uint32_t color){
	for(int i = 0; i < frame->width*frame->height; i++){
		frame->pixels[i] = color;
	}
}

void setPixel(Framebuffer* frame, int x, int y, uint32_t color){
	frame->pixels[y*frame->width + x] = color;
}