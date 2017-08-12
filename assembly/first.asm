mov eax, 0;
mov ebx, 10000;
Sum: add eax, ebx;

dec ebx;
jz Stop;
jmp Sum;

Stop: mov [xxxx], eax;
