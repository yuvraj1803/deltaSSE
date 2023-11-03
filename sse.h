#ifndef __SSE_H__
#define __SSE_H__

#include <stddef.h>
#include <stdint.h>

/*
    If any of the API functions return a negative integer, that indicates an error.
*/

/*
    +   guestOS's filesystem's root is '/'.
    +   all paths need to begin with the root.
        Valid Example:      /hello.txt
        Invalid Example:    hello.txt
*/

int  sse_fread(char* buf, size_t size, size_t nmemb, int fd);
/*
    sse_fread reads from the hypervisor's filesystem into given buffer.
    nmemb number of units of size 'size' are read from file with descriptor 'fd'.

    Return Value:   Number of bytes read into given buffer.
*/
int  sse_fwrite(char* buf, size_t size, size_t nmemb, int fd);
/*
    sse_fwrite writes to the hypervisor's filesystem from given buffer.
    nmemb number of units of size 'size' are written to file with descriptor 'fd'.

    Return Value:   Number of bytes written into given buffer.
*/
#endif