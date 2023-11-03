#define SSE_FREAD_HVC_NR        0
#define SSE_FWRITE_HVC_NR       1

.globl     sse_fread
.globl     sse_fwrite

sse_fread:
    hvc SSE_FREAD_HVC_NR
    ret
    
sse_fwrite:
    hvc SSE_FWRITE_HVC_NR
    ret