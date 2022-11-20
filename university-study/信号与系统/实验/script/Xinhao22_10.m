close all; clc;clear all;
dt = 1e-3; %ʱ��������
t=-10:dt:10; %�ź���Ҫȡֵ����
w = -20:0.01:20; %�ź�Ƶ����Ҫȡֵ����
[W,T] = meshgrid(w,t); %���ɾ���
%���ź�
tao=4;
xt1 = rectpuls(t,tao);
Xjw1 = dt*xt1*exp(-1i*T.*W); %���þ���-�����˷�����
%��ͼ
subplot(3,1,1); plot(t,xt1);
title('G_{4}(t)'); xlabel('t'); ylim([-0.1 1.1])
subplot(3,1,2); plot(w,abs(Xjw1));
title('G_{4}(t)�ķ�����'); xlabel('\omega')
subplot(3,1,3); plot(w,angle(Xjw1).*(abs(Xjw1)>=1e-3));%ȥ����ֵ������������
title('G_{4}(t)����λ��'); xlabel('\omega'); ylim([-3.2 3.2])