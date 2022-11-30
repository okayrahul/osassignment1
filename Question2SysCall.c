#include <linux/kernel.h>
#include <linux/syscall.h>
#include <errno.h>

SYSCALL_DEFINE4(kernel_2d_memcpy, float*, src, float*, dst, int, row_count, int, col_count)
{
    int k = row_count * col_count;
    int buffer[10][10];
    int F1 = __copy_from_user(buffer, src, sizeof(temp)*k);
    int F2 = __copy_to_user(dst, buffer, sizeof(temp)*k);
    if (F1)
    {
        return -EFAULT;
    }
    
    if (F2)
    {
        return -EFAULT;
    }
    return 0;
}