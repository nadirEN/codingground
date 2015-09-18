void Init_reg(void)
{
  //the timer registers
  cpt0 = adr2 + 0x00; // timer0
  cpt1 = adr2 + 0x04; // timer1
  cpt2 = adr2 + 0x08; // timer0
  ctrl_t = adr2 + 0x0C; // control timer (read/write)
  
  
  //Acquisition of analogical signal ( +/- 10v) 16 bits ( 12bits + 4bitslsb to 0)
  ad = adr2 + 0x10;   // result of CAN  READ
  stat_ad = adr2 + 0x18;  //conversion status   READ
  ctrl_ad = adr2 + 0x18;    // Launch control
  
  voie = adr2 + 0x24        // which entry of acqusition to choose
  
  
  // generation of analoqical signal ( +/- 10v) 16 bits ( 12bits + 4bitslsb to 0)
  
  va_data = adr2 + 0x10;               // CNA in Entry A  (write)
  vb_data = adr2 + 0x14;               //  CNA in Entry B  (write)
  
  conv_ad = adr2 + 020;        // The launch of conversion Analog to Digital  (write)
  
  
  // Input-output Logic
  in_log=adr2+0x1c;              Input port logic (read)
  out_log=adr2+0x1c;             output port logic (write)
  
  // the launch of conversion (by external signal)
  
  int_st = adr2 + 0x38;         // read the status of Interruption Intext (read)
  int_en = adr2 + 0x38;         // validation of Interruption Intext (write)
  
  
}
  
  
  
  
  
  
  
  
  
  
  
  