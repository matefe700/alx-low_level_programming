section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    push rbp
    mov rbp, rsp

    ; Push the format string argument onto the stack
    mov rdi, format
    ; Push the hello string argument onto the stack
    mov rsi, hello
    ; Call printf to print the hello string
    call printf

    ; Push the newline string argument onto the stack
    mov rdi, newline
    ; Call printf to print the newline
    call printf

    mov rsp, rbp
    pop rbp

    ; Exit the program
    mov eax, 0
    ret
