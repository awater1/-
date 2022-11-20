syms t w   ;             % �������
f = exp(-t).*heaviside(t)   ;     % �����ʼ�ź�    
fw = fourier(f,t,w)  ; 
subplot(211),
fplot(abs(fw),[-6,6]) ;  
grid on  ; % ������
xlabel('t/s')  ;
ylabel('f(t)') ;
title('������');

phase = atan(imag(fw)/real(fw));
subplot(212),ezplot(phase);grid on,title('��λ��')

