#include "thread.h"

void Ta() { while (1) ; }
void Tb() { while (1) ; }

int main() {
  create(Ta);
  create(Tb);
}
