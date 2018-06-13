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
    cout << "Retorno[" << ret << "] NumPlataformas[" << ret_num_platforms << "]" << endl;

    cl_platform_id platform_id = NULL;
    cl_device_id device_id = NULL;
    cl_uint ret_num_devices;
    ret = clGetDeviceIDs(platform_id, CL_DEVICE_TYPE_DEFAULT, 1, &device_id, &ret_num_devices);
    cout << "Retorno[" << ret << "] NumDevices[" << ret_num_devices << "]" << endl;

     cl_context context = clCreateContext( NULL, 1, &device_id, NULL, NULL, &ret);

}
