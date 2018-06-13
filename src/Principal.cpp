#include <iostream>
#include "Principal.h"

#ifdef __APPLE__
#include "OpenCL/opencl.h"
#else
#include "CL/cl.h"
#endif

using namespace std;

int main() {
    cl_uint ret_num_platforms;
    cl_int ret = clGetPlatformIDs(0, NULL, &ret_num_platforms);
   
}
