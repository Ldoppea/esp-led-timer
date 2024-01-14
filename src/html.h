#ifndef __HTML_H
#define __HTML_H

#include <arduino.h>

const uint32_t INDEX_HTML_SIZE = 2684;
const uint8_t INDEX_HTML[] PROGMEM = {
  31, 139, 8, 0, 0, 0, 0, 0, 0, 19, 165, 90, 109, 111, 227, 54, 
  18, 254, 158, 95, 49, 171, 93, 84, 118, 107, 91, 118, 210, 93, 20, 126, 
  59, 96, 223, 208, 5, 110, 183, 69, 211, 226, 62, 20, 139, 132, 150, 198, 
  54, 47, 18, 169, 19, 169, 56, 185, 32, 255, 253, 64, 82, 148, 40, 89, 
  182, 236, 28, 16, 192, 34, 57, 124, 230, 225, 12, 103, 56, 162, 50, 127, 
  21, 241, 80, 62, 166, 8, 91, 153, 196, 203, 139, 185, 250, 129, 152, 176, 
  205, 194, 67, 230, 169, 14, 36, 209, 242, 2, 96, 158, 160, 36, 16, 110, 
  73, 38, 80, 46, 188, 92, 174, 135, 191, 120, 16, 84, 67, 140, 36, 184, 
  240, 238, 41, 238, 82, 158, 73, 15, 66, 206, 36, 50, 185, 240, 118, 52, 
  146, 219, 69, 132, 247, 52, 196, 161, 110, 12, 128, 50, 42, 41, 137, 135, 
  34, 36, 49, 46, 38, 163, 177, 133, 146, 84, 198, 184, 252, 147, 38, 152, 
  193, 7, 206, 100, 198, 227, 121, 96, 58, 47, 230, 129, 33, 51, 23, 242, 
  81, 181, 1, 86, 60, 122, 132, 167, 11, 0, 128, 53, 103, 114, 184, 38, 
  9, 141, 31, 167, 224, 95, 227, 134, 35, 252, 245, 197, 31, 192, 144, 164, 
  105, 140, 67, 241, 40, 36, 38, 3, 120, 31, 83, 118, 247, 149, 132, 215, 
  186, 253, 153, 51, 57, 128, 63, 248, 138, 75, 62, 0, 255, 87, 140, 239, 
  81, 210, 144, 192, 55, 204, 209, 31, 128, 32, 76, 12, 5, 102, 116, 61, 
  211, 90, 66, 30, 243, 108, 10, 175, 39, 147, 137, 233, 72, 200, 131, 89, 
  211, 20, 222, 141, 199, 233, 131, 237, 205, 54, 148, 77, 97, 12, 36, 151, 
  92, 245, 61, 95, 0, 172, 41, 198, 145, 64, 89, 48, 86, 6, 34, 148, 
  97, 54, 84, 14, 152, 2, 101, 49, 101, 56, 20, 244, 191, 104, 80, 86, 
  60, 139, 48, 155, 194, 36, 125, 0, 193, 99, 26, 193, 235, 171, 171, 43, 
  119, 108, 152, 145, 136, 230, 98, 10, 111, 173, 230, 136, 138, 52, 38, 143, 
  83, 88, 199, 88, 116, 169, 167, 97, 68, 51, 12, 37, 229, 108, 170, 214, 
  144, 39, 172, 78, 116, 130, 137, 101, 25, 147, 21, 198, 174, 81, 119, 72, 
  55, 91, 57, 133, 21, 143, 35, 43, 180, 202, 165, 228, 76, 249, 49, 205, 
  229, 0, 4, 198, 24, 218, 117, 37, 148, 89, 147, 140, 103, 21, 140, 90, 
  87, 169, 8, 32, 37, 81, 68, 217, 102, 10, 227, 209, 91, 219, 87, 154, 
  173, 234, 122, 137, 13, 86, 36, 188, 219, 100, 60, 103, 209, 20, 94, 35, 
  98, 157, 180, 93, 90, 140, 15, 83, 184, 180, 99, 122, 33, 83, 198, 101, 
  239, 111, 229, 141, 133, 31, 110, 49, 188, 91, 241, 7, 255, 123, 191, 177, 
  62, 51, 243, 231, 58, 234, 116, 203, 239, 49, 43, 12, 98, 27, 102, 154, 
  105, 21, 147, 107, 220, 162, 168, 97, 208, 41, 9, 37, 189, 71, 11, 99, 
  91, 5, 142, 105, 182, 1, 133, 97, 216, 0, 138, 168, 32, 171, 24, 35, 
  11, 85, 181, 11, 48, 219, 81, 192, 241, 148, 132, 84, 62, 106, 219, 31, 
  183, 98, 106, 172, 68, 163, 239, 253, 98, 238, 9, 123, 46, 227, 59, 51, 
  64, 98, 186, 97, 67, 42, 49, 17, 83, 8, 145, 73, 204, 234, 190, 47, 
  188, 168, 52, 109, 39, 133, 2, 137, 15, 114, 168, 103, 214, 231, 184, 251, 
  234, 151, 240, 63, 187, 198, 46, 178, 56, 34, 79, 18, 146, 217, 68, 17, 
  230, 153, 80, 49, 156, 114, 186, 175, 125, 236, 70, 194, 182, 116, 90, 177, 
  9, 25, 103, 181, 208, 28, 74, 158, 182, 111, 77, 39, 174, 44, 143, 121, 
  80, 164, 173, 185, 202, 90, 58, 217, 149, 9, 129, 70, 11, 79, 72, 34, 
  209, 3, 235, 151, 165, 198, 153, 199, 184, 65, 22, 53, 19, 98, 209, 107, 
  68, 82, 243, 171, 132, 117, 232, 174, 121, 182, 240, 18, 30, 161, 183, 252, 
  202, 35, 156, 206, 3, 221, 95, 74, 21, 155, 89, 233, 52, 82, 197, 0, 
  192, 156, 167, 202, 93, 112, 79, 226, 28, 23, 222, 196, 43, 244, 78, 230, 
  129, 25, 57, 40, 122, 105, 69, 47, 59, 69, 175, 156, 53, 154, 57, 87, 
  157, 115, 198, 222, 242, 159, 124, 195, 59, 229, 134, 19, 7, 252, 11, 91, 
  159, 48, 227, 210, 153, 241, 21, 133, 32, 27, 108, 78, 154, 7, 198, 100, 
  101, 187, 72, 36, 202, 130, 12, 31, 228, 141, 49, 227, 55, 124, 144, 243, 
  192, 140, 21, 174, 9, 10, 223, 204, 183, 19, 45, 45, 213, 122, 189, 229, 
  120, 60, 213, 127, 243, 96, 59, 217, 115, 162, 3, 174, 197, 111, 132, 36, 
  153, 244, 150, 215, 234, 167, 142, 223, 46, 205, 83, 37, 204, 211, 110, 217, 
  12, 5, 74, 111, 249, 135, 250, 57, 196, 188, 117, 119, 173, 50, 117, 36, 
  48, 20, 194, 91, 190, 47, 159, 247, 118, 154, 78, 61, 160, 243, 169, 151, 
  17, 182, 65, 79, 43, 119, 102, 171, 195, 98, 225, 253, 236, 169, 115, 116, 
  225, 93, 190, 125, 235, 181, 177, 141, 112, 77, 242, 88, 222, 184, 106, 63, 
  154, 190, 86, 218, 243, 192, 70, 150, 110, 69, 40, 9, 141, 69, 33, 82, 
  100, 131, 229, 7, 206, 214, 116, 147, 103, 68, 185, 122, 30, 216, 110, 35, 
  84, 139, 204, 80, 75, 54, 67, 83, 73, 241, 44, 113, 36, 110, 84, 219, 
  3, 206, 68, 190, 74, 168, 92, 120, 25, 202, 60, 99, 176, 38, 177, 168, 
  133, 89, 90, 61, 215, 237, 154, 11, 188, 217, 209, 53, 245, 150, 159, 152, 
  82, 5, 255, 162, 159, 105, 211, 172, 123, 166, 181, 71, 149, 177, 110, 137, 
  81, 84, 100, 21, 102, 69, 32, 72, 79, 97, 179, 229, 66, 42, 12, 111, 
  249, 107, 241, 212, 73, 69, 101, 106, 67, 163, 156, 92, 208, 168, 218, 9, 
  121, 136, 145, 109, 228, 118, 225, 93, 77, 206, 103, 149, 18, 33, 118, 60, 
  139, 188, 229, 239, 197, 211, 25, 172, 202, 201, 5, 171, 170, 125, 26, 171, 
  109, 118, 170, 27, 69, 152, 33, 50, 65, 238, 85, 192, 23, 222, 116, 250, 
  94, 224, 84, 23, 209, 241, 109, 77, 209, 185, 198, 116, 38, 223, 168, 156, 
  224, 45, 175, 171, 30, 136, 48, 38, 143, 208, 75, 40, 235, 119, 242, 101, 
  121, 178, 82, 196, 244, 81, 214, 68, 45, 232, 238, 107, 251, 191, 204, 28, 
  174, 55, 109, 41, 1, 86, 7, 51, 210, 81, 214, 13, 184, 130, 243, 73, 
  201, 234, 100, 123, 155, 188, 27, 242, 156, 73, 123, 98, 234, 198, 89, 68, 
  93, 144, 130, 101, 173, 75, 211, 156, 20, 52, 175, 78, 51, 114, 68, 239, 
  43, 108, 225, 45, 231, 65, 68, 239, 157, 241, 227, 91, 147, 164, 238, 142, 
  84, 173, 45, 141, 34, 116, 143, 93, 39, 157, 171, 13, 112, 83, 36, 213, 
  229, 53, 185, 71, 48, 13, 248, 1, 50, 92, 113, 190, 127, 202, 5, 42, 
  179, 218, 20, 95, 203, 237, 129, 147, 220, 231, 34, 204, 104, 90, 28, 211, 
  49, 202, 2, 118, 86, 182, 117, 137, 85, 53, 243, 52, 34, 18, 245, 78, 
  204, 96, 1, 57, 139, 112, 77, 25, 70, 237, 18, 55, 130, 38, 174, 212, 
  133, 169, 103, 197, 35, 11, 97, 157, 51, 93, 232, 194, 6, 165, 57, 87, 
  122, 182, 56, 214, 239, 121, 66, 66, 134, 34, 229, 76, 32, 44, 128, 236, 
  8, 149, 176, 70, 25, 110, 123, 126, 96, 72, 250, 253, 89, 37, 174, 108, 
  97, 197, 236, 188, 209, 191, 5, 103, 189, 82, 42, 226, 97, 158, 32, 147, 
  163, 13, 202, 79, 49, 170, 199, 247, 143, 95, 162, 158, 111, 211, 189, 223, 
  31, 105, 63, 97, 4, 11, 120, 207, 121, 140, 132, 245, 12, 246, 200, 202, 
  156, 134, 230, 68, 109, 13, 212, 1, 115, 68, 58, 33, 237, 65, 224, 247, 
  71, 186, 6, 171, 144, 236, 72, 39, 132, 205, 218, 251, 16, 118, 164, 19, 
  162, 153, 138, 246, 161, 154, 18, 157, 144, 245, 252, 177, 15, 88, 141, 117, 
  66, 57, 225, 188, 143, 227, 12, 158, 228, 63, 146, 30, 114, 27, 73, 103, 
  23, 5, 194, 154, 103, 208, 83, 91, 158, 194, 2, 198, 51, 160, 48, 135, 
  171, 25, 208, 159, 126, 170, 54, 242, 97, 61, 183, 154, 211, 155, 39, 250, 
  124, 19, 21, 21, 213, 109, 59, 111, 241, 55, 253, 62, 178, 50, 179, 115, 
  128, 119, 36, 99, 147, 99, 168, 90, 224, 108, 200, 203, 46, 200, 203, 179, 
  33, 175, 186, 32, 175, 44, 228, 179, 53, 191, 73, 52, 250, 64, 16, 31, 
  148, 103, 79, 136, 116, 155, 56, 70, 229, 171, 252, 194, 148, 154, 102, 230, 
  115, 107, 130, 82, 251, 249, 64, 134, 42, 19, 15, 195, 29, 124, 230, 89, 
  242, 145, 72, 210, 235, 80, 175, 107, 94, 191, 239, 102, 47, 33, 193, 38, 
  24, 88, 156, 149, 168, 254, 1, 50, 203, 17, 166, 238, 50, 92, 72, 39, 
  36, 187, 144, 219, 147, 86, 151, 2, 146, 118, 225, 214, 130, 233, 32, 156, 
  114, 121, 132, 49, 74, 172, 102, 29, 25, 54, 102, 56, 34, 80, 91, 77, 
  67, 142, 164, 41, 50, 215, 158, 3, 216, 203, 239, 45, 162, 46, 228, 160, 
  105, 221, 99, 19, 73, 90, 200, 147, 180, 95, 166, 143, 32, 128, 111, 220, 
  156, 88, 3, 32, 2, 232, 26, 68, 30, 134, 40, 196, 58, 143, 7, 176, 
  67, 63, 142, 129, 161, 114, 220, 6, 37, 144, 242, 88, 179, 233, 167, 126, 
  24, 14, 156, 156, 147, 160, 220, 242, 104, 10, 254, 239, 191, 93, 255, 233, 
  15, 202, 126, 117, 139, 50, 45, 8, 218, 112, 170, 8, 9, 148, 42, 154, 
  120, 46, 123, 189, 62, 44, 150, 240, 4, 59, 202, 34, 190, 27, 197, 60, 
  212, 201, 103, 148, 97, 204, 73, 212, 235, 207, 224, 121, 0, 151, 227, 241, 
  184, 95, 11, 156, 50, 100, 156, 216, 236, 169, 56, 110, 198, 205, 150, 231, 
  153, 128, 5, 92, 203, 140, 178, 77, 239, 43, 145, 219, 209, 58, 230, 220, 
  72, 67, 0, 87, 239, 198, 227, 126, 127, 148, 146, 72, 191, 195, 247, 46, 
  7, 224, 143, 253, 70, 200, 36, 148, 229, 18, 219, 113, 12, 208, 176, 208, 
  244, 163, 1, 132, 0, 222, 117, 195, 10, 12, 57, 139, 28, 216, 22, 40, 
  24, 150, 218, 127, 84, 152, 7, 33, 143, 159, 87, 126, 127, 68, 25, 195, 
  236, 79, 124, 144, 176, 128, 219, 55, 79, 90, 201, 243, 244, 205, 83, 1, 
  175, 30, 11, 66, 207, 183, 199, 178, 212, 6, 229, 181, 170, 213, 78, 175, 
  162, 116, 105, 87, 49, 213, 205, 174, 26, 202, 117, 172, 158, 160, 211, 116, 
  247, 106, 213, 117, 143, 115, 44, 155, 169, 170, 179, 115, 102, 107, 121, 96, 
  230, 187, 213, 65, 1, 67, 215, 224, 240, 42, 46, 130, 48, 130, 31, 126, 
  128, 87, 110, 101, 234, 158, 208, 65, 0, 215, 52, 201, 99, 181, 124, 61, 
  88, 142, 180, 212, 178, 2, 229, 23, 117, 7, 122, 79, 98, 27, 37, 206, 
  251, 71, 165, 26, 134, 11, 112, 78, 214, 78, 203, 129, 138, 168, 73, 21, 
  81, 150, 152, 242, 241, 142, 202, 45, 100, 72, 98, 67, 15, 84, 78, 120, 
  132, 201, 216, 238, 212, 86, 190, 13, 174, 102, 183, 236, 51, 54, 222, 174, 
  54, 207, 75, 40, 87, 156, 159, 1, 99, 129, 218, 11, 175, 90, 220, 224, 
  90, 61, 140, 145, 100, 37, 189, 166, 165, 29, 37, 135, 5, 29, 161, 227, 
  239, 37, 230, 110, 186, 59, 28, 13, 207, 122, 121, 208, 178, 140, 19, 107, 
  81, 117, 173, 88, 199, 106, 179, 201, 209, 202, 3, 89, 100, 252, 114, 135, 
  143, 3, 115, 255, 218, 12, 111, 125, 161, 214, 40, 64, 74, 195, 168, 65, 
  123, 18, 57, 16, 179, 115, 18, 196, 233, 7, 139, 210, 230, 28, 43, 85, 
  68, 190, 42, 179, 9, 191, 115, 247, 0, 137, 49, 147, 189, 219, 207, 132, 
  42, 251, 72, 174, 118, 44, 188, 121, 186, 195, 199, 231, 219, 126, 211, 117, 
  65, 0, 31, 245, 229, 138, 228, 64, 226, 152, 239, 64, 110, 17, 62, 93, 
  255, 174, 58, 140, 255, 129, 74, 97, 28, 182, 127, 164, 213, 2, 96, 127, 
  219, 171, 189, 252, 246, 208, 113, 38, 80, 230, 169, 173, 52, 91, 11, 65, 
  83, 172, 126, 164, 247, 199, 138, 33, 35, 228, 247, 207, 124, 131, 112, 52, 
  124, 176, 223, 63, 93, 53, 97, 134, 68, 98, 161, 169, 231, 59, 117, 19, 
  52, 102, 141, 168, 218, 133, 85, 233, 125, 91, 50, 1, 248, 219, 183, 175, 
  24, 254, 0, 124, 253, 98, 96, 31, 46, 237, 195, 149, 255, 125, 180, 230, 
  217, 39, 18, 110, 123, 61, 125, 167, 160, 190, 149, 69, 248, 80, 164, 21, 
  39, 119, 24, 210, 230, 10, 228, 48, 87, 61, 238, 215, 146, 142, 238, 26, 
  233, 239, 235, 11, 240, 205, 29, 142, 191, 47, 208, 88, 201, 205, 155, 39, 
  205, 199, 158, 145, 174, 168, 122, 63, 62, 89, 56, 161, 76, 233, 29, 251, 
  179, 253, 213, 152, 75, 169, 195, 171, 209, 227, 245, 213, 232, 174, 145, 250, 
  15, 129, 207, 92, 57, 205, 146, 223, 151, 81, 23, 174, 31, 204, 247, 127, 
  69, 214, 92, 116, 189, 121, 162, 240, 19, 76, 158, 193, 50, 46, 110, 22, 
  225, 182, 133, 94, 122, 234, 166, 0, 72, 139, 164, 240, 97, 75, 227, 168, 
  167, 9, 28, 25, 215, 164, 107, 227, 141, 109, 229, 10, 167, 238, 249, 208, 
  119, 104, 150, 33, 82, 19, 175, 35, 53, 119, 238, 158, 248, 161, 245, 109, 
  51, 231, 133, 234, 185, 171, 38, 181, 239, 139, 109, 65, 108, 110, 9, 58, 
  195, 184, 126, 211, 48, 59, 43, 160, 187, 223, 137, 111, 251, 35, 115, 27, 
  168, 182, 12, 44, 23, 46, 181, 19, 222, 173, 85, 97, 117, 171, 222, 185, 
  104, 28, 101, 200, 244, 253, 65, 117, 10, 29, 2, 172, 153, 173, 168, 252, 
  57, 83, 5, 191, 58, 25, 90, 234, 135, 150, 180, 104, 177, 202, 252, 122, 
  112, 160, 81, 111, 28, 190, 117, 50, 85, 106, 203, 27, 251, 137, 53, 39, 
  103, 225, 86, 125, 72, 59, 176, 136, 242, 101, 130, 71, 120, 204, 235, 110, 
  5, 91, 185, 192, 44, 167, 58, 167, 141, 216, 64, 163, 85, 251, 177, 115, 
  145, 229, 39, 81, 195, 55, 166, 225, 221, 65, 186, 135, 84, 14, 39, 170, 
  16, 211, 231, 164, 122, 4, 42, 224, 235, 111, 31, 63, 221, 252, 245, 237, 
  227, 167, 207, 39, 51, 169, 149, 219, 39, 154, 174, 154, 115, 204, 128, 251, 
  133, 252, 17, 51, 58, 194, 3, 7, 255, 12, 147, 214, 11, 186, 179, 141, 
  234, 78, 31, 232, 59, 139, 23, 232, 214, 245, 223, 139, 85, 243, 244, 165, 
  154, 245, 71, 234, 151, 171, 54, 211, 207, 214, 189, 255, 201, 249, 4, 10, 
  231, 189, 247, 29, 188, 22, 238, 218, 66, 123, 19, 207, 182, 169, 205, 247, 
  78, 76, 236, 157, 40, 221, 201, 172, 250, 140, 83, 179, 77, 117, 197, 88, 
  20, 160, 51, 253, 161, 198, 126, 156, 153, 7, 230, 255, 95, 230, 129, 249, 
  151, 195, 255, 1, 153, 101, 225, 177, 131, 40, 0, 0
};

#endif // __HTML_H
