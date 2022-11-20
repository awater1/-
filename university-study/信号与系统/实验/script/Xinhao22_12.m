dt=0.01;
t=-6:dt:6;
ft=exp(-t).*heaviside(t);
N=2000;
k=-N:N;
w=pi*k/(N*dt);
fw=dt*ft*exp(-1i*t'*w);
phase = angle(fw); 
fw=abs(fw);

subplot(311),
plot(t,ft),grid on
axis([-6 6 0 1])
xlabel('w'),ylabel('f(w)')
title('����');
subplot(312),
plot(w,fw),grid on
axis([-20 20 0 1.2])
xlabel('w'),ylabel('f(w)')
title('�����ף���ֵ���㣩');
subplot(313),
plot(w,phase),
axis([-20 20 -2 2 ])
grid on,
title('��λ�� ����ֵ���㣩');