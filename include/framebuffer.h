#pragma once
#include <stdint.h>

typedef struct{
	int width;
	int height;
	uint32_t *pixels;
} Framebuffer;

void clearScreen(Framebuffer *frame, uint32_t color);

void setPixel(Framebuffer* frame, int x, int y, uint32_t color);

