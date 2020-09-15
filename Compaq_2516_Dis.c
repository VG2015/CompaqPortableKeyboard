#include "Compaq_2516Dump.BIN.h"



// WARNING: Removing unreachable block (CODE,0x0112)

void RESET(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  byte *pbVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  char cVar8;
  byte bVar9;
  byte in_R3;
  byte **ppbVar10;
  byte bVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  bool in_F1;
  
  puVar4 = (undefined *)0x3f;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + -1;
  } while (puVar4 != (undefined *)0x0);
  ppbVar6 = (byte **)0x10;
  pbVar5 = (byte *)0x1f;
  setTmr(0xa0);
  startTimer();
  enableTCntInt();
  setBank(1);
  bVar11 = 0xf0;
  ppbVar12 = (byte **)0x2c;
  ppbVar13 = (byte **)0x2c;
  setBank(0);
  FUN_CODE_0200(0xaa);
  do {
    pbVar5 = pbVar5 + '\x01';
    while( true ) {
      enableTCntInt();
      setBank(1);
      ppbVar10 = (byte **)0x55;
      setBank(0);
      ppbVar14 = ppbVar13;
      if (pbVar5 < (byte *)0x2b) break;
LAB_CODE_00fe:
      bVar1 = (bool)getTF();
      if (bVar1) {
        setBank(1);
        if ((in_R3 != 0) && (in_R3 = in_R3 - 1, in_R3 == 0)) {
          in_R3 = 8;
          setBank(0);
          setBank(1);
          if (in_F1) {
            P2 = P2 & 0xfe;
            bVar2 = *pbVar5;
            P1 = ppbVar10;
          }
          else {
            bVar2 = *(byte *)(ZEXT12(ppbVar10) | 0x300);
          }
          FUN_CODE_0200(bVar2);
        }
        setBank(0);
        *ppbVar6 = (byte *)0xff;
        ppbVar6 = (byte **)((byte)(ppbVar6 + '\x01') & 0x17);
        setBank(1);
        bVar2 = bVar11;
        ppbVar13 = ppbVar14;
        if (((ppbVar14 != ppbVar12) && (bVar1 = (bool)getExtInt(), bVar1)) &&
           (bVar1 = (bool)getT1(), !bVar1)) {
          if (ppbVar12 == (byte **)0x0) {
            ppbVar12 = ppbVar14;
          }
          ppbVar13 = ppbVar14 + '\x01';
          if (ppbVar13 == (byte **)0x40) {
            ppbVar13 = (byte **)0x2c;
          }
          stopTimerAndEventCounter();
          bVar2 = (char)*ppbVar14 << 4;
          *ppbVar14 = (byte *)((bVar2 | (byte)*ppbVar14 >> 4) << 1 | bVar2 >> 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          bVar2 = (byte)*ppbVar14 >> 1;
          *ppbVar14 = (byte *)(bVar2 << 4 | (bVar2 | (char)*ppbVar14 << 7) >> 4);
          bVar2 = bVar11 & 0xdf | 0x30;
          setBank(0);
          if ((bool)(bVar11 & 1)) {
            nop();
            bVar1 = (bool)getT1();
            if (!bVar1) {
              if (!(bool)((bVar11 & 2) >> 1)) {
                bVar2 = bVar11 & 0xdf | 0x32;
                goto LAB_CODE_01d4;
              }
              setBank(1);
              cVar8 = '\x04';
              do {
                cVar8 = cVar8 + -1;
              } while (cVar8 != '\0');
              setBank(0);
            }
            bVar2 = bVar11 & 0xdd | 0x30;
            setBank(1);
          }
LAB_CODE_01d4:
          startTimer();
          ppbVar6 = ppbVar14;
        }
      }
      else {
        nop();
        nop();
        bVar2 = bVar11;
        ppbVar13 = ppbVar14;
      }
      setBank(1);
      setBank(0);
      setBank(1);
      bVar11 = (bVar2 | 0xcf) & 0xbf;
      setBank(0);
      if ((bool)(bVar11 >> 4 & 1)) {
        setBank(1);
        bVar11 = (bVar2 | 0xcf) & 0x3f;
      }
      setBank(1);
      in_F1 = false;
      setBank(0);
      pbVar5 = (byte *)0x20;
      P2 = bVar11;
    }
    bVar2 = FUN_CODE_01f6(pbVar5 + -0x2b);
    if (bVar2 != 0) {
      cVar8 = '(';
      do {
        cVar8 = cVar8 + -1;
      } while (cVar8 != '\0');
      P4 = bVar2 & 0xf;
      bVar3 = FUN_CODE_01f6();
      P1 = (byte **)((byte)P1 & 0xfe);
      P4 = bVar3 & 0xf;
      in_R3 = bVar2;
      if ((bVar3 & bVar2) != 0) {
        bVar9 = 1;
        ppbVar14 = (byte **)((byte)((char)pbVar5 << 4) >> 1);
        in_R3 = bVar3 & bVar2;
        do {
          ppbVar13 = ppbVar14;
          if ((bVar9 & in_R3) != 0) {
            setBank(1);
            setBank(0);
            if (ppbVar12 == (byte **)0x0) goto LAB_CODE_00fe;
            in_R3 = ~bVar9 & in_R3;
            ppbVar7 = ppbVar6;
            if ((bVar9 & *pbVar5) == 0) {
              *pbVar5 = bVar9 ^ *pbVar5;
              *(byte ***)ppbVar6 = ppbVar14;
              ppbVar6 = (byte **)((byte)(ppbVar6 + '\x01') & 0x17);
              if (ppbVar14 == (byte **)0x21) {
                bVar11 = bVar11 ^ 0x10;
              }
              if (ppbVar14 == (byte **)0x20) {
                bVar11 = bVar11 ^ 8;
              }
              if (in_F1) {
                P2 = P2 & 0xfe;
                bVar2 = *pbVar5;
                P1 = ppbVar14;
              }
              else {
                bVar2 = *(byte *)(ZEXT12(ppbVar14) | 0x300);
              }
              FUN_CODE_0200(bVar2);
              setBank(1);
              ppbVar10 = ppbVar14;
              if ((bool)(bVar11 >> 1 & 1)) {
                in_R3 = 0x32;
              }
            }
            else {
              do {
                ppbVar12 = ppbVar6;
                if (ppbVar14 == (byte **)*ppbVar7) goto LAB_CODE_0080;
                ppbVar7 = (byte **)((byte)(ppbVar7 + '\x01') & 0x17);
              } while (ppbVar7 != ppbVar6);
              *pbVar5 = bVar9 ^ *pbVar5;
              bVar2 = (byte)ppbVar14 ^ (byte)ppbVar10;
              if (bVar2 == 0) {
                setBank(1);
                setBank(0);
                ppbVar10 = (byte **)0xff;
                in_R3 = bVar2;
              }
              if (in_F1) {
                P2 = P2 | 1;
                bVar2 = *pbVar5;
                P1 = ppbVar14;
              }
              else {
                bVar2 = *(byte *)(ZEXT12(ppbVar14) | 0x300) | 0x80;
              }
              FUN_CODE_0200(bVar2);
              ppbVar6 = ppbVar7;
              ppbVar13 = ppbVar14;
            }
          }
LAB_CODE_0080:
          setBank(0);
          if (in_R3 == 0) break;
          bVar9 = bVar9 << 1 | bVar9 >> 7;
          ppbVar14 = ppbVar13 + '\x01';
        } while( true );
      }
    }
  } while( true );
}



// WARNING: Removing unreachable block (CODE,0x0112)

undefined EXTIRQ(undefined param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ushort *puVar4;
  char *pcVar5;
  byte *pbVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte bVar9;
  byte in_R3;
  char in_R4;
  byte **ppbVar10;
  byte bVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  byte in_C;
  bool bVar15;
  byte in_AC;
  bool bVar16;
  byte in_F0;
  bool in_F1;
  byte bVar17;
  
  puVar4 = (ushort *)0x0;
  nop();
  nop();
  nop();
  nop();
  setBank(1);
  setTmr(0xa0);
  if (in_R4 == 'U') {
    cVar2 = '\0';
    do {
      bVar15 = (bool)getExtInt();
      if (bVar15) {
        setBank(0);
        setBank(1);
        return param_1;
      }
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    stopTimerAndEventCounter();
    do {
      bVar15 = (bool)getExtInt();
    } while (!bVar15);
    setBank(0);
  }
  else {
    disableTCntInt();
    disableExtInt();
    P1 = (byte **)0xff;
    P2 = 0xff;
    in_C = 0;
    in_AC = 0;
    in_F0 = 0;
    in_F1 = false;
    getTF();
    DAT_INTMEM_08 = 0x39;
    cVar2 = FUN_CODE_003b();
    puVar4 = (ushort *)0x8;
  }
  pcVar5 = (char *)0x3f;
  do {
    *pcVar5 = cVar2;
    pcVar5 = pcVar5 + -1;
  } while (pcVar5 != (char *)0x0);
  ppbVar7 = (byte **)0x10;
  pbVar6 = (byte *)0x1f;
  setTmr(0xa0);
  startTimer();
  enableTCntInt();
  setBank(1);
  bVar11 = 0xf0;
  ppbVar12 = (byte **)0x2c;
  ppbVar13 = (byte **)0x2c;
  setBank(0);
  *puVar4 = (ushort)in_C << 0xf | 0x56 | (ushort)in_AC << 0xe | (ushort)in_F0 << 0xd;
  FUN_CODE_0200(0xaa);
  do {
    pbVar6 = pbVar6 + '\x01';
    while( true ) {
      enableTCntInt();
      setBank(1);
      ppbVar10 = (byte **)0x55;
      bVar17 = 0;
      setBank(0);
      bVar15 = (byte *)0x2a < pbVar6;
      bVar16 = 0xf < ((byte)pbVar6 & 0xf) + 5;
      ppbVar14 = ppbVar13;
      if (!bVar15) break;
LAB_CODE_00fe:
      bVar1 = (bool)getTF();
      if (bVar1) {
        setBank(1);
        if ((in_R3 != 0) && (in_R3 = in_R3 - 1, in_R3 == 0)) {
          in_R3 = 8;
          setBank(0);
          setBank(1);
          if (in_F1) {
            P2 = P2 & 0xfe;
            bVar17 = *pbVar6;
            P1 = ppbVar10;
          }
          else {
            bVar17 = *(byte *)(ZEXT12(ppbVar10) | 0x300);
          }
          *puVar4 = (ushort)bVar15 << 0xf | 0x145 | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd |
                    0x1000;
          FUN_CODE_0200(bVar17);
        }
        setBank(0);
        *ppbVar7 = (byte *)0xff;
        ppbVar7 = (byte **)((byte)(ppbVar7 + '\x01') & 0x17);
        setBank(1);
        bVar17 = bVar11;
        ppbVar13 = ppbVar14;
        if (((ppbVar14 != ppbVar12) && (bVar15 = (bool)getExtInt(), bVar15)) &&
           (bVar15 = (bool)getT1(), !bVar15)) {
          if (ppbVar12 == (byte **)0x0) {
            ppbVar12 = ppbVar14;
          }
          ppbVar13 = ppbVar14 + '\x01';
          if (ppbVar13 == (byte **)0x40) {
            ppbVar13 = (byte **)0x2c;
          }
          stopTimerAndEventCounter();
          bVar17 = (char)*ppbVar14 << 4;
          *ppbVar14 = (byte *)((bVar17 | (byte)*ppbVar14 >> 4) << 1 | bVar17 >> 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          bVar17 = (byte)*ppbVar14 >> 1;
          *ppbVar14 = (byte *)(bVar17 << 4 | (bVar17 | (char)*ppbVar14 << 7) >> 4);
          bVar17 = bVar11 & 0xdf | 0x30;
          setBank(0);
          if ((bool)(bVar11 & 1)) {
            nop();
            bVar15 = (bool)getT1();
            if (!bVar15) {
              if (!(bool)((bVar11 & 2) >> 1)) {
                bVar17 = bVar11 & 0xdf | 0x32;
                goto LAB_CODE_01d4;
              }
              setBank(1);
              cVar2 = '\x04';
              do {
                cVar2 = cVar2 + -1;
              } while (cVar2 != '\0');
              setBank(0);
            }
            bVar17 = bVar11 & 0xdd | 0x30;
            setBank(1);
          }
LAB_CODE_01d4:
          startTimer();
          ppbVar7 = ppbVar14;
        }
      }
      else {
        nop();
        nop();
        bVar17 = bVar11;
        ppbVar13 = ppbVar14;
      }
      setBank(1);
      setBank(0);
      setBank(1);
      bVar11 = (bVar17 | 0xcf) & 0xbf;
      setBank(0);
      if ((bool)(bVar11 >> 4 & 1)) {
        setBank(1);
        bVar11 = (bVar17 | 0xcf) & 0x3f;
      }
      setBank(1);
      in_F1 = false;
      setBank(0);
      pbVar6 = (byte *)0x20;
      P2 = bVar11;
    }
    *puVar4 = (ushort)bVar15 << 0xf | 99 | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd;
    bVar3 = FUN_CODE_01f6(pbVar6 + -0x2b);
    if (bVar3 != 0) {
      cVar2 = '(';
      do {
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
      P4 = bVar3 & 0xf;
      *puVar4 = (ushort)bVar15 << 0xf | 0x6d | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd |
                (ushort)bVar17 << 0xc;
      bVar17 = FUN_CODE_01f6();
      P1 = (byte **)((byte)P1 & 0xfe);
      P4 = bVar17 & 0xf;
      in_R3 = bVar3;
      if ((bVar17 & bVar3) != 0) {
        bVar9 = 1;
        ppbVar14 = (byte **)((byte)((char)pbVar6 << 4) >> 1);
        in_R3 = bVar17 & bVar3;
        do {
          ppbVar13 = ppbVar14;
          if ((bVar9 & in_R3) != 0) {
            setBank(1);
            setBank(0);
            if (ppbVar12 == (byte **)0x0) goto LAB_CODE_00fe;
            in_R3 = ~bVar9 & in_R3;
            ppbVar8 = ppbVar7;
            if ((bVar9 & *pbVar6) == 0) {
              *pbVar6 = bVar9 ^ *pbVar6;
              *(byte ***)ppbVar7 = ppbVar14;
              ppbVar7 = (byte **)((byte)(ppbVar7 + '\x01') & 0x17);
              if (ppbVar14 == (byte **)0x21) {
                bVar11 = bVar11 ^ 0x10;
              }
              if (ppbVar14 == (byte **)0x20) {
                bVar11 = bVar11 ^ 8;
              }
              if (in_F1) {
                P2 = P2 & 0xfe;
                bVar17 = *pbVar6;
                P1 = ppbVar14;
              }
              else {
                bVar17 = *(byte *)(ZEXT12(ppbVar14) | 0x300);
              }
              *puVar4 = (ushort)bVar15 << 0xf | 0xba | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd;
              FUN_CODE_0200(bVar17);
              setBank(1);
              ppbVar10 = ppbVar14;
              if ((bool)(bVar11 >> 1 & 1)) {
                in_R3 = 0x32;
              }
            }
            else {
              do {
                ppbVar12 = ppbVar7;
                if (ppbVar14 == (byte **)*ppbVar8) goto LAB_CODE_0080;
                ppbVar8 = (byte **)((byte)(ppbVar8 + '\x01') & 0x17);
              } while (ppbVar8 != ppbVar7);
              *pbVar6 = bVar9 ^ *pbVar6;
              bVar17 = (byte)ppbVar14 ^ (byte)ppbVar10;
              if (bVar17 == 0) {
                setBank(1);
                setBank(0);
                ppbVar10 = (byte **)0xff;
                in_R3 = bVar17;
              }
              if (in_F1) {
                P2 = P2 | 1;
                bVar17 = *pbVar6;
                P1 = ppbVar14;
              }
              else {
                bVar17 = *(byte *)(ZEXT12(ppbVar14) | 0x300) | 0x80;
              }
              *puVar4 = (ushort)bVar15 << 0xf | 0xf0 | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd;
              FUN_CODE_0200(bVar17);
              ppbVar7 = ppbVar8;
              ppbVar13 = ppbVar14;
            }
          }
LAB_CODE_0080:
          setBank(0);
          if (in_R3 == 0) break;
          bVar9 = bVar9 << 1 | bVar9 >> 7;
          ppbVar14 = ppbVar13 + '\x01';
        } while( true );
      }
    }
  } while( true );
}



// WARNING: Removing unreachable block (CODE,0x0112)

undefined TIMIRQ(undefined param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ushort *puVar4;
  char *pcVar5;
  byte *pbVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  byte bVar9;
  byte in_R3;
  char in_R4;
  byte **ppbVar10;
  byte bVar11;
  byte **ppbVar12;
  byte **ppbVar13;
  byte **ppbVar14;
  byte in_C;
  bool bVar15;
  byte in_AC;
  bool bVar16;
  byte in_F0;
  bool in_F1;
  byte bVar17;
  
  puVar4 = (ushort *)0x0;
  setBank(1);
  setTmr(0xa0);
  if (in_R4 == 'U') {
    cVar2 = '\0';
    do {
      bVar15 = (bool)getExtInt();
      if (bVar15) {
        setBank(0);
        setBank(1);
        return param_1;
      }
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    stopTimerAndEventCounter();
    do {
      bVar15 = (bool)getExtInt();
    } while (!bVar15);
    setBank(0);
  }
  else {
    disableTCntInt();
    disableExtInt();
    P1 = (byte **)0xff;
    P2 = 0xff;
    in_C = 0;
    in_AC = 0;
    in_F0 = 0;
    in_F1 = false;
    getTF();
    DAT_INTMEM_08 = 0x39;
    cVar2 = FUN_CODE_003b();
    puVar4 = (ushort *)0x8;
  }
  pcVar5 = (char *)0x3f;
  do {
    *pcVar5 = cVar2;
    pcVar5 = pcVar5 + -1;
  } while (pcVar5 != (char *)0x0);
  ppbVar7 = (byte **)0x10;
  pbVar6 = (byte *)0x1f;
  setTmr(0xa0);
  startTimer();
  enableTCntInt();
  setBank(1);
  bVar11 = 0xf0;
  ppbVar12 = (byte **)0x2c;
  ppbVar13 = (byte **)0x2c;
  setBank(0);
  *puVar4 = (ushort)in_C << 0xf | 0x56 | (ushort)in_AC << 0xe | (ushort)in_F0 << 0xd;
  FUN_CODE_0200(0xaa);
  do {
    pbVar6 = pbVar6 + '\x01';
    while( true ) {
      enableTCntInt();
      setBank(1);
      ppbVar10 = (byte **)0x55;
      bVar17 = 0;
      setBank(0);
      bVar15 = (byte *)0x2a < pbVar6;
      bVar16 = 0xf < ((byte)pbVar6 & 0xf) + 5;
      ppbVar14 = ppbVar13;
      if (!bVar15) break;
LAB_CODE_00fe:
      bVar1 = (bool)getTF();
      if (bVar1) {
        setBank(1);
        if ((in_R3 != 0) && (in_R3 = in_R3 - 1, in_R3 == 0)) {
          in_R3 = 8;
          setBank(0);
          setBank(1);
          if (in_F1) {
            P2 = P2 & 0xfe;
            bVar17 = *pbVar6;
            P1 = ppbVar10;
          }
          else {
            bVar17 = *(byte *)(ZEXT12(ppbVar10) | 0x300);
          }
          *puVar4 = (ushort)bVar15 << 0xf | 0x145 | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd |
                    0x1000;
          FUN_CODE_0200(bVar17);
        }
        setBank(0);
        *ppbVar7 = (byte *)0xff;
        ppbVar7 = (byte **)((byte)(ppbVar7 + '\x01') & 0x17);
        setBank(1);
        bVar17 = bVar11;
        ppbVar13 = ppbVar14;
        if (((ppbVar14 != ppbVar12) && (bVar15 = (bool)getExtInt(), bVar15)) &&
           (bVar15 = (bool)getT1(), !bVar15)) {
          if (ppbVar12 == (byte **)0x0) {
            ppbVar12 = ppbVar14;
          }
          ppbVar13 = ppbVar14 + '\x01';
          if (ppbVar13 == (byte **)0x40) {
            ppbVar13 = (byte **)0x2c;
          }
          stopTimerAndEventCounter();
          bVar17 = (char)*ppbVar14 << 4;
          *ppbVar14 = (byte *)((bVar17 | (byte)*ppbVar14 >> 4) << 1 | bVar17 >> 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          *ppbVar14 = (byte *)((byte)*ppbVar14 >> 1 | (char)*ppbVar14 << 7);
          bVar17 = (byte)*ppbVar14 >> 1;
          *ppbVar14 = (byte *)(bVar17 << 4 | (bVar17 | (char)*ppbVar14 << 7) >> 4);
          bVar17 = bVar11 & 0xdf | 0x30;
          setBank(0);
          if ((bool)(bVar11 & 1)) {
            nop();
            bVar15 = (bool)getT1();
            if (!bVar15) {
              if (!(bool)((bVar11 & 2) >> 1)) {
                bVar17 = bVar11 & 0xdf | 0x32;
                goto LAB_CODE_01d4;
              }
              setBank(1);
              cVar2 = '\x04';
              do {
                cVar2 = cVar2 + -1;
              } while (cVar2 != '\0');
              setBank(0);
            }
            bVar17 = bVar11 & 0xdd | 0x30;
            setBank(1);
          }
LAB_CODE_01d4:
          startTimer();
          ppbVar7 = ppbVar14;
        }
      }
      else {
        nop();
        nop();
        bVar17 = bVar11;
        ppbVar13 = ppbVar14;
      }
      setBank(1);
      setBank(0);
      setBank(1);
      bVar11 = (bVar17 | 0xcf) & 0xbf;
      setBank(0);
      if ((bool)(bVar11 >> 4 & 1)) {
        setBank(1);
        bVar11 = (bVar17 | 0xcf) & 0x3f;
      }
      setBank(1);
      in_F1 = false;
      setBank(0);
      pbVar6 = (byte *)0x20;
      P2 = bVar11;
    }
    *puVar4 = (ushort)bVar15 << 0xf | 99 | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd;
    bVar3 = FUN_CODE_01f6(pbVar6 + -0x2b);
    if (bVar3 != 0) {
      cVar2 = '(';
      do {
        cVar2 = cVar2 + -1;
      } while (cVar2 != '\0');
      P4 = bVar3 & 0xf;
      *puVar4 = (ushort)bVar15 << 0xf | 0x6d | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd |
                (ushort)bVar17 << 0xc;
      bVar17 = FUN_CODE_01f6();
      P1 = (byte **)((byte)P1 & 0xfe);
      P4 = bVar17 & 0xf;
      in_R3 = bVar3;
      if ((bVar17 & bVar3) != 0) {
        bVar9 = 1;
        ppbVar14 = (byte **)((byte)((char)pbVar6 << 4) >> 1);
        in_R3 = bVar17 & bVar3;
        do {
          ppbVar13 = ppbVar14;
          if ((bVar9 & in_R3) != 0) {
            setBank(1);
            setBank(0);
            if (ppbVar12 == (byte **)0x0) goto LAB_CODE_00fe;
            in_R3 = ~bVar9 & in_R3;
            ppbVar8 = ppbVar7;
            if ((bVar9 & *pbVar6) == 0) {
              *pbVar6 = bVar9 ^ *pbVar6;
              *(byte ***)ppbVar7 = ppbVar14;
              ppbVar7 = (byte **)((byte)(ppbVar7 + '\x01') & 0x17);
              if (ppbVar14 == (byte **)0x21) {
                bVar11 = bVar11 ^ 0x10;
              }
              if (ppbVar14 == (byte **)0x20) {
                bVar11 = bVar11 ^ 8;
              }
              if (in_F1) {
                P2 = P2 & 0xfe;
                bVar17 = *pbVar6;
                P1 = ppbVar14;
              }
              else {
                bVar17 = *(byte *)(ZEXT12(ppbVar14) | 0x300);
              }
              *puVar4 = (ushort)bVar15 << 0xf | 0xba | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd;
              FUN_CODE_0200(bVar17);
              setBank(1);
              ppbVar10 = ppbVar14;
              if ((bool)(bVar11 >> 1 & 1)) {
                in_R3 = 0x32;
              }
            }
            else {
              do {
                ppbVar12 = ppbVar7;
                if (ppbVar14 == (byte **)*ppbVar8) goto LAB_CODE_0080;
                ppbVar8 = (byte **)((byte)(ppbVar8 + '\x01') & 0x17);
              } while (ppbVar8 != ppbVar7);
              *pbVar6 = bVar9 ^ *pbVar6;
              bVar17 = (byte)ppbVar14 ^ (byte)ppbVar10;
              if (bVar17 == 0) {
                setBank(1);
                setBank(0);
                ppbVar10 = (byte **)0xff;
                in_R3 = bVar17;
              }
              if (in_F1) {
                P2 = P2 | 1;
                bVar17 = *pbVar6;
                P1 = ppbVar14;
              }
              else {
                bVar17 = *(byte *)(ZEXT12(ppbVar14) | 0x300) | 0x80;
              }
              *puVar4 = (ushort)bVar15 << 0xf | 0xf0 | (ushort)bVar16 << 0xe | (ushort)in_F0 << 0xd;
              FUN_CODE_0200(bVar17);
              ppbVar7 = ppbVar8;
              ppbVar13 = ppbVar14;
            }
          }
LAB_CODE_0080:
          setBank(0);
          if (in_R3 == 0) break;
          bVar9 = bVar9 << 1 | bVar9 >> 7;
          ppbVar14 = ppbVar13 + '\x01';
        } while( true );
      }
    }
  } while( true );
}



void FUN_CODE_003b(void)

{
  return;
}



undefined FUN_CODE_01f6(void)

{
  undefined *in_R0;
  
  P1 = 0xff;
  P4 = (byte)in_R0 & 0xf;
  return *in_R0;
}



void FUN_CODE_0200(undefined param_1)

{
  undefined *in_R6;
  
  setBank(1);
  if (in_R6 != (undefined *)0x0) {
    *in_R6 = param_1;
  }
  return;
}


