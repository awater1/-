a = [ 1 1 1];
b = [0 1];
sys = tf(b,a); % ��ȡϵͳģ��
t = -20:0.01:20; % ��ʱ�� t ������ɢ����
ft = cos(t)+cos(10*t);
y = lsim(sys,ft,t);
plot(t,y);
xlabel('t/s')
ylabel('y(t)')