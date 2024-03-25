# Computer Plan

## CPU
CPU Bitwidth: 8
Number of Instructions: 13 (FOR NOW)
Stack Size: 255; $0100-$01FF
Subroutine Stack (SS) Size: 255; $0200-$02FF
### Instructions
0: HLT; Halt execution (PERM); VOID
1: JMP; Jump to address; INP -> PC; IM
2: ADC; Add with carry; (R0+INP) -> R0:ALUC -> PF[0]
3: SBB; Subtract with borrow; (R0-INP) -> R0:ALUC -> PF[0]
4: JSR; Jump to subroutine; PC -> SS
5: RTS; Return from subroutine; SS -> PC
6: JCS; Jump if carry set; IF ( PF[0] = 0b1 ) { INP -> PC }
7: LDA; Load into A; INP -> R0
8: LDB; Load into B; INP -> R1
9: LDC; Load into C; INP -> R2
A: SCX; Set Cursor X; INP -> CX
B: SCY; Set Cursor Y; INP -> CY
C: SCRY; Set Carry; INP -> PF[0]
### Registers
Number of Registers: 5
#### Register Names (REG \<NUM\>: \<NAME\>)
REG 0: A
REG 1: B
REG 2: C
REG 3: Cursor X (CX)
REG 4: Cursor Y (CY)
REG 5: Program Counter (PC)
REG 6: Proccessor Flags (PF)
