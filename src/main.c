#include <stdio.h>
#include <stdlib.h>
#include "png.h"

int main(int argc, char *argv[]) {
	image_t *image = image_new(1920, 1080);

	for(int y = 0; y < image->height; y++)
		for(int x = 0; x < image->width; x++)
			image->pixels[y * image->width + x] = (rgba_t) {(unsigned char) ((float) x / image->width * 255), (unsigned char) ((float) y / image->height * 255), 127, 255};

	image_save(image, "render.png");
	image_free(image);

	return 0;
}