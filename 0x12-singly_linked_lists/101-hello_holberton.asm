section .data
        hello_msg db "Hello, Holberton", 0
        format db "%s", 0

section .text
        extern printf


global main
main:
        push rbp                ; Preserve the base pointer
        mov rbp, rsp            ; Set the base pointer
        sub rsp, 8              ; Allocate space on the stack
        mov rdi, format         ; First arguement: format string
        mov rsi, hello_msg      ; Second arguement: message string
        xor eax, eax            ; Clear EAX register
        call printf             ; Call printf function
        add rsp, 8              ; Deallocate space from the stack
        xor eax, eax            ; Set return value to 0 (success)
        leave                   ; Restore the base pointer and deallocate stack frame
        ret                     ; Return from the main function
