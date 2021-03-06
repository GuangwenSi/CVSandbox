#include <ximage.h>

static uint8_t effects_module_16x16_data[] =
{
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFE, 0xFF, 0xFE, 0x00, 0xFD, 0xFF, 0xFE, 0x00, 
    0xFD, 0xFB, 0xFB, 0x00, 0xFA, 0xFB, 0xFA, 0x00, 0x01, 0x03, 0x04, 0x06, 0x4C, 0x4C, 0x47, 0x53, 0x56, 0x55, 0x54, 0x68, 
    0x16, 0x18, 0x19, 0x17, 0x24, 0x24, 0x24, 0x2B, 0x3E, 0x3F, 0x3B, 0x44, 0x5C, 0x5B, 0x58, 0x5E, 0x4E, 0x4E, 0x4D, 0x54, 
    0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFC, 0xFC, 0xFC, 0x00, 0x05, 0x05, 0x06, 0x07, 
    0x82, 0x81, 0x81, 0x8B, 0xAB, 0xAA, 0x9E, 0xB6, 0xB7, 0xB7, 0xB4, 0xCB, 0xCF, 0xCF, 0xD1, 0xE5, 0xF3, 0xF6, 0xFF, 0xFF, 
    0xF7, 0xFA, 0xFF, 0xFF, 0xFC, 0xF7, 0xF1, 0xFE, 0xFD, 0xFC, 0xFE, 0xFF, 0xF8, 0xFA, 0xFF, 0xFF, 0xF7, 0xF8, 0xFF, 0xFF, 
    0xF2, 0xF3, 0xF8, 0xFB, 0x10, 0x0F, 0x0D, 0x12, 0xFF, 0xFF, 0xFF, 0x00, 0xFD, 0xFD, 0xFE, 0x00, 0xF9, 0xF9, 0xFA, 0x00, 
    0x03, 0x03, 0x06, 0x04, 0xEA, 0xE6, 0xD2, 0xF4, 0xFF, 0xFB, 0xD4, 0xFF, 0xFC, 0xFE, 0xFE, 0xFF, 0xD4, 0xE3, 0xFF, 0xFF, 
    0x86, 0x8F, 0xFF, 0xFF, 0x46, 0x61, 0xFF, 0xFF, 0xFB, 0xB2, 0x9E, 0xFF, 0xDD, 0xCB, 0xEB, 0xFF, 0xA0, 0xB2, 0xFF, 0xFF, 
    0xB5, 0xBE, 0xFF, 0xFF, 0xDF, 0xE3, 0xF7, 0xFB, 0x1B, 0x19, 0x17, 0x1D, 0xFF, 0xFE, 0xFE, 0x00, 0xFE, 0xFD, 0xFD, 0x00, 
    0xFC, 0xFC, 0xFB, 0x00, 0x4D, 0x53, 0x56, 0x56, 0xF1, 0xE6, 0xE5, 0xF8, 0xFF, 0x93, 0x9B, 0xFF, 0xFC, 0x9C, 0x9C, 0xFF, 
    0xC1, 0xE7, 0xFF, 0xFF, 0xAA, 0xB0, 0xFF, 0xFF, 0x2D, 0x39, 0xFF, 0xFF, 0x59, 0xD1, 0xFE, 0xFF, 0xDF, 0xF1, 0xEF, 0xFF, 
    0x9B, 0xAA, 0xFF, 0xFF, 0xAB, 0xB7, 0xFF, 0xFF, 0xE9, 0xED, 0xFB, 0xFD, 0x21, 0x22, 0x20, 0x28, 0xFE, 0xFF, 0xFE, 0x00, 
    0x2C, 0x30, 0x35, 0x33, 0xB0, 0xB0, 0xB0, 0xB8, 0xFF, 0xFA, 0xF5, 0xFF, 0xFF, 0x75, 0x7D, 0xFF, 0xFB, 0x4B, 0x48, 0xFF, 
    0xFE, 0x46, 0x3E, 0xFF, 0xEE, 0xDC, 0xE0, 0xFF, 0xAF, 0xD3, 0xFF, 0xFF, 0xBF, 0xEB, 0xE7, 0xFF, 0xFF, 0x2A, 0x4E, 0xFF, 
    0xD8, 0xD6, 0xC0, 0xFF, 0xC9, 0xF1, 0xEF, 0xFF, 0xE7, 0xEF, 0xF9, 0xFF, 0xFA, 0xF9, 0xFE, 0xFF, 0x26, 0x26, 0x25, 0x37, 
    0x7E, 0x80, 0x81, 0x86, 0xF6, 0xEB, 0xD1, 0xF9, 0xFF, 0xE6, 0x8C, 0xFF, 0xFE, 0xE4, 0x8F, 0xFF, 0xF7, 0xA3, 0xB0, 0xFF, 
    0xFB, 0x3A, 0x3C, 0xFF, 0xFE, 0x38, 0x44, 0xFF, 0xFE, 0xC5, 0xC7, 0xFF, 0xFE, 0xFC, 0xFF, 0xFF, 0xFF, 0xD0, 0xFE, 0xFF, 
    0xFB, 0x45, 0xFF, 0xFF, 0xFF, 0x2E, 0xD5, 0xFF, 0xDD, 0xE2, 0xB5, 0xFF, 0xFF, 0xA8, 0xFF, 0xFF, 0xFF, 0xF5, 0xFF, 0xFF, 
    0x2B, 0x2F, 0x2D, 0x49, 0xAE, 0xAE, 0xAC, 0xB3, 0xFF, 0xEC, 0x8D, 0xFF, 0xFB, 0xCE, 0x5C, 0xFF, 0xFB, 0xCC, 0x56, 0xFF, 
    0xF8, 0xE3, 0xB8, 0xFF, 0xFE, 0x8F, 0xAA, 0xFF, 0xF9, 0xE9, 0xEF, 0xFF, 0xA6, 0xF7, 0xC2, 0xFF, 0xCD, 0xEC, 0xCB, 0xFF, 
    0xFF, 0xC3, 0xFF, 0xFF, 0xFE, 0xAF, 0xFF, 0xFF, 0xFF, 0x2E, 0xFF, 0xFF, 0x68, 0x96, 0xE9, 0xFF, 0xE2, 0x7F, 0xFF, 0xFF, 
    0xFF, 0xEC, 0xFF, 0xFF, 0x2A, 0x2D, 0x2A, 0x48, 0x22, 0x24, 0x29, 0x24, 0xEF, 0xE1, 0xB9, 0xF4, 0xFE, 0xD2, 0x5E, 0xFF, 
    0xFE, 0xD5, 0x6E, 0xFF, 0xFA, 0xF6, 0xDB, 0xFF, 0xF1, 0xFC, 0xFD, 0xFF, 0x88, 0xEE, 0x8D, 0xFF, 0x77, 0xCD, 0x79, 0xFF, 
    0x79, 0xD5, 0x71, 0xFF, 0xF8, 0xE0, 0xFC, 0xFF, 0xFF, 0xAA, 0xFF, 0xFF, 0xE0, 0xC8, 0xFE, 0xFF, 0xC1, 0xF7, 0x53, 0xFF, 
    0xA4, 0x64, 0xD0, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0x2E, 0x2E, 0x2C, 0x4A, 0xFD, 0xFD, 0xFD, 0x00, 0x77, 0x76, 0x75, 0x80, 
    0xFF, 0xF8, 0xD6, 0xFF, 0xD9, 0xDB, 0xEE, 0xFF, 0x8E, 0x9B, 0xF3, 0xFF, 0xB2, 0xAF, 0xF2, 0xFF, 0xB7, 0xF1, 0x99, 0xFF, 
    0x7A, 0xCA, 0x73, 0xFF, 0x63, 0xD1, 0x5F, 0xFF, 0xC5, 0xFA, 0xD7, 0xFF, 0xF5, 0xFD, 0xF6, 0xFF, 0xFD, 0xFD, 0x64, 0xFF, 
    0xFF, 0xEC, 0x11, 0xFF, 0xBA, 0xA7, 0x2E, 0xFF, 0xFD, 0xFD, 0xF9, 0xFF, 0x2F, 0x32, 0x31, 0x4A, 0xFF, 0xFF, 0xFF, 0x00, 
    0x0C, 0x0C, 0x0B, 0x0C, 0xC7, 0xC7, 0xD7, 0xDE, 0x9D, 0xA6, 0xF4, 0xFF, 0x7F, 0x88, 0xDD, 0xFF, 0x75, 0x74, 0xE3, 0xFF, 
    0xC7, 0xD5, 0xD9, 0xFF, 0xA5, 0xE8, 0x9A, 0xFF, 0xE2, 0xF0, 0xEB, 0xFF, 0xFC, 0xA9, 0xEF, 0xFF, 0xEF, 0xDE, 0xDC, 0xFF, 
    0xFF, 0xFC, 0x4F, 0xFF, 0xFF, 0xE4, 0x38, 0xFF, 0xFF, 0xAD, 0x03, 0xFF, 0xFE, 0xFF, 0xFA, 0xFF, 0x37, 0x39, 0x36, 0x4F, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x4C, 0x4C, 0x4A, 0x51, 0xC1, 0xC5, 0xF2, 0xFF, 0x7A, 0x84, 0xDD, 0xFF, 
    0x7E, 0x8D, 0xD7, 0xFF, 0xD5, 0xDB, 0xEE, 0xFF, 0xFA, 0xED, 0xF3, 0xFF, 0xFD, 0xA0, 0xD7, 0xFF, 0xF9, 0x71, 0xB8, 0xFF, 
    0xE6, 0x6E, 0xD8, 0xFF, 0xEB, 0xFB, 0x93, 0xFF, 0xFE, 0xDA, 0x0D, 0xFF, 0x96, 0x82, 0x97, 0xFF, 0xFE, 0xFF, 0xD7, 0xFF, 
    0x37, 0x38, 0x36, 0x4D, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x9C, 0x9D, 0xA4, 0xB7, 
    0xCC, 0xD2, 0xF4, 0xFF, 0xEA, 0xDB, 0xEF, 0xFF, 0xFD, 0xC3, 0xF9, 0xFF, 0xED, 0xCD, 0xEA, 0xFF, 0xF1, 0xA1, 0xC6, 0xFF, 
    0xF5, 0x76, 0xB0, 0xFF, 0xFC, 0x57, 0xB7, 0xFF, 0xFD, 0xF9, 0xFA, 0xFF, 0xFE, 0xFE, 0xFD, 0xFF, 0xF6, 0xFE, 0xF6, 0xFF, 
    0xFE, 0xFF, 0xF2, 0xFF, 0x00, 0x00, 0x00, 0x31, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x28, 0x29, 0x26, 0x2B, 0xF1, 0xE2, 0xEE, 0xF8, 0xFF, 0xC2, 0xFF, 0xFF, 0xFC, 0xAD, 0xF8, 0xFF, 0xF8, 0xAF, 0xF1, 0xFF, 
    0xEF, 0xBE, 0xD8, 0xFF, 0xFD, 0xAE, 0xD9, 0xFF, 0xD6, 0xC2, 0xCE, 0xF3, 0x43, 0x54, 0x50, 0x87, 0x10, 0x11, 0x11, 0x4E, 
    0x08, 0x07, 0x09, 0x2A, 0x0C, 0x0C, 0x0F, 0x18, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x7A, 0x7A, 0x7C, 0x8A, 0xFF, 0xD1, 0xFF, 0xFF, 0xFE, 0xA9, 0xF7, 0xFF, 
    0xFF, 0xB5, 0xF6, 0xFF, 0xEA, 0xDD, 0xE9, 0xFE, 0x85, 0x8F, 0x8A, 0x9F, 0x14, 0x19, 0x16, 0x1A, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x0E, 0x10, 0x0E, 0x11, 0xD2, 0xC2, 0xD3, 0xE4, 
    0xFF, 0xDB, 0xFF, 0xFF, 0xB0, 0xAD, 0xB0, 0xC5, 0x36, 0x39, 0x36, 0x40, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x3E, 0x40, 0x3F, 0x48, 0x5B, 0x60, 0x5D, 0x69, 0x01, 0x03, 0x01, 0x04, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 
};

static const ximage image_effects_module_16x16 =
{
    &effects_module_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
