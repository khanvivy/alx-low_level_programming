section .data
        fmt db "%s", 10, 0
        msg db "Hello, Holberton", 0

        section .text
        extern printf
        global main

main:
        push
