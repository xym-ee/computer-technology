extern int done;

void join()
{
  while(!done)
  {
    asm volatile("":::"memory");
  }
}
