syms t w   ;           
f = 1/(1 + w^2)   ;    
g = ifourier(f,t)  ; 

fplot(g,[-6,6]) ;  
grid on  ; % ������
xlabel('t/s')  ;
ylabel('g(t)') ;
title('����ͼ');

