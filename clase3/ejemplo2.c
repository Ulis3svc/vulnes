/*
 * echo "0" > /proc/sys/kernel/randomize_va_space
 */

#include<stdio.h>
long unsigned int get_sp(void)
{
  asm("mov %rsp,%rax");
}
int main()
{
  printf("Stack Pointer(ESP): 0x%x\n",get_sp());
}
