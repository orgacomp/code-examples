    .section    .text
    .global     sumar_asm

// int sumar_asm(int *v [rdi], unsigned length [esi]);

sumar_asm:

    xor %rax, %rax
    xor %rcx, %rcx

    .ciclo:
        
        add (%rdi,%rcx), %eax
        inc %rcx
        cmp %esi, %ecx
        jne .ciclo
    
    ret
