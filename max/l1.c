// i1shell.c
//max
#include <stdio.h>    // for I/O functions
#include <stdlib.h>   // for exit()
#include <time.h>     // for time functions

FILE *infile;
short r[8], mem[65536], offset6, imm5, imm9, pcoffset9, pcoffset11, 
      regsave1, regsave2;
unsigned short ir, pc, opcode, code, dr, sr, sr1, sr2, baser, bit5, bit11,
               trapvec, n, z, c, v;
char letter;

void setnz(short r)
{
   n = z = 0;
   if (r < 0)    // is result negative?
      n = 1;     // set n flag
   else
   if (r == 0)   // is result zero?
      z = 1;     // set z flag
}

void setcv(short sum, short x, short y)
{
   v = c = 0;
   if (x >= 0 && y >= 0)   // if both non-negative, then no carry
      c = 0;
   else
   if (x < 0 && y < 0)     // if both negative, then carry
      c = 1;
   else
   if (sum >= 0)           // if signs differ and sum non-neg, then carry
      c = 1;
   else                    // if signs differ and sum neg, then no carry
      c = 0;
   // if signs differ then no overflow
   if ((x < 0 && y >= 0) || (x >= 0 && y < 0))
      v = 0;
   else
   // if signs the same and sum has different sign, then overflow
   if ((sum < 0 && x >= 0) || (sum >= 0 && x < 0))
      v = 1;
   else
      v = 0;
}

int main(int argc, char *argv[])
{
   time_t timer;

   if (argc != 2)
   {
       printf("Wrong number of command line arguments\n");
       printf("Usage: i1 <input filename>\n");
       exit(1);
   }

   // display your name, command line args, time
   time(&timer);      // get time
   printf("YOUR NAME HERE     %s %s     %s", 
           argv[0], argv[1], asctime(localtime(&timer)));

   infile = fopen(argv[1], "rb"); // open file in binary mode
   if (!infile)
   {
      printf("Cannot open input file %s\n", argv[1]);
      exit(1);
   }

   fread(&letter, 1, 1, infile);  // test for and discard get file sig
   if (letter != 'o')
   {
      printf("%s not an lcc file", argv[1]);
      exit(1);
   }
   fread(&letter, 1, 1, infile);  // test for and discard 'C'
   if (letter != 'C')
   {
      printf("Missing C header entry in %s\n", argv[1]);
      exit(1);
   }

   fread(mem, 1, sizeof(mem), infile); // read machine code into mem

   while (1)
   {
      // fetch instruction, load it into ir, and increment pc
      ir = mem[pc++];                    

      // isolate the fields of the instruction in the ir
      opcode = ir >> 12;                  // get opcode
      pcoffset9 = ir << 7;                // left justify pcoffset9 field
      pcoffset9 = imm9 = pcoffset9 >> 7;  // sign extend and rt justify
      pcoffset11 = ...                    // left justify pcoffset11 field
      pcoffset11 = ...                    // sign extend and rt justify
      imm5 = ...                          // left justify imm5 field
      imm5 = ...                          // sign extend andd rt justify
      offset6 = ...                       // left justify offset6 field
      offset6 = ...                       // sign extend and rt justify
      trapvec = eopcode = ir & 0x1f;      // get trapvec and eopcode fields
      code = dr = sr = ...                // get code/dr/sr and rt justify
      sr1 = baser = (ir & 0x01c0) >> 6;   // get sr1/baser and rt justify
      sr2 = ...                           // get third reg field
      bit5 = ...                          // get bit 5
      bit11 = ir & 0x0800;                // get bit 11

      // decode (i.e., determine) and execute instruction just fetched
      switch (opcode)
      {
         case 0:                          // branch instructions
            switch(code)
            {
               case 0: if (z == 1)             // brz
                          pc = pc + pcoffset9;
                       break;
               case 1: if (z == 0)             // brnz
                          pc = pc + pcoffset9;
                       break;

               // code missing here

               case 7: pc = pc + pcoffset9;    // br
                       break;
            }                                                   
            break;
         case 1:                               // add
            if (bit5)
            {
               regsave1 = r[sr1];
               r[dr] = regsave1 + imm5;
               // set c, v flags
               setcv(r[dr], regsave1, imm5);
            }
            else
            {
               regsave1 = r[sr1]; regsave2 = r[sr2];
               r[dr] = regsave1 + regsave2;
               // set c, v flags
               setcv(r[dr], regsave1, regsave2);
            }
            // set n, z flags
            setnz(r[dr]);
            break;
         case 2:                          // ld
        
         // code missing here

         case 9:                          // not
            // ~ is the not operator in C
            r[dr] = ~r[sr1];
            // set n, z flags
            setnz(r[dr]);
            break;

         // code missing here

         case 12:                         // jmp/ret
            pc = r[baser] + offset6;                     
            break;

         // code missing here

         case 14:                         // lea
            r[dr] = pc + pcoffset9;
            break;
         case 15:                         // trap
            if (trapvec == 0x00)             // halt
               exit(0);
            else
            if (trapvec == 0x01)             // nl
               // code missing here
            else
            if (trapvec == 0x02)             // dout
               // code missing here                
            break;
      }     // end of switch
   }        // end of while
}
