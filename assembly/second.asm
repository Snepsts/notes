mov ecx, 10000;
mov eax, 0;
Sum: add eax, ecx;
jz Stop;
loop Sum;

Stop: mov [xxxx], eax;
