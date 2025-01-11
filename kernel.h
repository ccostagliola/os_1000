#ifndef _KERNEL_H_
#define _KERNEL_H_

#define PANIC(fmt, ...)                                                        \
    do {                                                                       \
        printf("PANIC: %s:%d: " fmt "\n", __FILE__, __LINE__, ##__VA_ARGS__);  \
        while (1) {}                                                           \
    } while (0)

struct sbiret {
  long error;
  long value;
};

#endif //_KERNEL_H_