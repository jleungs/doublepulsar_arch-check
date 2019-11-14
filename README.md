# DoublePulsar architecture check
Shellcode magic POC used by DoublePulsar to determine architecture

## Compiling
`gcc -fno-stack-protector -z execstack poc.c -m32 -o poc32`

`gcc -fno-stack-protector -z execstack poc.c -m64 -o poc64`

## Assembly Shellcode
```
; Assembly on x86
31C0                     xor eax,eax
40                       inc eax
90                       nop
C3                       ret

; Assembly on x64
31C0                     xor eax,eax
4090                     nop
C3                       ret
```
