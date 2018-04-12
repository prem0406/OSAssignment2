#include<stdlib.h>
#include<stdio.h>
int main()
{
	long t_pservice,t_preplace,t_maccess,t_eaccess;
	float p_pservice,p_preplace;
	double p;
	t_pservice=8000000;
	t_preplace=20000000;
	p_preplace=0.7;
	p_pservice=1-p_preplace;
	t_maccess=100;
	t_eaccess=200;
	p=(t_eaccess-t_maccess)/(t_pservice*p_pservice+t_preplace*p_preplace-t_maccess);
	printf("Page Fault Rate: %lf \n",p*100);

	//printf("Page Fault Rate: %lf \n",p);
	

}
