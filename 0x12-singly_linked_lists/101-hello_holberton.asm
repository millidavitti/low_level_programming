global main
extern printf

section .data
    msg db "Hello, Holberton", 0
    fmt db "%s", 10, 0

section .text
main:
    push rbp
    mov rdi, fmt
    mov rsi, msg
    xor rax, rax
    call printf
    xor rax, rax
    pop rbp
    ret
