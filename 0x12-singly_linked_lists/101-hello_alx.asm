section .data
    message db "Hello, Holberton", 10, 0   ; The string with newline and null terminator

section .text
    global main                      ; Entry point for linking with gcc
    extern printf                    ; Declare printf from libc

main:
    ; Set up arguments for printf
    mov rdi, message                 ; First argument (format string)
    xor rax, rax                    ; Clear rax (required for variadic functions like printf)
    call printf                     ; Call printf

    ; Return 0 from main
    mov eax, 0
    ret
