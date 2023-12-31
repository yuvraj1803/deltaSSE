# deltaSSE
deltaSSE - delta Secure Storage Enclave is a hypercall interface for the deltaV bare metal hypervisor. This interface allows Hypervisor Based Storage Isolation.
<img width="868" alt="Screenshot 2023-11-03 at 3 53 53 PM" src="https://github.com/yuvraj1803/deltaSSE/assets/37622719/be639c88-1b82-4f45-8aef-a6435eab9887">

# API (param info in sse.h)
  + sse_fread()
  + sse_fwrite()
# Important Notes
  + guest OS must keep track of file descriptors returned by API functions.
  + files can be only opened with "r" for read, "w" for write modes only.
  + <sse.h> should give information about API params.
# Requirements
  + Operating System needs to run in EL1 with deltaV in EL2.
# How to use?
  + Download the source code in this repository.
  + Add it to your Operating System code.
  + Make relavant changes to your Makefile so that deltaSSE/ is compiled.
  + Add deltaSSE/ to your include path
  + #include <sse.h> in the file where you want to call the interface.

# How does it work?
  + deltaSSE has hypervisor call routines which inform deltaV hypervisor running in EL2 about your request.
  + deltaV makes changes in its filesystem and returns relavant information.
  + deltaSSE support is added into deltaV so guest OS developers dont have to worry about it.
