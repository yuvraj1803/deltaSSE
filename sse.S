#define SSE_FOPEN_HVC_NR    0
#define SSE_FREAD_HVC_NR    1
#define SSE_FWRITE_HVC_NR    2
#define SSE_FSEEK_HVC_NR    3
#define SSE_REWIND_HVC_NR    4
#define SSE_FCLOSE_HVC_NR    5

.globl     sse_fopen
.globl     sse_fread
.globl     sse_fwrite
.globl     sse_fseek
.globl     sse_rewind
.globl     sse_fclose

sse_fopen:
    hvc SSE_FOPEN_HVC_NR
    ret

sse_fread:
    hvc SSE_FREAD_HVC_NR
    ret
    
sse_fwrite:
    hvc SSE_FWRITE_HVC_NR
    ret

sse_fseek:
    hvc SSE_FSEEK_HVC_NR
    ret

sse_rewind:
    hvc SSE_REWIND_HVC_NR
    ret

sse_fclose:
    hvc SSE_FCLOSE_HVC_NR
    ret


