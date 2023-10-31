# deltaSSE
deltaSSE - delta Secure Storage Enclave is a hypercall interface for the deltaV bare metal hypervisor. This interface allows Hypervisor Based Storage Isolation.
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
