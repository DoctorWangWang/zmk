#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_MARKLOGO
#define LV_ATTRIBUTE_IMG_MARKLOGO
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_MARKLOGO uint8_t marklogo_map[] = {
  0x00, 0x00, 0x00, 0x09, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xd5, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xee, 0x30, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xab, 0x68, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x2d, 0x48, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xee, 0xd8, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1a, 0x50, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x02, 0x12, 0xf0, 
  0x1f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3d, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x70, 0x07, 0x02, 0xf0, 0xf0, 0x1c, 0x00, 0x00, 
  0x70, 0x1f, 0xc7, 0xf1, 0xf8, 0x7f, 0x00, 0x00, 
  0xe0, 0x1b, 0xc7, 0xf3, 0xbc, 0xf7, 0x00, 0x00, 
  0xe0, 0x38, 0xc6, 0x03, 0x9c, 0xc7, 0x00, 0x00, 
  0xe0, 0x31, 0xce, 0x03, 0x19, 0xee, 0x00, 0x00, 
  0xe0, 0x70, 0xce, 0x03, 0x19, 0xfe, 0x00, 0x00, 
  0xe0, 0x71, 0xce, 0x07, 0x39, 0xe0, 0x00, 0x00, 
  0xe2, 0x33, 0x8c, 0x07, 0x39, 0xc0, 0x00, 0x00, 
  0x7e, 0x3f, 0x1c, 0x06, 0x30, 0xfe, 0x00, 0x00, 
  0x3e, 0x1e, 0x0c, 0x06, 0x30, 0x7c, 0x00, 0x00, 
};

const lv_img_dsc_t marklogo = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 61,
  .header.h = 18,
  .data_size = 152,
  .data = marklogo_map,
};