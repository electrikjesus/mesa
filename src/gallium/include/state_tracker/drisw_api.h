#ifndef _DRISW_API_H_
#define _DRISW_API_H_

#include "pipe/p_compiler.h"

struct pipe_screen;
struct dri_drawable;

/**
 * This callback struct is intended for the winsys to call the loader.
 */
struct drisw_loader_funcs
{
   void (*get_image) (struct dri_drawable *dri_drawable,
                      int x, int y, unsigned width, unsigned height, unsigned stride,
                      void *data);
   void (*put_image) (struct dri_drawable *dri_drawable,
                      void *data, unsigned width, unsigned height);
   void (*put_image2) (struct dri_drawable *dri_drawable,
                       void *data, int x, int y, unsigned width, unsigned height, unsigned stride);
};

#endif
