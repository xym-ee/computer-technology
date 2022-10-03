#include "thread.h"

void Ta() { while (1) { printf("abcdefg"); } }
void Tb() { while (1) { printf("uvwxyz"); } }

int main() {
  create(Ta);
  create(Tb);
}
