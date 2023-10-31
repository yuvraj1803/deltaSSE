#ifndef __SSE_H__
#define __SSE_H__

#include <stddef.h>
#include <stdint.h>

int     sse_fopen(const char* filename, const char* mode);
size_t  sse_fread(char* buf, size_t size, size_t nmemb, int fd);
size_t  sse_fwrite(char* buf, size_t size, size_t nmemb, int fd);
size_t  sse_fseek(int fd, uint64_t offset, int pos);
void    sse_rewind(int fd);
int     sse_fclose(int fd);

#endif