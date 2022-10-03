#include "thread.h"

/* 全局变量 */
int x = 0;

void Thello(int id) {
  usleep(id * 100000);
  printf("Hello from thread #%c\n", "123456789ABCDEF"[x++]);
}

/* 创建10个线程 */
int main() {
  for (int i = 0; i < 10; i++) {
    create(Thello);
  }
}
