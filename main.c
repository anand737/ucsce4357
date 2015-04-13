int main(void)
{
  unsigned int volatile * setGPIO = (unsigned int *)PINSEL0;
  unsigned int volatile * setDIR = (unsigned int *)FIO0DIR;
  unsigned int volatile * setHIGH = (unsigned int *)FIO0SET;
  unsigned int volatile * setLOW = (unsigned int *)FIO0CLR;

  *setGPIO = *setGPIO & 0x7FFFFFFF;
  *setDIR = (*setDIR & 0x0 ) | 0x00008000;
  *setHIGH = (*setHIGH & 0x0 ) | 0x00008000;
  *setLOW = (*setLOW & 0x0 ) | 0x00008000;

  return 0;
}
