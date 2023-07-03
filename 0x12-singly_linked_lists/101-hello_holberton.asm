section .data
    hello_msg db "Hello, Holberton", 0
    newline db 10

section .text
    global main
    extern printf

main:
    ; Prepare the arguments for printf
    mov rdi, hello_msg   ; Format string
    xor rax, rax        ; Clear RAX (no floating-point arguments)
    call printf         ; Call the printf function

    ; Print a new line
    mov rdi, newline    ; Format string for newline
    xor rax, rax        ; Clear RAX (no floating-point arguments)
    call printf         ; Call the printf function

    ; Exit the program
    xor rdi, rdi        ; Set exit code to 0
    mov rax, 60         ; syscall number for exit
    syscall             ; Invoke syscall to exit

section .bss
    ; Define any uninitialized variables (if needed) in the BSS section
